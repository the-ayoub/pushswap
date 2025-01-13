# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aybelhaj <aybelhaj@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/25 21:50:13 by aybelhaj          #+#    #+#              #
#    Updated: 2025/01/08 12:30:21 by aybelhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap
AR		=	ar
ARFLAGS	=	-rcs
CC		=	cc
CFLAGS	=	-g -Wall -Wextra -Werror

OBJDIR	=	build
SRCS	=	push_swap.c checker.c  main.c swap.c push.c rotate.c rrotate.c order.c index.c

OBJS	=	$(addprefix $(OBJDIR)/, ${SRCS:.c=.o})
LIBFT_PATH	=	./libft
LIBFT		=	$(LIBFT_PATH)/libft.a

PURPLE	=	\033[0;35m
BLUE	=	\033[0;34m
RESET	=	\033[m

all: $(NAME)

$(LIBFT):
	@printf "%-42b%b" "$(PURPLE)$(*F):" "$(BLUE)$(@)$(RESET)\n"
	@make -C $(LIBFT_PATH) --silent
	@make bonus -C $(LIBFT_PATH) --silent

$(OBJS): $(OBJDIR)/%.o : %.c pushswap.h | $(OBJDIR)
	@printf "%-42b%b" "$(PURPLE)$(<):" "$(BLUE)$(@F)$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir $(OBJDIR)

$(NAME): $(OBJS) $(LIBFT)
	@printf "%-42b%b" "$(PURPLE)$(*F)pushswap:" "$(BLUE)$(@)$(RESET)\n"
	@cp $(LIBFT) $@
	@$(CC) $(CFLAGS) $^ -o $(NAME)

fclean: clean
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@make $@ -C $(LIBFT_PATH) --silent
	@rm -rf $(NAME)

clean:
	@printf "%b" "$(BLUE)$(@)ing...$(RESET)\n"
	@make $@ -C $(LIBFT_PATH) --silent
	@rm -rf $(OBJDIR)

re:    fclean all

.PHONY: all clean fclean re $(LIBFT)
