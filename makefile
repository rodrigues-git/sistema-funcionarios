all: programa.exe

run: programa.exe
	./programa.exe

programa.exe: main.o funcionario.o desenvolvedor.o gerente.o estagiario.o
	g++ main.o funcionario.o desenvolvedor.o gerente.o estagiario.o -o programa.exe

main.o: main.cpp header.h
	g++ -Wall -c main.cpp

funcionario.o: funcionario.cpp header.h
	g++ -Wall -c funcionario.cpp

desenvolvedor.o: desenvolvedor.cpp header.h
	g++ -Wall -c desenvolvedor.cpp

gerente.o: gerente.cpp header.h
	g++ -Wall -c gerente.cpp

estagiario.o: estagiario.cpp header.h
	g++ -Wall -c estagiario.cpp

clean:
	del *.o *.exe