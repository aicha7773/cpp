NAME =  Polymorphism

SRC = main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJ = ${SRC:.cpp=.o}

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3

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