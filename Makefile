CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

test-all: test-1-wildfire test-2-wildfire test-3-wildfire

CATCH = test/catch/catch.o

test-1-wildfire: test/test-1-wildfire.o wildfire.cpp $(CATCH)
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success
test-2-wildfire: test/test-2-wildfire.o wildfire.cpp $(CATCH)
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success
test-3-wildfire: test/test-3-wildfire.o wildfire.cpp $(CATCH)
	$(CXX) $(CXXFLAGS) -o test/$@ $^
	test/$@ --success

clean:
	rm -rf *.dSYM
	$(RM) *.o *.gc* test/test-1-wildfire test/test-2-wildfire test/test-3-wildfire $(CATCH)

