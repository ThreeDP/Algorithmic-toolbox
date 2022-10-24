################  COLORS	##################
L_RED			=			'\033[0;31m'
L_REDB			=			'\033[1;31m'
L_WHITE			=			'\033[0;37m'
L_WHITEB		=			'\033[1;37m'
L_YELLOW		=			'\033[0;33m'
L_YELLOWB		=			'\033[1;33m'
L_GREEN			=			'\033[0;32m'
L_GREENB		=			'\033[1;32m'
################ LIBRARY	##################
NAME 			= 			lib_alg.a
################ MANDATORY	##################
SRCS 			=			APlusB.c	MaxPairwiseProduct.c
################ OTHERs		##################
FLAGS 			=			-Wall -Werror -Wextra
HEADER 			=	 		lib_alg.h
################ RULES		##################
all: 		$(NAME)

%.o: 		%.c
	cc -o 		$@ -c $< -I ./ $(FLAGS)

$(NAME): 	$(SRCS:.c=.o)
	ar -rcs 	$(NAME) $(SRCS:.c=.o)
	@echo		"$(L_YELLOWB) Finish Library... $(L_WHITE)"

norm:
	@echo		"$(L_YELLOWB) NORM executing... $(L_WHITE)"
	@norminette 	$(SRCS) $(HEADER)
	@echo		"$(L_WHITEB) END NORM! $(L_WHITE)"

clean:
	@rm -f 		$(SRCS:.c=.o) $(SRCS_BOUNS:.c=.o)
	@echo		"$(L_YELLOWB) Objects Removed... $(L_WHITE)"

fclean: 	clean
	@rm -f 		$(NAME)
	@echo		"$(L_YELLOWB) Source Removed... $(L_WHITE)"

re: 		fclean all

.PHONY: 	all bonus fclean clean re
