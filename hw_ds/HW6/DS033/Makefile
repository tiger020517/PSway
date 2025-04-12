CC		=	g++

SRC		=	DS033.cpp CouponStack.cpp

OBJ		=	$(SRC:%.cpp=%.o)

NAME	=	main


all		:	$(NAME)

$(NAME)	:	$(OBJ)
			$(CC) -o $@ $^

%.o		:	%.cpp %.h
			$(CC) -c $<

clean	:
			rm -f $(OBJ) $(NAME)

.PHONY	:	clean all