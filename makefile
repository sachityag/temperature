a.out: sachimain.o ctof.o
	gcc -o a.out sachimain.o ctof.o

sachimain.o: sachimain.c ctof.c
	gcc sachimain.c -o sachimain.o -c

ctof.o: ctof.c ctof.h
	gcc ctof.c -o ctof.o -c

clean:
	rm *.o a.out
