CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -pedantic

ListTest-1: ListTest-1.o FeetInches.o
	$(CXX) $(CXXFLAGS) -o $@ $^

ListTest-1.o: ListTest-1.cpp ListCollection.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

FeetInches.o: FeetInches.cpp FeetInches.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f ListTest-1.o FeetInches.o ListTest-1
