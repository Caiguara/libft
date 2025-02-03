CC=cc
CFLAGS=-Wall -Werror -Wextra
SRC=$(wildcard src/*.c)
OBJ=$(SRC:/.c=%.o)