objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

26_1: 26_1.c
	gcc -o 26_1.out ${GCCFALG} 26_1.c
tnumconv: tnumconv.c
	gcc -o tnumconv.out ${GCCFALG} tnumconv.c
trand: trand.c
	gcc -o trand.out ${GCCFALG} trand.c
airmiles: airmiles.c
	gcc -o airmiles.out ${GCCFALG} airmiles.c
datetime: datetime.c
	gcc -o datetime.out ${GCCFALG} datetime.c
Ex_26_1: Ex_26_1.c
	gcc -o Ex_26_1.out ${GCCFALG} Ex_26_1.c
Ex_26_2: Ex_26_2.c
	gcc -o Ex_26_2.out ${GCCFALG} Ex_26_2.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


