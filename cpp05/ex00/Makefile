NAME = Bureaucrat

CPPFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3 -std=c++98

CXX = c++

SRC = main.cpp Bureaucrat.cpp

OBJ = {SRC: .cpp=.o}

all : ${NAME}

${NAME} : ${SRC}
	${CXX} ${CPPFLAGS}  ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	${CXX} ${CPPFLAGS}  ${SRC} -c $<

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

re : fclean all
