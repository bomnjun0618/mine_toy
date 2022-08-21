SRCS = 4대보험_계산기.c\
	   output.c\
	   charput.c\

OBJS = $(SRCS:.c=.o)
TARGET = 4insurance
RM = rm -f


%.o : %.c
	${CC} -include ./insurance.h -o $@ -o $@ -c $<

all : ${TARGET}

${TARGET} : ${OBJS}
	${CC} -I ./ $^ -o $@

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${TARGET}

re :
	make fclean
	make all

.PHONY : all clean fclean re
