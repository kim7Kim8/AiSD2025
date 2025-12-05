CXX = g++
CXXFLAGS = -std=c++11
TARGET = demo

$(TARGET): random_sampling.cpp
 $(CXX) $(CXXFLAGS) -o $(TARGET) random_sampling.cpp

clean:
 rm -f $(TARGET)

run: $(TARGET)
 ./$(TARGET)
