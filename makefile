a.out: sachimain.o ctof.o
	gcc -o a.out sachimain.o ctof.o

sachimain.o: sachimain.c ctof.h
	gcc sachimain.c -o sachimain.o -c

b.out: syonmain.o ftoc.o
	gcc -o b.out syonmain.o ftoc.o 

syonmain.o: syonmain.c ftoc.h
	gcc syonmain.c -o syonmain.o -c

ctof.o: ctof.c ctof.h
	gcc ctof.c -o ctof.o -c

ftoc.o: ftoc.c ftoc.h
	gcc ftoc.c -o ftoc.o -c

clean:
	rm *.o *.out
