NAME=libft.a
CC=gcc -Wall -Wextra -Werror -c
INCLUDE=./
INCLUDE_BONUS=./
PATH_SRC=./
PATH_BNS=./
PATH_OBJ=./
PATH_BNS_OBJ=./

                                                                                                                               
# fonction de la libft & Supplementaire 

FILES_SRC=	ft_atoi \
			ft_bzero \
			ft_calloc \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_memchr \
			ft_memcmp \
			ft_memcpy \
			ft_memset \
			ft_memmove \
			ft_putchar_fd \
			ft_putnbr_fd \
			ft_putstr_fd \
			ft_strchr \
			ft_strdup \
			ft_striteri \
			ft_strjoin \
			ft_strlcat \
			ft_strlcpy \
			ft_strlen \
			ft_strmapi \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_strtrim \
			ft_substr \
			ft_tolower \
			ft_toupper \
			ft_itoa \
			ft_split \
			ft_putendl_fd 

# fonction Bonus

FILES_BNS=	ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap 

OBJ=$(addsuffix .o, $(addprefix $(PATH_OBJ), $(FILES_SRC)))
OBJ_BONUS=$(addsuffix _bonus.o, $(addprefix $(PATH_BNS_OBJ), $(FILES_BNS)))


DEF 	= 	\x1B[1;0m
RED 	= 	\x1B[1;31m
PURPLE 	=	\x1B[1;34m
BLUE 	= 	\x1B[1;96m
GREEN 	= 	\x1B[1;32m
SILVER 	= 	\x1B[1;90m
YELLOW 	= 	\x1B[1;33m
WHITE	= 	\x1b[37m

all: $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@printf "\n\t\t\t      $(RED)$(NAME) $(GREEN) CREATED |✅|"
	@printf "\n"

$(NAME):
	@mkdir -p $(PATH_OBJ)
	@for FILE in $(FILES_SRC);do \
	$(CC) $(addsuffix .c, $(addprefix $(PATH_SRC), $${FILE})) -o $(addsuffix .o, $(addprefix $(PATH_OBJ), $${FILE})) -I $(INCLUDE); \
	printf "$(PURPLE)[ $(PURPLE)Object file$(WHITE) ||/\/\🔥/\/\|| ==> $(BLUE)$(PATH_OBJ)$(notdir $${FILE}).o$(SILVER) $(WHITE) <== $(PURPLE)] $(GREEN)Created ✅$(DEF)\n"; \
	done

bonus: $(NAME)
	@for FILE in $(FILES_BNS);do \
	$(CC) $(addsuffix .c, $(addprefix $(PATH_BNS), $${FILE})) -o $(addsuffix _bonus.o, $(addprefix $(PATH_BNS_OBJ), $${FILE})) -I $(INCLUDE_BONUS); \
	printf "$(PURPLE)[ $(PURPLE)Object file$(WHITE) ||/\/\🔥/\/\|| ==> $(BLUE)$(PATH_BNS_OBJ)$(notdir $${FILE}).o$(SILVER) $(WHITE) <== $(PURPLE)] $(GREEN)Created ✅$(DEF)\n"; \
	done
	@ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
	@rm -rf *.o
	@printf "\n$(BLUE)|🤧 - 🤧 - 🤧 - 🤧 - 🤧 - 🤧| $(RED) Cleaning are Completed $(YELLOW)|✅ - ✅ - ✅ - ✅ - ✅ - ✅|\n"; \

	@printf "\n" \

fclean: clean
	@rm -f $(NAME)
	@printf "\n$(YELLOW)|🚮 - 🚮 - 🚮 - 🚮 - 🚮 - 🚮| $(RED) Fcleaning are Completed $(BLUE)|✅ - ✅ - ✅ - ✅ - ✅ - ✅|\n"; \

	@printf "\n" \

re: fclean all bonus
	@printf "\n\t\t$(YELLOW)             ==$(GREEN)--------------------$(YELLOW)== $(BLUE)\n"; \

	@printf "\t\t$(YELLOW)             ||$(GREEN)--------------------$(YELLOW)||\n"; \

	@printf "\t\t$(YELLOW)             ||$(GREEN) Re are Completed ✅$(YELLOW)||"; \

	@printf "\n" \

	@printf "\t\t$(YELLOW)             ||$(GREEN) Re are Completed ✅$(YELLOW)||"; \

	@printf "\n" \

	@printf "\t\t$(YELLOW)             ||$(GREEN) Re are Completed ✅$(YELLOW)||"; \

	@printf "\n\t\t$(YELLOW)             ||$(GREEN)--------------------$(YELLOW)||\n"; \

	@printf "\t\t$(YELLOW)             ==$(GREEN)--------------------$(YELLOW)== $(BLUE)\n"; \

	@printf "\n" \



.PHONY: all clean fclean re bonus