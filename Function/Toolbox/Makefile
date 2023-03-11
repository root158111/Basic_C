all:	Test.c Toolbox.o
	gcc Test.c Toolbox.o
Toolbox.o: Toolbox.c Toolbox.h
	gcc Toolbox.c -c

clean:
	rm *.c~ *.h~ *.o a.out
