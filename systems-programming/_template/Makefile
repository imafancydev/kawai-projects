CC       := gcc
STD      := -std=c11
WARNINGS := -Wall -Wextra -Werror -pedantic
CPPFLAGS := -Iinclude -MMD -MP
CFLAGS   := $(STD) $(WARNINGS) -O2
LDFLAGS  :=
LDLIBS   :=

DEBUG_FLAGS := -g3 -O0 -DDEBUG -fsanitize=address,undefined -fno-omit-frame-pointer

TARGET   := app
SRC_DIR  := src
INC_DIR  := include
TEST_DIR := tests
BUILD_DIR := build
BIN_DIR  := bin

SRCS     := $(wildcard $(SRC_DIR)/*.c)
OBJS     := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRCS))
DEPS     := $(OBJS:.o=.d)
BIN      := $(BIN_DIR)/$(TARGET)

.PHONY: all debug run clean

all: $(BIN)

debug: CFLAGS := $(STD) $(WARNINGS) $(DEBUG_FLAGS)
debug: LDFLAGS += $(DEBUG_FLAGS)
debug: clean $(BIN)

$(BIN): $(OBJS) | $(BIN_DIR)
	$(CC) $(LDFLAGS) $(OBJS) -o $@ $(LDLIBS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(BIN_DIR) $(BUILD_DIR):
	mkdir -p $@

run: $(BIN)
	./$(BIN)

clean:
	$(RM) -r $(BUILD_DIR) $(BIN_DIR)

-include $(DEPS)

