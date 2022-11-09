prog:gestionelections.o main.o
	gcc gestionelections.o main.o -o prog -g
main.o:main.c
	gcc -c main.c -g
gestionelections.o:gestionelections.c
	gcc -c gestionelections.c -g
