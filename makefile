CC=gcc
flags=-o
object=-c
extras=-Wall -Wextra -pedantic
celc: main.o 
	$(CC) main.o $(flags) celc

main.o: main.c info.h basic.h
	$(CC) $(object) main.c

clean:
	rm *.o
	rm celc
git:
	git pull
	git status
	sleep 15
	git commit -a
	git push origin main
