object:=*.o *.out
qsort: qsort.o quicksort.o
	gcc -o qsort.out qsort.o quicksort.o

qsort.o: quicksort.h
	gcc -c qsort.c 

quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c

.PHONY: clean
clean: 
	-rm edit ${object}
	echo clean done

