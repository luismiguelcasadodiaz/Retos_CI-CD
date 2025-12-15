CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge01

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test: starter.c test_challenge01.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) starter.c test_challenge01.c
	./$(TEST_TARGET)
test1: test_challenge01.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET) test_challenge01.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
