all: sorts

sorts: sorts.o main.o recursive.o
	g++ main.o sorts.o recursive.o -o sorts 

recursive.o : recursive.c
	g++ -c recursive.c

main.o: main.c
	g++ -c main.c

sorts.o: sorts.c
	g++ -c sorts.c

clean:
	rm -rf *.o sorts

