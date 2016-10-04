/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  PreconditionViolationException.cpp
*   File Description: Defines constructor for PreconditionViolationException.
*/

#include "PreconditionViolationException.h"

PreconditionViolationException::PreconditionViolationException(const char* msg):
    std::runtime_error(msg)
{

}
