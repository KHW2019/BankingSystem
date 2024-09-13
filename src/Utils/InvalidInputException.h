#ifndef INVALID_INPUT_EXCEPTION_H
#define INVALID_INPUT_EXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class InvalidInputException : public exception{
    private:
        string message;
    public:
        explicit InvalidInputException(const string& msg);

        virtual const char* what() const noexcept override;
};

#endif