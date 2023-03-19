a.out: sachimain.o ctof.o
	gcc -o a.out sachimain.o ctof.o

sachimain.o: sachimain.c ctof.c
	gcc sachimain.c -o sachimain.o -c

b.out: syonmain.o ftoc.o
	gcc -o b.out syonmain.o ftoc.o 

syonmain.o: syonmain.c ftoc.c
	gcc syonmain.c -o syonmain.o -c

ftoc.o: ftoc.c ftoc.h
	gcc ftoc.c -o ftoc.o -c

ctof.o: ctof.c ctof.h
	gcc ctof.c -o ctof.o -c

clean:
	rm *.o a.out b.out
