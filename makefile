all: sistema

sistema: main.o carro.o pessoa.o
	g++ -o sistema carro.o pessoa.o main.o 

Carro.o: carro.cpp
	g++	-c carro.cpp -o carro.o

Pessoa.o: pessoa.cpp
	g++	-c Pessoa.cpp -o pessoa.o

main.o: main.cpp
	g++	-c main.cpp -o main.o

clean:
	rm -fr main *.o
