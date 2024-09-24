#Defines the compiler
CC = g++

#Compile with all errors and warnings
CFLAGS = -g -Wall -Wextra

#Readies vector for its use as an executable and for use in the following compilation lines
default: vector

#Marks all the files that will be compiled 
vector: Vector.o main.o
	$(CC) $(CFlags) -o vector Vector.o main.o

#Compiles the Vector.cpp and Vector.h files 
Vector.o: Vector.cpp Vector.h
	$(CC) $(CFlags) -c Vector.cpp

#Cinpiles the main.cpp and Vector.h files 
main.o: main.cpp Vector.h
	$(CC) $(CFLAGS) -c main.cpp

#cleans out any unnecary items post compiling 
clean:
	$(RM) *.0*~ vector
