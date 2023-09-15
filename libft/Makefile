Library		= libft

files 	   = ft_strlen \
			 ft_memmove \
			 ft_memcpy \
			 ft_strlcpy \
			 ft_strlcat \
			 ft_isalpha \
			 ft_isdigit \
			 ft_isalnum \
			 ft_isascii \
			 ft_isprint \
			 ft_memset \
			 ft_bzero \
			 ft_toupper \
			 ft_tolower \
			 ft_strchr \
			 ft_strrchr \
			 ft_strncmp \
			 ft_memchr \
			 ft_memcmp \
			 ft_strnstr \
			 ft_atoi \
			 ft_calloc \
			 ft_strdup \
			 ft_substr \
			 ft_strjoin \
			 ft_strtrim \
			 ft_split \
			 ft_itoa \
			 ft_strmapi \
			 ft_putchar_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \
			 ft_putstr_fd \

bonus	  = ft_lstiter \
			ft_lstsize \
			ft_lstmap \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstadd_back \
			ft_lstlast \
			ft_lstclear \
			ft_lstdelone


			
Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

CBONUS	= $(bonus:%=%.c)

OBONUS	= $(bonus:%=%.o)

NAME	= $(OUTN)

all: make bonus $(NAME) run

$(NAME):
	@$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	@ar -rc $(OUTN) $(OFILES) $(OBONUS)

make bonus:
	@$(Compiler) $(CmpFlags) -c $(CBONUS) -I./

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

run:
	@cc $(CmpFlags) -c main.c -o main.o 
	@cc $(CmpFlags) -o main main.o -L. libft.a -lbsd
	@./main
	@echo

.PHONY: all, clean, fclean, re, run