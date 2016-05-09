all: arr_stack

arr_stack : arr_stack.o main.o
	g++ -o arr_ arr_stack.o main.o

main.o : main.cpp
	g++ -c main.cpp

arr_stack.o: arr_stack.h arr_stack.cpp
	g++ -c arr_stack.cpp

clean:
	rm -f arr_stack *.o
