##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compiles the libmy.a library binary
##

ECHO	=	/bin/echo -e
DEFAULT	=	"\e[0m"
DIM_T	=	"\e[2m"
BOLD_T	=	"\e[1m"
UNDLN_T	=	"\e[4m"
RED_C	=	"\e[31m"
GREEN_C	=	"\e[32m"
MAGEN_C	=	"\e[35m"
DEFAULT_C	=	"\e[39m"
LIGHT_RED	=	"\e[91m"
LIGHT_GREEN	=	"\e[92m"
WIERD_GREEN	=	"\e[38;5;10m"
LINE_RETURN	=	$(ECHO) ""

NAME	=	my
MY_PATH	=	./my
PRINTF_PATH	=	./printf
INCLUDE_PATH	=	./include


SRC_MY	=	my_arraylen.c \
			my_char_isalphanum.c \
			my_char_isin.c \
			my_char_islower.c \
			my_char_isnum.c \
			my_char_isprintable.c \
			my_char_isupper.c \
			my_dputchar.c \
			my_dputstr.c \
			my_fputchar.c \
			my_fputstr.c \
			my_free_fields.c \
			my_getnbr.c \
			my_isneg.c \
			my_put_nbr.c \
			my_putchar_err.c \
			my_putchar.c \
			my_putstr_err.c \
			my_putstr.c \
			my_revstr.c \
			my_show_word_array.c \
			my_showmem.c \
			my_showstr.c \
			my_sort_int_array.c \
			my_str_addchar.c \
			my_str_capitalize.c \
			my_str_isalpha.c \
			my_str_islower.c \
			my_str_isnum.c \
			my_str_isprintable.c \
			my_str_isupper.c \
			my_str_to_word_array.c \
			my_stralloc.c \
			my_strcat.c \
			my_strcmp.c \
			my_strcpy.c \
			my_strcpycat.c \
			my_strdup.c \
			my_strlen.c \
			my_strlowcase.c \
			my_strncat.c \
			my_strncmp.c \
			my_strncpy.c \
			my_strncpycat.c \
			my_strndup.c \
			my_strstr.c \
			my_strupcase.c \
			my_swap.c

SRC_PRINTF	=	my_dprintf.c \
				my_fprintf.c \
				my_printf_display.c \
				my_printf_fieldwidth.c \
				my_printf_flags.c \
				my_printf_globals.c \
				my_printf_precision.c \
				my_printf_put_nbr.c \
				my_printf_putnbr_base.c \
				my_printf_showstr.c \
				my_printf_str_to_word_array.c \
				my_printf_zeropadding.c \
				my_printf.c \
				my_sprintf.c \
				my_vdprintf.c \
				my_vfprintf.c \
				my_vprintf.c \
				my_vsprintf.c

CFLAGS	=	-Wall \
			-W \
			-Werror \
			-I $(INCLUDE_PATH)

SRCS	=	$(SRC_MY:%=$(MY_PATH)/%) \
			$(SRC_PRINTF:%=$(PRINTF_PATH)/%)

OBJ	=	$(SRCS:.c=.o)

all:	message $(NAME)

message:
	@$(LINE_RETURN)
	@$(ECHO) $(WIERD_GREEN)" _     _ _                          " $(DEFAULT)
	@$(ECHO) $(WIERD_GREEN)"| |   (_) |__  _ __ __ _ _ __ _   _ " $(DEFAULT)
	@$(ECHO) $(WIERD_GREEN)"| |   | | '_ \| '__/ _\` | '__| | | |" $(DEFAULT)
	@$(ECHO) $(WIERD_GREEN)"| |___| | |_) | | | (_| | |  | |_| |" $(DEFAULT)
	@$(ECHO) $(WIERD_GREEN)"|_____|_|_.__/|_|  \__,_|_|   \__, |" $(DEFAULT)
	@$(ECHO) $(WIERD_GREEN)"                              |___/ " $(DEFAULT)
	@$(LINE_RETURN)

$(NAME):	$(OBJ)
	@ar rc ./lib$(NAME).a $(OBJ) && \
	$(ECHO) $(GREEN_C)"\nCOMPILED:" $(LIGHT_GREEN) "lib$(NAME).a\n" $(DEFAULT) || \
	$(ECHO) $(RED_C)$(UNDLN_T)$(BOLD_T)"BUILD FAILED:" $(LIGHT_RED) "lib$(NAME).a"$(DEFAULT)"\n"

clean:
	@$(LINE_RETURN)
	@$(RM) $(OBJ)
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "lib$(NAME) object files" $(DEFAULT)

fclean:	clean
	@$(RM) ./lib$(NAME).a
	@$(ECHO) $(RED_C)"DELETED:" $(LIGHT_RED) "Binary lib$(NAME).a" $(DEFAULT)
	@$(LINE_RETURN)

re:		fclean all

%.o: %.c
	@$(CC) -c $(CFLAGS) -o $@ $< && \
	$(ECHO) $(DIM_T) "cc $(CFLAGS) -c -o " $@ $< $(DEFAULT) || \
	$(ECHO) "\n"$(MAGEN_C) $(UNDLN_T)$(BOLD_T)"cc $(CFLAGS) -c -o " $@ $<$(DEFAULT)"\n"

.PHONY: all $(NAME) message clean fclean re