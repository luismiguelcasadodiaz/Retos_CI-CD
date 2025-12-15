CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge03

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test: test_challenge03.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge03.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
