SRCS =		main.cpp \

INCLUDES =	./Vector/vector.hpp
			./Stack/stack.hpp
			./Map/map.hpp

NAME =		ft_containers

FLAGS =		-Wall -Wextra -Werror --std=c++98

.PHONY: 	all clean fclean re

all: 		$(NAME)

$(NAME):	$(INCLUDES) $(SRCS)
			clang++ $(SRCS) $(FLAGS) -o $@

clean:
			rm -rf *.o
            rm -rf .DS_Store

fclean:		clean
			rm -rf $(NAME)

re:			fclean all