objects:=*.out *.o
GCCFALG:=-Wall -W -O2

define_demo: define_demo.c
	gcc -o define_demo.out ${GCCFALG} define_demo.c

.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
