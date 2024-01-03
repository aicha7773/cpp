NAME = Serializer

SRC = main.cpp Serializer.cpp

OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -Wall -Wextra -Werror

CXX = c++

all : ${NAME}

${NAME} : ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	${CXX} ${CPPFLAGS} -c $< 

clean :
	rm -r ${OBJ}

fclean : clean
	rm -r ${NAME}

re: fclean all