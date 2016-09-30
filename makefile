Lab04: main.o BuildingExecutive.o Stack.o Queue.o PreconditionViolationException.o
	g++ -std=c++11 -g -Wall main.o BuildingExecutive.o Stack.o Queue.o PreconditionViolationException.o -o Lab04

main.o: BuildingExecutive.h main.cpp
	g++ -std=c++11 -g -Wall main.cpp

BuildingExecutive.o: Stach.h Queue.h PreconditionViolationException.h BuildingExecutive.h BuildingExecutive.cpp
	g++ -std=c++11 -g -Wall -c BuildingExecutive.cpp

Stack.o: StackInterface.h Stack.h Stack.cpp
	g++ -std=c++11 -g -Wall -c Stack.cpp

Queue.o: QueueInterface.h Queue.h Queue.cpp
	g++ -std=c++11 -g -Wall -c Queue.cpp

PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -std=c++11 -g -Wall -c PreconditionViolationException.cpp

clean:
	rm *.o Lab04
