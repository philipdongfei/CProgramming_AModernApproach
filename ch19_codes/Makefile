objects:=*.out *.o *.so
GCCFALG:=-Wall -W -O2

stack1.so: stack1.c stack.h
	gcc -shared -fPIC -o libStack1.so stack1.c
stack2.so: stack2.c stack.h
	gcc -shared -fPIC -o libStack2.so stack2.c
stackadt.so: stackADT.c stackADT.h
	gcc -shared -fPIC -o libStackADT.so stackADT.c
stackclient: stackclient.c stackADT.c stackADT.h 
	gcc -o stackclient.out ${GCCFALG} stackclient.c stackADT.c
stackclient2: stackclient2.c stackADT2.c stackADT2.h 
	gcc -o stackclient2.out ${GCCFALG} stackclient2.c stackADT2.c
stackclient3: stackclient.c stackADT3.c stackADT.h 
	gcc -o stackclient3.out ${GCCFALG} stackclient.c stackADT3.c



.PHONY: clean
clean:
	-rm edit ${objects}
	echo Clean done


