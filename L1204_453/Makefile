CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = random_sampling_demo

$(TARGET): main.cpp random_sampling.cpp random_sampling.hpp
 $(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp random_sampling.cpp

clean:
 rm -f $(TARGET)

run: $(TARGET)
 ./$(TARGET)
