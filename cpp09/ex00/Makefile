NAME = btc

SRC = main.cpp BitcoinExchange.cpp

OBJ = ${SRC:.cpp=.o}

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME}: ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS} ${SRC} -o ${NAME}

clean :
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re : fclean all
