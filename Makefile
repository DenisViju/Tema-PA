CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC_DIR = src
DATA_DIR = data
REPORT_DIR = report

SRC_FILES = $(SRC_DIR)/main.c $(SRC_DIR)/lobster.c
DATA_FILES = $(DATA_DIR)/generate_data.c

EXEC = lobster_app
DATA_EXEC = generate_data

all: $(EXEC) $(DATA_EXEC)

$(EXEC): $(SRC_FILES)
	$(CC) $(CFLAGS) -o $@ $^

$(DATA_EXEC): $(DATA_FILES)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(EXEC) $(DATA_EXEC)
