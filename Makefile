CFLAGS= -g -std=c++11
LDFLAGS=

all: main

main: main.o ABR.o
	g++ test.o ABR.o -o main

main.o: main.cpp ABR.h
	g++ $(CFLAGS) -c main.cpp -o main.o

ABR.o: ABR.cpp ABR.h
	g++ $(CFLAGS) -c  ABR.cpp -o ABR.o
clean:
	rm -f *.o
