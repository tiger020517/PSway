CC			=	g++
CLFAGS		=	-c
SRC			=	DS032.cpp MyStack.cpp
OUT			=	main



all				:	$(SRC)
					$(CC) -o $(OUT) $^

data1			:	$(SRC)
					$(CC) -o $(OUT) $^ -D DATA=\"datas1.txt\"

data2			:	$(SRC)
					$(CC) -o $(OUT) $^ -D DATA=\"datas2.txt\"

clean			:
					rm -f $(OUT)


.PHONY	:	all clean data1 data2