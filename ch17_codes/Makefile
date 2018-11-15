objects:=*.out *.o
GCCFALG:=-Wall -W -O2

remind2: remind2.c
	gcc -o remind2.out ${GCCFALG} remind2.c
tabulate: tabulate.c
	gcc -o tabulate.out  ${GCCFALG} tabulate.c -lm
Ex_17_1: Ex_17_1.c
	gcc -o Ex_17_1.out  ${GCCFALG} Ex_17_1.c -lm
Ex_17_2: Ex_17_2.c
	gcc -o Ex_17_2.out  ${GCCFALG} Ex_17_2.c -lm
Ex_17_3: Ex_17_3.c
	gcc -o Ex_17_3.out  ${GCCFALG} Ex_17_3.c 
Ex_17_4: Ex_17_4.c
	gcc -o Ex_17_4.out  ${GCCFALG} Ex_17_4.c 


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


