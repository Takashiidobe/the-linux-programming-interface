CFLAGS = -std=c99 -D_POSIX_C_SOURCE=200809L
DEBUG_FLAGS = -g -O0
RELEASE_FLAGS = -Os
BUILD_DIR = build
SRC_DIR = .

SRCS = $(shell find . -type f -name "*.c")
PROGS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SRCS))

all: $(PROGS)

build/%: $(SRC_DIR)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(RELEASE_FLAGS) $< -o $@$(VERSION)$(SUFFIX)

clean:
	rm -r $(BUILD_DIR)

define HELP_TEXT
make                  build all utils
make clean 						remove the build dir
endef

export HELP_TEXT

help:
	@echo "$$HELP_TEXT"
