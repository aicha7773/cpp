NAME = Serializer

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

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
