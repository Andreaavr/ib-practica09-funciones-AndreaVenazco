CXX = g++						             # The C++ compiler command
CXXFLAGS = -std=c++14 -g	 # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						             # The linker options (if any)
	
# The all target builds all of the programs handled by the makefile.
all: find_first_of
	
find_first_of: find_first_of.o find_first_of_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	
# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean
	
# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# find_first_of.o: find_first_of.cc
	$(CXX) $(CXXFLAGS) -c find_first_of.cc
	
# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
		rm -f mersenne *.o
		rm -rf *~ basura b i
		rm -rf a.out
		find . -name '*~' -exec rm {} \;
		find . -name basura 

