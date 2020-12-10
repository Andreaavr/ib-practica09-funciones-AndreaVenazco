CXX = g++						             # The C++ compiler command
CXXFLAGS = -std=c++14 -g	 # The C++ compiler options (C++14, preserve debug symbols and warn all)
LDFLAGS =						             # The linker options (if any)
	
# The all target builds all of the programs handled by the makefile.
all: vector_statistics
	
vector_statistics: vector_statistics.o vector_statistics_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	
# Indicate that the all and clean targets do not
# correspond to actual files.
.PHONY: all clean
	
# The following rule is effectively built into make and
# therefore need not be explicitly specified:
# mersenne.o: mersenne.cc
	$(CXX) $(CXXFLAGS) -c vector_statistics.cc
	
# The clean target removes all of the executable files
# and object files produced by the build process
# We can use it for additional housekeeping purposes
clean :
		rm -f vector *.o
		rm -rf *~ basura b i
		rm -rf a.out
		find . -name '*~' -exec rm {} \;
		find . -name basura 

