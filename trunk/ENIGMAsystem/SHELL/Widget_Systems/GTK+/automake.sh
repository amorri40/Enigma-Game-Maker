# Call this file from the directory in question if you would like a generic
# Makefile generated which invokes GCC for each individual file.

echo "#Awesome Makefile generated by custom automake.sh" > Makefile
echo "" >> Makefile;
echo "PKGARGS:=\$(shell pkg-config --cflags gtk+-2.0)" >> Makefile;
echo "" >> Makefile;

for file in *.cpp ;
  do
  {
    printf "\$(OBJECTS)/${file%.cpp}.o: $file" >> Makefile;
    for i in `c_incl $file | gawk '/\/usr\/include/ { next } { print } '`;
    do
      printf " $i" >> Makefile;
    done;
    echo "" >> Makefile;
    
    echo "	\$(CXX) -c $file		-o \$(OBJECTS)/${file%.cpp}.o \$(PKGARGS) \$(GFLAGS) \$(ECPPFLAGS)"  >> Makefile;
  };
  done;

echo "" >> Makefile;

#create the eobjs folder
echo "\$(OBJECTS):" >> Makefile;
echo "	-mkdir -p \$(OBJECTS) || mkdir \"\$(OBJECTS)\"" >> Makefile;
echo "" >> Makefile;

# Generate target
printf "this: \$(OBJECTS) " >> Makefile;
for file in *.cpp ;
  do printf "\$(OBJECTS)/${file%.cpp}.o " >> Makefile; 
  done;
echo "" >> Makefile;

echo "" >> Makefile;
echo "clean:" >> Makefile;
echo "	-rm .eobjs/*/*/*" >> Makefile;

