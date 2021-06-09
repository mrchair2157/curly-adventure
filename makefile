CC=gcc
flags=-o
object=-c



celc: main.o 
	$(CC) main.o $(flags) celc
		rm *.o

main.o: main.c info.h basic.h
	$(CC) $(object) main.c

clean:
	rm *.o