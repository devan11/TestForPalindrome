all: pal

pal: pal.o
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors pal.o -o pal    
pal.o: pal.cpp
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c pal.cpp
clean:
	rm -rf *o pal