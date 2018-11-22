objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

20_1: 20_1.c
	gcc -o 20_1.out ${GCCFALG} 20_1.c
xor: xor.c
	gcc -o xor.out ${GCCFALG} xor.c
20_3: 20_3.c
	gcc -o 20_3.out ${GCCFALG} 20_3.c
viewmemory: viewmemory.c
	gcc -o viewmemory.out ${GCCFALG} viewmemory.c
Ex_20_1: Ex_20_1.c
	gcc -o Ex_20_1.out ${GCCFALG} Ex_20_1.c
Ex_20_3: Ex_20_3.c
	gcc -o Ex_20_3.out ${GCCFALG} Ex_20_3.c
Ex_20_4: Ex_20_4.c
	gcc -o Ex_20_4.out ${GCCFALG} Ex_20_4.c
Ex_20_6: Ex_20_6.c
	gcc -o Ex_20_6.out ${GCCFALG} Ex_20_6.c
Ex_20_7: Ex_20_7.c
	gcc -o Ex_20_7.out ${GCCFALG} Ex_20_7.c
Ex_20_8: Ex_20_8.c
	gcc -o Ex_20_8.out ${GCCFALG} Ex_20_8.c



.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


