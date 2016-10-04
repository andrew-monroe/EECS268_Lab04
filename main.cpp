

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
