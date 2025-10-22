TYPE := .cpp
SRC  := main
OUT_DIR := out

ifeq ($(TYPE), .c)
	CC := gcc
else ifeq ($(TYPE), .cpp)
	CC := g++
endif

src := $(SRC)$(TYPE)
out := $(subst $(TYPE),.exe,$(SRC))

# always runs
always:
ifeq ($(OS),Windows_NT)
	@if not exist $(OUT_DIR) mkdir $(OUT_DIR)
else
	mkdir -p $(OUT_DIR)
endif
always: $(out)

$(out) : $(src)
	$(CC) -o $(OUT_DIR)/$(out) $(src)
