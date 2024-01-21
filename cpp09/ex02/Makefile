NAME = PmergeMe

SRC = main.cpp PmergeMe.cpp

OBJ = ${SRC:.cpp=.o}

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : ${NAME}

${NAME}: ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re : fclean all
