objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

quadratic: quadratic.c
	gcc -o quadratic.out ${GCCFALG} quadratic.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


