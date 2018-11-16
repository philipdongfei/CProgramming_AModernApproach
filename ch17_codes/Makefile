objects:=*.out *.o *.so
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
Ex_17_6: Ex_17_6.c
	gcc -o Ex_17_6.out  ${GCCFALG} Ex_17_6.c 
Ex_17_8: Ex_17_8.c
	gcc -o libStack.so -shared -fPIC Ex_17_8.c 
Ex_17_15: Ex_17_15.c
	gcc -o Ex_17_15.out  ${GCCFALG} Ex_17_15.c 
Ex_17_19: Ex_17_19.c
	gcc -o Ex_17_19.out  ${GCCFALG} Ex_17_19.c 
Code_17_5: Code_17_5.c
	gcc -o Code_17_5.out ${GCCFALG} Code_17_5.c
Code_17_6: Code_17_6.c
	gcc -o Code_17_6.out ${GCCFALG} Code_17_6.c
Code_17_7: Code_17_7.c
	gcc -o Code_17_7.out ${GCCFALG} Code_17_7.c



.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


