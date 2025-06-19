CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = a.out

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) main.c -o $(TARGET)

clean:
	rm $(TARGET)
