CC=gcc
CFLAGS=-Wall -Wextra -Werror
TARGET=starter
TEST_TARGET=test_challenge02

all: $(TARGET)

$(TARGET): starter.c
	$(CC) $(CFLAGS) -o $(TARGET) starter.c

test: starter.c test_challenge02.c
	$(CC) $(CFLAGS) -o $(TEST_TARGET)  test_challenge02.c starter.c
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
