objects:=*.out *.o
GCCFALG:=-Wall -W -O2

maxmin: maxmin.c
	gcc -o maxmin.out ${GCCFALG} maxmin.c
Ex_11_4: Ex_11_4.c
	gcc -o Ex_11_4.out ${GCCFALG} Ex_11_4.c
Ex_11_5: Ex_11_5.c
	gcc -o Ex_11_5.out ${GCCFALG} Ex_11_5.c
Ex_11_6: Ex_11_6.c
	gcc -o Ex_11_6.out ${GCCFALG} Ex_11_6.c
Ex_11_8: Ex_11_8.c
	gcc -o Ex_11_8.out ${GCCFALG} Ex_11_8.c
Code_11_1: Code_11_1.c
	gcc -o Code_11_1.out ${GCCFALG} Code_11_1.c
Code_11_2: Code_11_2.c
	gcc -o Code_11_2.out ${GCCFALG} Code_11_2.c
Code_11_3: Code_11_3.c
	gcc -o Code_11_3.out ${GCCFALG} Code_11_3.c
Code_11_4: Code_11_4.c
	gcc -o Code_11_4.out ${GCCFALG} Code_11_4.c

.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
