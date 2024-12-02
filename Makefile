TARGET=day01

all: install run

install:
	g++ -o $(TARGET) $(TARGET).cpp

run: 
	./$(TARGET)
