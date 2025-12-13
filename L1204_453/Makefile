CXX = g++
CXXFLAGS = -std=c++11 -I. -Wall -Wextra
TARGET = tsp_random_sampling

MY_SOURCES = tsp_sampling.cpp
MY_OBJECTS = $(MY_SOURCES:.cpp=.o)

OTHER_SOURCES = tsp_helpers.cpp main.cpp
OTHER_OBJECTS = $(OTHER_SOURCES:.cpp=.o)

OBJECTS = $(MY_OBJECTS) $(OTHER_OBJECTS)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

tsp_sampling.o: tsp_sampling.cpp tsp_sampling.hpp
	$(CXX) $(CXXFLAGS) -c tsp_sampling.cpp -o tsp_sampling.o

tsp_helpers.o: tsp_helpers.cpp tsp_helpers.hpp tsp_sampling.hpp
	$(CXX) $(CXXFLAGS) -c tsp_helpers.cpp -o tsp_helpers.o

main.o: main.cpp tsp_sampling.hpp tsp_helpers.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm -f $(OBJECTS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

show-mine:
	@echo "Файлы из листинга 12.4: tsp_sampling.hpp tsp_sampling.cpp"

.PHONY: all clean run show-mine