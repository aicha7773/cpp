NAME = MutantStack

SRC = main.cpp

OBJ =${SRC:.cpp=.o}

CCXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : ${NAME}

%.o :  %.cpp MutantStack.hpp
	${CXX} ${CXXFLAGS} -c $< -o $@  

${NAME} : ${SRC} ${OBJ} 
	${CXX} ${CXXFLAGS} ${SRC} -o ${NAME}

clean : 
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
