CC		=	g++
SRC		=	DS031.cpp MyStack.cpp
OBJ		=	$(SRC:.cpp=.o)
OUT		=	main

all		:	$(OBJ)
			$(CC) -o $(OUT) $^

%.o		:	%.cpp %.h
			$(CC) -c $<

clean	:
			rm -f $(OBJ) $(OUT)

.PHONY	:	all clean

