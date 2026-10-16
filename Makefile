# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsewad <fsewad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/29 11:11:23 by fsewad            #+#    #+#              #
#    Updated: 2026/09/29 11:11:24 by fsewad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC =    cc
CFLAGS =    -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
HEADER = libft.h 


all: $(NAME)

#$(NAME): $(OBJS)
#    @echo "Linking..."
#    $(CC) $(CFLAGS) $(OBJS) -o Program.exe


$(NAME): $(OBJS)
    @echo "Linking..."
    ar rcs $(NAME) $(OBJS)

%.o:%.c $(HEADER)
    @echo "Compilin $<"
    $(CC) $(CFLAGS) -c $< -o $@



.PHONY: all clean
clean:
    rm *.o 
fclean: clean
    rm *.a

re: fclean all



#f.o : f.c
    #@echo "Compiling f.c"
    #gcc $(CFLAGS) -c f.c

#main.o : main.c
    #@echo "Compiling main.c"
    #gcc $(CFLAGS) -c main.c

#faress.o : faress.c
    #@echo "Compiling faress.c"
    #gcc $(CFLAGS) -c faress.c