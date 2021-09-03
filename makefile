flags=-Wall -Wextra -pedantic -lncurses -lm


celc: main.c info.c basic.c lookup.c multi.c definitions.h makefile
	gcc $(flags) -o celc main.c info.c basic.c lookup.c multi.c

clean:
	rm *.gch
	rm *.o
	rm celc

