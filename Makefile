CC = gcc
CFLAGS = -Wall -Wextra -Werror -O2 -Iinclude

SRC = src/main.c src/utils.c
TEST_SRC = tests/test_utils.c src/utils.c

TARGET = program
TEST_TARGET = test_program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

test: $(TEST_SRC)
	$(CC) $(CFLAGS) $^ -o $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)
