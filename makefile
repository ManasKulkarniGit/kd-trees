
run: main.o image.o kdtree.o
		gcc -Wall kdtree *.o

clean:
		rm* .o


image.o : image_processing.h image.c
			gcc -c image.c

kdtree.o : kdtree.h kdtree.c
			gcc -c kdtree.c

main.o : image_processing.h kdtree.h main.c
			gcc -c main.c
