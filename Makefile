CC = gcc
TARGET = sort
OBJECTS = selection.o bubble.o main.o

all : $(TARGET)
	
$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

clean:
	rm -rf $(TARGET)
	rm -rf $(OBJECTS)