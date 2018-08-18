umoham4proj5: dynamicArray.o dynamicArray2.o main.o
	g++ -o umoham4proj5 dynamicArray.o dynamicArray2.o main.o

dynamicArray.o: dynamicArray.c dynamicArray.h
	g++ -c dynamicArray.c

dynamicArray2.o: dynamicArray2.c dynamicArray2.h
	g++ -c dynamicArray2.
	
main.o: main.c dynamicArray.h dynamicArray2.h
	g++ -c main.c

clean:
	rm dynamicArray.o dynamicArray2.o main.o  umoham4proj5
