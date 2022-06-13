##
## EPITECH PROJECT, 2022
## CLY
## File description:
## Main Makefile to build project
##

SRC = $(wildcard cly_string/*.c \
				 cly_linked_list/*.c \
				 cly_io/*.c \
				 cly_lib/*.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -W -Wall -Werror -Wextra -I../../include
TARGET = libcly.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re : fclean all