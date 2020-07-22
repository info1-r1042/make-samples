# Brief:  Sample 1
# Author: Javier Balloffet <javier.balloffet@gmail.com>
# Date:   Jul 5, 2019

.PHONY: clean

app: main.o functions.o
	gcc main.o functions.o -o app -lm

main.o: main.c
	gcc -c main.c -o main.o -Wall

functions.o: functions.c
	gcc -c functions.c -o functions.o -Wall

clean:
	rm -f ./*.o
	rm -f app
