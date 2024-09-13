#include "InvalidInputException.h"

using namespace std;

InvalidInputException::InvalidInputException(const string& msg) : message(msg) {}

const char* InvalidInputException::what() const noexcept{
    return message.c_str();
}
