CXX = g++
CXXFLAGS = -std=c++11 -O2
TARGET = cost_func.exe

all: $(TARGET)

$(TARGET): main.cpp cost_func.cpp cost_func.hpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp cost_func.cpp

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)