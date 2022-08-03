CC=gcc
flags=-o
extras=-Wall -Wextra -pedantic

celc: main.c info.h basic.h
	$(CC) main.c basic.h info.h $(flags) celc $(extras)


clean:
	rm *.o
	rm celc
git:
	git pull
	git status
	sleep 15
	git commit -a
	git push origin main
