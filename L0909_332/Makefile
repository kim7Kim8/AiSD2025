CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11
TARGET = find_paths

$(TARGET): find_paths.cpp main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) find_paths.cpp main.cpp

clean:
	rm -f $(TARGET).exe

run: $(TARGET)
	./$(TARGET).exe

.PHONY: clean run