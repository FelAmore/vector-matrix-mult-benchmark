CC=gcc

main: main.o utils.o
	${CC} -Wall -O0 -o main.out main.o utils.o

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o utils.o -c utils/utils.c
	gcc -o main_b_time.exe main_b_time.c mylib.o utils.o
	./main_b_time.exe

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o utils.o -c utils/utils.c
	gcc -o main_b_space.exe main_b_space.c mylib.o utils.o
	./main_b_space.exe

main.o: main.c 
	${CC} -o main.o -c main.c

utils.o: utils/utils.c 
	${CC} -o utils.o -c utils/utils.c

clean:
	rm -f *.o
	rm -f *.out