flags=-Wall -Wextra -pedantic -lm -lncurses -Werror


celc: objects/main.o objects/lookup.o objects/multi.o src/definitions.h makefile
	gcc -o celc objects/main.o objects/lookup.o objects/multi.o $(flags)

objects/main.o: src/main.c src/definitions.h
	gcc -c -o objects/main.o src/main.c $(flags)

objects/lookup.o: src/lookup.c src/definitions.h
	gcc -c -o objects/lookup.o src/lookup.c $(flags)

objects/multi.o: src/multi.c src/definitions.h
	gcc -c -o objects/multi.o src/multi.c $(flags)

clean:
	rm objects/*.o
	rm celc

