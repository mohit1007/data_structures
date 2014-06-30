CC = g++
CFLAGS = -g -Wall
TARGET = stack
PROGRAM2 = resize_array
POINTERS = pointers
RESIZE_STACK = resize_stack
all: $(TARGET) $(PROGRAM2) $(POINTERS) $(RESIZE_STACK)
$(TARGET): $(TARGET).cpp $(TARGET).h
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
$(PROGRAM2): $(PROGRAM2).cpp
	$(CC) $(CFLAGS) -o $(PROGRAM2) $(PROGRAM2).cpp
$(POINTERS): $(POINTERS).cpp
	$(CC) $(CFLAGS) -o $(POINTERS) $(POINTERS).cpp
$(RESIZE_STACK): $(RESIZE_STACK).cpp
	$(CC) $(CFLAGS) -o $(RESIZE_STACK) $(RESIZE_STACK).cpp
clean: 
	$(RM) $(TARGET) $(PROGRAM2) $(POINTERS) $(RESIZE_STACK)
