CC=gcc
flags=-o
object=-c

celc: main.o 
	$(CC) main.o $(flags) celc

main.o: main.c info.h basic.h
	$(CC) $(object) main.c

clean:
	rm *.o
	rm celc
git:
	git pull
	echo ctrl-c to stop you have 15 seconds
	sleep 15
	git commit -a
	git push origin main
