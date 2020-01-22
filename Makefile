commonWealth: main.o World.o Colony.o Person.o
	g++ main.o World.o Colony.o Person.o -o commonWealth

main.o: main.cpp World.h
	g++ -g -std=c++11 -c main.cpp

World.o: World.cpp World.h
	g++ -g -std=c++11 -c World.cpp

Colony.o: Colony.cpp Colony.h
	g++ -g -std=c++11 -c Colony.cpp

Person.o: Person.cpp Person.h
	g++ -g -std=c++11 -c Person.cpp

clean:
	rm *.o commonWealth