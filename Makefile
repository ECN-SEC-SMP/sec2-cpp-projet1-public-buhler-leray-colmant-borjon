OBJS	= Parcelle.o main.o
SOURCE	= Parcelle.cpp main.cpp
HEADER	= Carte.hpp Parcelle.hpp Point2D.hpp Polygone.hpp
OUT	= main.out
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

Parcelle.o: Parcelle.cpp
	$(CC) $(FLAGS) Parcelle.cpp -std=c++11

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -std=c++11


clean:
	rm -f $(OBJS) $(OUT)