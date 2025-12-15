CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=starter.c suma.c
TARGET=app
TEST_TARGET=app


all: build

build: $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)
	./$(TARGET)

test: test_challenge10.c
	$(CC) $(CFLAGS) -DDEBUG -o $(TEST_TARGET) $(SRC) test_challenge10.c
	./$(TEST_TARGET)

package: build
	mkdir -p dist
	cp $(TARGET) dist/

clean:
	rm -f $(TARGET) $(TEST_TARGET)
	rm -rf dist

re: clean build