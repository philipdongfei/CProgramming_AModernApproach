Code_16_3: Code_16_3.o readline.o
	gcc -o Code_16_3.out Code_16_3.o quicksort.o readline.o
Code_16_3.o: Code_16_3.c quicksort.o readline.o
	gcc -c Code_16_3.c 
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c
readline.o: readline.c
	gcc -c readline.c

.PHONY: clean
clean:
	rm *.out *.o
	echo clean done
