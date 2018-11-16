objects:=*.out *.o
GCCFALG:=-Wall -W -O2

define_demo: define_demo.c
	gcc -o define_demo.out ${GCCFALG} define_demo.c
demo1: demo1.c
	gcc -o demo1.out ${GCCFALG} demo1.c
Ex_14_1: Ex_14_1.c
	gcc -o Ex_14_1.out ${GCCFALG} Ex_14_1.c
Ex_14_2: Ex_14_2.c
	gcc -o Ex_14_2.out ${GCCFALG} Ex_14_2.c
Ex_14_3: Ex_14_3.c
	gcc -o Ex_14_3.out ${GCCFALG} Ex_14_3.c
Ex_14_5: Ex_14_5.c
	gcc -o Ex_14_5.out ${GCCFALG} Ex_14_5.c
Ex_14_6: Ex_14_6.c
	gcc -o Ex_14_6.out ${GCCFALG} Ex_14_6.c
Ex_14_7: Ex_14_7.c
	gcc -o Ex_14_7.out ${GCCFALG} Ex_14_7.c
Ex_14_8: Ex_14_8.c
	gcc -o Ex_14_8.out ${GCCFALG} Ex_14_8.c
Ex_14_9: Ex_14_9.c
	gcc -o Ex_14_9.out ${GCCFALG} Ex_14_9.c
Ex_14_11: Ex_14_11.c
	gcc -o Ex_14_11.out ${GCCFALG} Ex_14_11.c
Ex_14_13: Ex_14_13.c
	gcc -o Ex_14_13.out ${GCCFALG} Ex_14_13.c
Ex_14_13_i: Ex_14_13.c
	gcc -o Ex_14_13.i -E Ex_14_13.c
Ex_14_14_i: Ex_14_14.c
	gcc -o Ex_14_14.i -E Ex_14_14.c
Ex_14_16_i: Ex_14_16.c
	gcc -o Ex_14_16.i -E Ex_14_16.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
