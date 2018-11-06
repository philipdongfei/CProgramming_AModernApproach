objects:=*.out *.o
GCCFALG:=-Wall -W -O2

remind: remind.c
	gcc -o remind.out ${GCCFALG} remind.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
