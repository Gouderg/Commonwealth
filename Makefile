CFLAGS = -g -Wall -std=c++11


commonWealth: main.o World.o Colony.o Person.o
	g++ $(CFLAGS) main.o World.o Colony.o Person.o -o commonWealth

main.o: main.cpp World.h
	g++ $(CFLAGS) -c main.cpp

World.o: World.cpp World.h
	g++ $(CFLAGS) -c World.cpp

Colony.o: Colony.cpp Colony.h
	g++ $(CFLAGS) -c Colony.cpp

Person.o: Person.cpp Person.h
	g++ $(CFLAGS) -c Person.cpp

clean:
	rm *.o commonWealth

remake: clean commonWealth
