

#ifndef BuildingExecutive_h
#define BuildingExecutive_h

#include <iostream>
#include <fstream>
#include <string>
#include "Queue.h"
#include "Stack.h"

class BuildingExecutive
{
    public:
        BuildingExecutive(std::string fileName);
        void run();

    private:
        std::string m_fileName;
        Queue<std::string> m_elevatorLine;
        Stack<std::string> m_peopleInElevator;

        void addToWaitLine(std::string name);
        void pickUp();
        void dropOff(int amount);
        void inspection();
};

#endif
