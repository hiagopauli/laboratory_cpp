CXX = g++
CXXFLAGS = -std=c++17 -g

SRCS = $(filter-out triangle_test.cpp, $(wildcard *.cpp))
OBJS = $(SRCS:.cpp=.o)
EXEC = app

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp triangle.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXEC) test_triangle


GTEST_INCLUDE = $(shell brew --prefix googletest)/include
GTEST_LIB = $(shell brew --prefix googletest)/lib
GTEST_LIBS = -L$(GTEST_LIB) -lgtest -lgtest_main -lpthread

TEST_SRCS = triangle_test.cpp triangle.cpp
TEST_EXEC = test_triangle

$(TEST_EXEC): $(TEST_SRCS) triangle.h
	$(CXX) $(CXXFLAGS) -I$(GTEST_INCLUDE) $(TEST_SRCS) $(GTEST_LIBS) -o $@

test: $(TEST_EXEC)
	./$(TEST_EXEC)
