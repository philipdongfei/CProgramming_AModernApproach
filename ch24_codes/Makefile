objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

tsignal: tsignal.c
	gcc -o tsignal.out ${GCCFALG} tsignal.c
tsetjmp: tsetjmp.c
	gcc -o tsetjmp.out ${GCCFALG} tsetjmp.c
Ex_24_3: Ex_24_3.c
	gcc -fPIC -shared -o Ex_24_3.so Ex_24_3.c
Ex_24_4: Ex_24_4.c
	gcc -o Ex_24_4.out ${GCCFALG} Ex_24_4.c -lm


.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


