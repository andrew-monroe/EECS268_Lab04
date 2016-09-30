

#ifndef PreconditionViolationException_h
#define PreconditionViolationException_h

#include <stdexcept>

class PreconditionViolationException: public std::runtime_error
{
    public:
        PreconditionViolationException(const char* msg);
};

#endif
