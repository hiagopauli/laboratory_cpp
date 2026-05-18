CXX = g++
CXXFLAGS = -std=c++17 -g
SRCS =$(filter-out test_quadratic.cpp,  $(wildcard *.cpp))
OBJS = $(SRCS:.cpp=.o)
EXEC = app

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp %.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXEC)


GTEST_INCLUDE = $(shell brew --prefix googletest)/include
GTEST_LIB = $(shell brew --prefix googletest)/lib
GTEST_LIBS = -L$(GTEST_LIB) -lgtest -lgtest_main -lpthread


TEST_SRCS = test_quadratic.cpp quadratic.cpp
TEST_EXEC = test_quadratic

$(TEST_EXEC): $(TEST_SRCS) quadratic.h
	$(CXX) $(CXXFLAGS) -I$(GTEST_INCLUDE) $< quadratic.cpp $(GTEST_LIBS) -o $@


test: $(TEST_EXEC)
	./$(TEST_EXEC)
