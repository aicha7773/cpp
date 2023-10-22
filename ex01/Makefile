
NAME = phonebook

SRC = phonebook.cpp add.cpp search.cpp class.cpp

OBJ = {SRC  .c = .o}

CFLAGS = -std=c++98 -Wall -Wextra -Werror #-fsantitize=address -g3

all : ${NAME}

${NAME} : ${SRC}
	c++ ${CFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}
push :
	git add . && git commit -m "push" && git push