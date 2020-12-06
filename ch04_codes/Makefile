objects:=*.out *.o
GCCFLAG:=-Wall -W -O2

upc: upc.c
	gcc -o upc.out ${GCCFLAG} upc.c
Ex_4_1: Ex_4_1.c
	gcc -o Ex_4_1.out ${GCCFLAG} Ex_4_1.c
Ex_4_2_1: Ex_4_2.c
	gcc -o Ex_4_2_1.out -std=c89 ${GCCFLAG} Ex_4_2.c
Ex_4_2_2: Ex_4_2.c
	gcc -o Ex_4_2_2.out -std=c99 ${GCCFLAG} Ex_4_2.c
Ex_4_3_41: Ex_4_3_4.c
	gcc -o Ex_4_3_41.out -std=c89 ${GCCFLAG} Ex_4_3_4.c
Ex_4_3_42: Ex_4_3_4.c
	gcc -o Ex_4_3_42.out -std=c99 ${GCCFLAG} Ex_4_3_4.c
Ex_4_5_61: Ex_4_5_6.c
	gcc -o Ex_4_5_61.out -std=c89 ${GCCFLAG} Ex_4_5_6.c
Ex_4_5_62: Ex_4_5_6.c
	gcc -o Ex_4_5_62.out -std=c99 ${GCCFLAG} Ex_4_5_6.c
Ex_4_8: Ex_4_8.c
	gcc -o Ex_4_8.out ${GCCFLAG} Ex_4_8.c
Ex_4_9: Ex_4_9.c
	gcc -o Ex_4_9.out ${GCCFLAG} Ex_4_9.c
Ex_4_10: Ex_4_10.c
	gcc -o Ex_4_10.out ${GCCFLAG} Ex_4_10.c
Ex_4_11: Ex_4_11.c
	gcc -o Ex_4_11.out ${GCCFLAG} Ex_4_11.c
Ex_4_12: Ex_4_12.c
	gcc -o Ex_4_12.out ${GCCFLAG} Ex_4_12.c
Ex_4_13: Ex_4_13.c
	gcc -o Ex_4_13.out ${GCCFLAG} Ex_4_13.c
Ex_4_15: Ex_4_15.c
	gcc -o Ex_4_15.out ${GCCFLAG} Ex_4_15.c
Code_4_1: Code_4_1.c 
	gcc -o Code_4_1.out ${GCCFLAG} Code_4_1.c
Code_4_2: Code_4_2.c 
	gcc -o Code_4_2.out ${GCCFLAG} Code_4_2.c
Code_4_3: Code_4_3.c 
	gcc -o Code_4_3.out ${GCCFLAG} Code_4_3.c
Code_4_4: Code_4_4.c 
	gcc -o Code_4_4.out ${GCCFLAG} Code_4_4.c
Code_4_5: Code_4_5.c 
	gcc -o Code_4_5.out ${GCCFLAG} Code_4_5.c
Code_4_6: Code_4_6.c 
	gcc -o Code_4_6.out ${GCCFLAG} Code_4_6.c


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done
