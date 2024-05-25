CC = gcc

CFLAGS =

LIBS =

SRCS = main.c

TARGET = main

$(TARGET): $(SRCS)
	$(CC) $(SRCS) -o $(TARGET) $(LIBS) $(CFLAGS)

clean:
	rm -f $(TARGET)

rebuid:
	clean $(TARGET)
