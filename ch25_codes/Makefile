objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

25_3: 25_3.c
	gcc -o 25_3.out ${GCCFALG} 25_3.c
Code_25_1: Code_25_1.c
	gcc -o Code_25_1.out ${GCCFALG} Code_25_1.c

.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


