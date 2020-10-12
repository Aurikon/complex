all: main

main: main.o complex.o
	g++ main.o complex.o -o complex

main.o: main.cpp complex.h
	g++ -c main.cpp -o main.o

complex.o: complex.cpp
	g++ -c complex.cpp -o complex.o

clean:
	rm -rf main.o complex.o complex
