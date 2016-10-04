

#include "BuildingExecutive.h"

BuildingExecutive::BuildingExecutive(std::string fileName)
{
    m_fileName = fileName;
    m_peopleInElevator.setLimit(7);
}

void BuildingExecutive::run()
{
    std::string command = "";
    std::string commandArg = "";

    std::ifstream inFile;
    inFile.open(m_fileName);

    if (inFile.is_open())
    {
        inFile >> command;

        do
        {
            try
            {
                if (command == "WAIT")
                {
                    inFile >> commandArg;

                    addToWaitLine(commandArg);
                }
                else if (command == "PICK_UP")
                {
                    pickUp();
                }
                else if (command == "DROP_OFF")
                {
                    inFile >> commandArg;

                    dropOff(std::stoi(commandArg));
                }
                else if (command == "INSPECTION")
                {
                    inspection();
                }
                else
                {
                    throw(std::runtime_error("INPUT FAILURE."));
                }
            }
            catch (PreconditionViolationException& e)
            {

            }
            catch (std::runtime_error& e)
            {
                std::cout << "ERROR: " << e.what() << std::endl;
            }

            inFile >> command;

        } while (!inFile.eof());
    }
    else
    {
        std::cout << "Could not find a file named " << m_fileName << std::endl;
    }
}

void BuildingExecutive::addToWaitLine(std::string name)
{
    m_elevatorLine.enqueue(name);
}

void BuildingExecutive::pickUp()
{
    while(!m_peopleInElevator.isFull())
    {
        m_peopleInElevator.push(m_elevatorLine.peekFront());

        m_elevatorLine.dequeue();
    }
}

void BuildingExecutive::dropOff(int amount)
{
    for (int x = 0; x < amount; x++)
    {
        if (!m_peopleInElevator.isEmpty())
        {
            m_peopleInElevator.pop();
        }
        else
        {
            break;
        }
    }
}

void BuildingExecutive::inspection()
{
    std::cout << "Elevator status:" << std::endl;

    if(m_peopleInElevator.isEmpty())
    {
        std::cout << "The elevator is empty." << std::endl;
    }
    else
    {
        std::cout << "The elevator is not empty." << std::endl;
    }

    try
    {
        std::cout << m_peopleInElevator.peek() << " will be the next " <<
            "person to leave the elevator." << std::endl;
    }
    catch (PreconditionViolationException& e)
    {
        std::cout << "No one is in the elvator." << std::endl;
    }

    try
    {
        std::cout << m_elevatorLine.peekFront() << " will be the next " <<
            "person to get on the elevator." << std::endl;
    }
    catch (PreconditionViolationException& e)
    {
        std::cout << "No one is in line for the elevator." << std::endl;
    }

    std::cout << std::endl;
}
