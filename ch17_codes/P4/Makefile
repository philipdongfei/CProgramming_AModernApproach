Object:=*.o *.out

justify: justify.o word.o line.o
	gcc -o justify.out justify.o word.o line.o

justify.o: justify.c word.h line.h
	gcc -c justify.c

word.o: word.c word.h
	gcc -c word.c

line.o: line.c line.h
	gcc -c line.c

.PHONY: clean
clean:
	-rm edit ${Object} 
	echo Clean done 
