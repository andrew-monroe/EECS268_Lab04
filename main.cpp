/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  main.cpp
*   File Description: Checks for proper number of command-line arguments. Create
        a BuildingExecutive object with the file name and call its run method.
*/

#include <iostream>
#include "BuildingExecutive.h"

int main(int argc, char* argv[])
{
    if(argc != 2)
    {
        std::cout << "Please enter exactly one file name as a command-line " <<
            "argument." << std::endl;

        return(0);
    }

    BuildingExecutive exec(argv[1]);
    exec.run();

    return(0);
}
