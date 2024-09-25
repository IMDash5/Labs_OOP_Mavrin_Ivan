#pragma once

#include <stdexcept>

class ZerosInputException : public std::invalid_argument {
public:
    ZerosInputException() : 
        invalid_argument("Вводные данные некорректны. НОД двух нулей считается неопределенным.") {}
};

int NOD(int num1, int num2);

