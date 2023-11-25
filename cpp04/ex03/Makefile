NAME =  AMateria

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp  

OBJ = ${SRC:.cpp=.o}

CPPFLAGS =-Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${CPPFLAGS} ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	c++ ${CPPFLAGS} -c $<

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean     all