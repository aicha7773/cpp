NAME = easyfind

SRC = main.cpp

OBJ =${SRC:.cpp=.o}

CCXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : ${NAME}

${NAME} : ${SRC} ${OBJ} easyfind.hpp
	${CXX} ${CPPGLAGS} ${SRC} -o ${NAME}

clean : 
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
