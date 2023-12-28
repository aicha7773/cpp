NAME = Form

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address -g3 

CXX = c++

SRC = main.cpp Bureaucrat.cpp Form.cpp \
		AForm.cpp PresidentialPardonForm.cpp  RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

OBJ = ${SRC:.cpp=.o}

all : ${NAME}

${NAME} : ${SRC} ${OBJ}
	${CXX} ${CPPFLAGS}  ${SRC} -o ${NAME}

%.o : %.cpp %.hpp
	${CXX} ${CPPFLAGS}  ${SRC} -c $<

clean :
	rm ${OBJ}

fclean : clean
	rm ${NAME}

re : fclean all
