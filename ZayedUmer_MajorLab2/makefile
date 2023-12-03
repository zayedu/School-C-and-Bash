all: Complete

testA:
	gcc -c testA.c

testB: 
	tr A B <testA.c> testB.c
	gcc -c testB.c

testC:
	tr A C <testA.c> testC.c
	gcc -c testC.c

Complete: testA testB testC 
	gcc -o Complete test.c testA.o testB.o testC.o

Clean:
	rm test*
	rm Complete
