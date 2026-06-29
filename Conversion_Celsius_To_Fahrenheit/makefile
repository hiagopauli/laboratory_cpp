CXX = g++
CXXFLAGS = -std=c++17 -g -Wall
APP = app
APP_SRC = main.cpp

all: $(APP)

$(APP): $(APP_SRC)
	$(CXX) $(CXXFLAGS) $(APP_SRC) -o $(APP)

run: $(APP)
	./$(APP)

clean:
	rm -f $(APP) test_temp

GTEST_PREFIX = $(shell brew --prefix googletest)
GTEST_INCLUDE = $(GTEST_PREFIX)/include
GTEST_LIB = $(GTEST_PREFIX)/lib

GTEST_FLAGS = -I$(GTEST_INCLUDE) -L$(GTEST_LIB) -lgtest -lgtest_main -pthread

TEST_EXEC = test_temp
TEST_SRC = temperature_test.cpp

$(TEST_EXEC): $(TEST_SRC)
	$(CXX) $(CXXFLAGS) $(TEST_SRC) $(GTEST_FLAGS) -o $(TEST_EXEC)

test: $(TEST_EXEC)
	./$(TEST_EXEC)
