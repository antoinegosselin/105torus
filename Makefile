##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Main project's Makefile
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
DIM_T	=	"\e[2m"
BOLD_T	=	"\e[1m"
UNDLN_T	=	"\e[4m"
BLACK_C	=	"\e[30m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
YELLO_C	=	"\e[33m"
BLUE_C	=	"\e[34m"
MAGEN_C	=	"\e[35m"
CYAN_C	=	"\e[36m"
DEFAULT_C	=	"\e[39m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
LIGHT_YELLO	=	"\e[93m"
LIGHT_BLUE	=	"\e[94m"
LIGHT_MAGEN	=	"\e[95m"
LIGHT_CYAN	=	"\e[96m"
WIERD_GREEN	=	"\e[38;5;10m"
LINE_RETURN	=	$(ECHO) ""

NAME	=	105torus
LIB_NAME	=	my
SRC_NAME	=	src
INCL_NAME	=	include
TESTS_NAME	=	tests
UNIT_NAME	=	unit_test

ROOT_PATH	=	./
LIB_PATH	=	./lib/my
INCL_PATH	=	$(ROOT_PATH)$(INCL_NAME)
TESTS_PATH	=	$(ROOT_PATH)$(TESTS_NAME)
SRC_PATH	=	$(ROOT_PATH)$(SRC_NAME)

SRC	=	algos.c \
		bisection.c \
		error_handling.c

CFLAGS	=	-Wall \
			-W \
			-Werror \
			-I $(INCL_PATH) \
			-L$(LIB_PATH) -l$(LIB_NAME) \
			-lm

SRCS	=	$(SRC_PATH)/main.c \
			$(SRC:%=src/%)
SRC_TEST_1	=	$(TESTS_PATH)/test_newton.c \
				$(TESTS_PATH)/test_bisection.c \
				$(TESTS_PATH)/test_secant.c \
				$(SRC:%=src/%)
OBJ	=	$(SRCS:.c=.o)

all:	message $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIB_PATH) -s
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) && \
	$(ECHO) $(GREEN_C)"COMPILED:" $(LIGHT_GREEN) "$(NAME)" $(DEFAULT)"\n" || \
	$(ECHO) $(RED_C)$(UNDLN_T)$(BOLD_T)"BUILD FAILED:" $(LIGHT_RED) "$(NAME)"$(DEFAULT)"\n"

message:
	@$(ECHO) $(BLUE_C)" _  ___  ____  _" $(DEFAULT)
	@$(ECHO) $(BLUE_C)"/ |/ _ \| ___|| |_ ___  _ __ _   _ ___" $(DEFAULT)
	@$(ECHO) $(BLUE_C)"| | | | |___ \| __/ _ \| '__| | | / __|" $(DEFAULT)
	@$(ECHO) $(BLUE_C)"| | |_| |___) | || (_) | |  | |_| \__ \\" $(DEFAULT)
	@$(ECHO) $(BLUE_C)'|_|\___/|____/ \__\___/|_|   \__,_|___/\n' $(DEFAULT)
	@$(LINE_RETURN)

clean:
	@make clean -C $(LIB_PATH) -s
	@$(RM) $(OBJ)
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "$(NAME)'s object files" $(DEFAULT)
	@$(RM) *.gc*
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "GCOV files" $(DEFAULT)
	@$(RM) vgcore.*
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Valgrind files" $(DEFAULT)

fclean:	clean
	@make fclean -C $(LIB_PATH) -s
	@$(RM) $(NAME)
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Binary $(NAME)" $(DEFAULT)
	@$(RM) a.out
	@$(RM) unit_test*
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Other binaries" $(DEFAULT)

re:		fclean all

tests_run: fclean
	@make -C $(LIB_PATH) -s
	@$(ECHO) $(BLUE_C)" _   _       _ _     _____         _"$(DEFAULT)
	@$(ECHO) $(BLUE_C)"| | | |_ __ (_) |_  |_   _|__  ___| |_ ___"$(DEFAULT)
	@$(ECHO) $(BLUE_C)"| | | | '_ \| | __|   | |/ _ \/ __| __/ __|"$(DEFAULT)
	@$(ECHO) $(BLUE_C)'| |_| | | | | | |_    | |  __/\__ \ |_\__ \\'$(DEFAULT)
	@$(ECHO) $(BLUE_C)" \___/|_| |_|_|\__|   |_|\___||___/\__|___/\n"$(DEFAULT)
	@$(LINE_RETURN)
	@$(CC) -o $(UNIT_NAME)1 $(SRC_TEST_1) $(CFLAGS) --coverage -lcriterion
	@./$(UNIT_NAME)1
	@$(ECHO) $(LIGHT_CYAN)""
	@gcovr --exclude tests/
	@$(ECHO) $(LIGHT_BLUE)"\n"
	@gcovr --exclude tests/ --branches
	@$(ECHO) $(DEFAULT)

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< && \
	$(ECHO) $(DIM_T) "cc $(CFLAGS) -c -o " $@ $< $(DEFAULT) || \
	$(ECHO) "\n"$(MAGEN_C) $(UNDLN_T)$(BOLD_T)"cc $(CFLAGS) -c -o " $@ $<$(DEFAULT)"\n"

.PHONY: all $(NAME) message clean fclean re tests_run