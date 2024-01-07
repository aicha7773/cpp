NAME = Array

SRC = main.cpp

OBJ=${SRC:.cpp=.o}

all : ${NAME}

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

${NAME} : ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	${CXX} ${CPPFLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re: fclean all
