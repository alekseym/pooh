app:main.o engine.o cs.o thing.o world.o
	g++ -o app main.o engine.o cs.o world.o thing.o
engine.o:engine.cpp
	g++ -c engine.cpp
main.o:main.cpp
	g++ -c main.cpp
cs.o:cs.cpp
	g++ -c cs.cpp
world.o:world.cpp
	g++ -c world.cpp
thing.o:thing.cpp
	g++ -c thing.cpp
clean:
	rm *.o app