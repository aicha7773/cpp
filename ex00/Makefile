NAME = megaphone

SRC = megaphone.cpp

OBJ = {SRC  .c = .o}

CFLAGS = -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${SRC}
	c++ ${CFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

