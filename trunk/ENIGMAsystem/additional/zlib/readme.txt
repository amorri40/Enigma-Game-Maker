ENIGMA uses ZLib for resource compression. ZLib does not come with MinGW, so
I included it here instead of making existing GCC users download MinGW again
just for one folder, or have to download ZLib and compile it themselves. The
file originally was located in the include\ folder of the environment. 