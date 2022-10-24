################  COLORS	##################
L_RED			=			'\033[0;31m'
L_REDB			=			'\033[1;31m'
L_WHITE			=			'\033[0;37m'
L_WHITEB		=			'\033[1;37m'
L_YELLOW		=			'\033[0;33m'
L_YELLOWB		=			'\033[1;33m'
L_GREEN			=			'\033[0;32m'
L_GREENB		=			'\033[1;32m'
################ CONFIG		#################
DIR			=			../srcs/
SRCS_TEST 		= 			$(wildcard ./*.c)
HEADER			=			$(addperfix $(DIR), lib_alg.h)
HEADERS_TEST 		= 			minunit.h test.h
FLAGS 			= 			-Wall -Werror -Wextra
################ RULES		##################

all: 	run $(SRCS_TEST:.c=.o)

run:
	@cd 		$(DIR) && $(MAKE)

%.o: 	%.c $(HEADER)
	@echo		$@
	@cc 		-o $@ -c $< $(FLAGS)
	@gcc		$(FLAGS) $@ -I $(DIR) -L $(DIR) -l_alg
	@echo		"$(L_YELLOWB)"RUN TEST: $@ "$(L_WHITE)"
	@./a.out

norm:
	@cd 		$(DIR) && $(MAKE) $@

cleann:
	@rm 		-f $(SRCS_TEST:.c=.o)
	@rm		-f $(wildcard $(DIR)*.o)


clean:		cleann
	@cd 		$(DIR) && $(MAKE) $@


fclean: 	cleann
	@rm 		-f a.out
	@cd 		$(DIR) && $(MAKE) $@

re: fclean all
