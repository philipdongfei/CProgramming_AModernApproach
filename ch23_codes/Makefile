objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

tchrtest: tchrtest.c
	gcc -o tchrtest.out ${GCCFALG} tchrtest.c
tcasemap: tcasemap.c
	gcc -o tcasemap.out ${GCCFALG} tcasemap.c
Ex_23_2: Ex_23_2.c
	gcc -o Ex_23_2.out Ex_23_2.c -lm 
Ex_23_4: Ex_23_4.c
	gcc -o Ex_23_4.out ${GCCFALG} Ex_23_4.c 
Ex_23_5: Ex_23_5.c
	gcc -o Ex_23_5.out ${GCCFALG} Ex_23_5.c 
Ex_23_13: Ex_23_13.c
	gcc -o Ex_23_13.out ${GCCFALG} Ex_23_13.c 
Code_23_2: Code_23_2.c
	gcc -o Code_23_2.out ${GCCFALG} Code_23_2.c

.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


