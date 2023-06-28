all:cal
	echo "build done"
cal:add.o sub.o mul.o div.o main.o
	gcc main.c add.c sub.c mul.c div.c -o cal
add.o:add.c
	gcc -c add.c
mul.o:mul.c
	gcc -c mul.c
sub.o:sub.c
	gcc -c sub.c
div.o:div.c
	gcc -c div.c
main.o:main.c
	gcc -c main.c
clean:
	rm *.o cal
install:
	sudo cp cal /bin/
