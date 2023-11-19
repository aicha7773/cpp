NAME =  AMateria

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp ICharacter.cpp #IMateriaSource.cpp  

OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

all : ${NAME}

${NAME} : ${OBJ}
	c++ ${CPPFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean     all