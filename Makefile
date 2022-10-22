run: translate
	gcc -Wall -o brainfuck brainfuck.c
	./brainfuck

translate: compile
	./main hello.bf	brainfuck.c

compile: main.c
	gcc -Wall -o main main.c -g

valgrind: compile
	valgrind ./main

clean: 
	rm main
	rm brainfuck.c
	rm brainfuck