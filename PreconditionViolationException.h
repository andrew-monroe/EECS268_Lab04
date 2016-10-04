/*
*   Author:     Andrew Monroe
*   Date:       10/04/16
*   File Name:  PreconditionViolationException.h
*   File Description: Header file for PreconditionViolationException exception
        class derived from std::runtime_error class.
*/

#ifndef PreconditionViolationException_h
#define PreconditionViolationException_h

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error
{
    public:
        PreconditionViolationException(const char* msg);
};

#endif
