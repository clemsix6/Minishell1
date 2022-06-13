##
## EPITECH PROJECT, 2022
## CLY
## File description:
## Main Makefile to build project
##

SRC = src/minishell.c \
	  src/execute.c \
	  src/get_args.c \
	  src/get_path.c \
	  src/get_env_var.c \
	  src/command_pwd.c \
	  src/set_env_var.c \
	  src/command_cd.c \
	  src/command_env.c \
	  src/command_setenv.c
OBJ = $(SRC:.c=.o)
CFLAGS = -W -Wextra -Wall -Werror -I./include
LDFLAGS = -L./lib/cly -lcly
TARGET = mysh

all: make-lib $(TARGET)

$(TARGET): $(OBJ)
	gcc -o $(TARGET) $(OBJ) $(LDFLAGS)

make-lib:
	make -C ./lib/cly

clean:
	rm -f $(OBJ)
	make -C ./lib/cly clean

fclean: clean
	rm -f $(TARGET)
	make -C ./lib/cly fclean

re: fclean all