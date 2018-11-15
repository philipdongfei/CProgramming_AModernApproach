inventory: inventory.o readline.o
	gcc -o inventory.out inventory.o quicksort.o readline.o
inventory.o: inventory.c quicksort.o readline.o
	gcc -c inventory.c 
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c
readline.o: readline.c
	gcc -c readline.c

.PHONY: clean
clean:
	rm *.out *.o
	echo clean done
