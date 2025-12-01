CXX = g++
CXXFLAGS = -std=c++11 -O2
TARGET = random_sampling.exe

all: $(TARGET)

$(TARGET): main.cpp random_sampling.cpp random_sampling.hpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp random_sampling.cpp

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)