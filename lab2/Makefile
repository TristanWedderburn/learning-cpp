CXXFLAGS= -std=c++14 -O2 -W -Wall -Wextra -pedantic
OBJFILES= lab2.m.o lab2.o readString.o

lab2: $(OBJFILES)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

lab2.m.o: lab2.m.cpp lab2.hpp readString.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES) lab2

.PHONY: clean
