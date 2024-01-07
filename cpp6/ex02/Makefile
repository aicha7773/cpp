NAME = Serializer

SRC = main.cpp Base.cpp  functions.cpp

OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

all : ${NAME}

${NAME} : ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	${CXX} ${CPPFLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re: fclean all
