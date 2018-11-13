objects:=*.out *.o
GCCFALG:=-Wall -W -O2

Ex_15_2: debug.h testdebug.c
	gcc -o testdebug.out ${GCCFALG} testdebug.c
Ex_15_2_b: debug.h testdebug.c
	gcc -o testdebug.out -UDEBUG ${GCCFALG} testdebug.c

.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
