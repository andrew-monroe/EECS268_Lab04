Lab04: main.o BuildingExecutive.o PreconditionViolationException.o
	g++ -std=c++11 -g -Wall main.o BuildingExecutive.o PreconditionViolationException.o -o Lab04

main.o: BuildingExecutive.h main.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

BuildingExecutive.o: Node.h Node.hpp LinkedList.h LinkedList.hpp Stack.h Stack.hpp Queue.h Queue.hpp PreconditionViolationException.h BuildingExecutive.h BuildingExecutive.cpp
	g++ -std=c++11 -g -Wall -c BuildingExecutive.cpp

PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -Wall -c PreconditionViolationException.cpp

clean:
	rm *.o Lab04
