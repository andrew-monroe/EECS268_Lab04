/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  BuildingExecutive.h
*   File Description: Header file for BuildingExecutive class. This class takes
        input from a given file and uses it to create, manage, and operate on
        a limited-capacity elevator stack and a line to board the elevator
        queue.
*/

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
