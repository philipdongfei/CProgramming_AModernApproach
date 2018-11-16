inventory2: inventory2.o readline.o
	gcc -o inventory2.out inventory2.o readline.o
inventory2.o: inventory2.c readline.o
	gcc -c inventory2.c 
readline.o: readline.c
	gcc -c readline.c

.PHONY: clean
clean:
	rm *.out *.o
	echo clean done
