# This shell script is to be run by ENIGMA Developers on Linux.
# It will generate a general-purpose Makefile containing a target
#    for every CPP file within two subdirectories of this folder.
# The generated Makefile should probably then be edited for target-specific files.
# The most obvious of these is standalone_*.cpp, which is removed automatically.

echo "#Awesome Makefile generated by ./genmake.sh: THIS SHOULD BE EDITED BY AN INTELLIGENT BEING." > Makefile
echo "# File consists of a lot of gobbledy followed by a target" >> Makefile;
echo "" >> Makefile;

echo "# DEBUG (faster compile)" >> Makefile;
echo "# SYMBOL_FLAGS       = -g" >> Makefile;
echo "# OPTIMIZATION_FLAGS =" >> Makefile;
echo "" >> Makefile;
echo "# RELEASE (faster runtime)" >> Makefile;
echo "SYMBOL_FLAGS       = -s # Strip symbol table" >> Makefile;
echo "OPTIMIZATION_FLAGS = -O3 # Optimize for speed" >> Makefile;
echo "# OPTIMIZATION_FLAGS = -Os # Optimize for size" >> Makefile;
echo "" >> Makefile;

echo "# OS and default target" >> Makefile;
echo "OS := \$(shell uname -s)" >> Makefile;
echo "ifeq (\$(OS), Linux)" >> Makefile;
echo "	ONAME := ../libcompileEGMf.so" >> Makefile;
echo "	INPLACEPARAM := -fPIC" >> Makefile;
echo "	MISCFLAGS :="  >> Makefile;
echo "else ifeq (\$(OS), Darwin)" >> Makefile;
echo "	ONAME := ../libcompileEGMf.dylib" >> Makefile;
echo "	INPLACEPARAM := -fPIC" >> Makefile;
echo "	MISCFLAGS :="  >> Makefile;
echo "else" >> Makefile;
echo "	ONAME := ../compileEGMf.dll" >> Makefile;
echo "	INPLACEPARAM :="  >> Makefile;
echo "	MISCFLAGS := -static-libstdc++ -static-libgcc" >> Makefile;
echo "endif" >> Makefile;
echo "" >> Makefile;

echo "# default target (because it appears first)" >> Makefile;
echo "default: \$(ONAME)" >> Makefile;
echo "" >> Makefile;

for subdir in */ */*/ ./; #Iterate 
  do
    for file in $subdir*.cpp ;
      do
      {
        pathless="${file##*/}";
        if [[ $pathless == \** ]]; 
          then continue; 
          fi
        printf ".eobjs/${pathless%.cpp}.o: $file" >> Makefile;
        for i in `c_incl $file | gawk '/\/usr\/include/ { next } { print } '`;
        do
          printf " $i" >> Makefile;
        done;
        echo "" >> Makefile;
        
        echo "	g++ -Wall \$(SYMBOL_FLAGS) \$(OPTIMIZATION_FLAGS) \$(MISCFLAGS) \$(INPLACEPARAM) -c  $file		-o .eobjs/${pathless%.cpp}.o \$(FLAGS)"  >> Makefile;
      };
      done;
  done;

echo "" >> Makefile;
echo "# Nobody knows the trouble I've seen, no... no... nooo..." >> Makefile;
echo "mkeobjs:" >> Makefile;
echo "	-mkdir .eobjs" >> Makefile;
echo "" >> Makefile;
printf "\$(ONAME): mkeobjs" >> Makefile;
  for subdir in */ */*/ ./; #Iterate 
    do
      for file in $subdir*.cpp;
      do 
        pathless="${file##*/}";
        if [[ $pathless == \** ]]; 
          then continue; 
          fi
        if [[ $pathless == standalone_* ]]; 
          then continue; 
          fi
        printf " .eobjs/${pathless%.cpp}.o" >> Makefile; 
      done;
    done;
    echo "" >> Makefile;
  
  echo "	g++ -shared \$(MISCFLAGS) \$(INPLACEPARAM) .eobjs/*.o -o \$(ONAME)" >> Makefile;

echo "" >> Makefile;
echo "win windows: \$(ONAME)" >> Makefile;
echo "lin linux unix: \$(ONAME)" >> Makefile;

echo "" >> Makefile;
echo "clean:" >> Makefile;
echo "	-rm .eobjs/*" >> Makefile;
echo "	-rm \$(ONAME)" >> Makefile;

echo "" >> Makefile;
