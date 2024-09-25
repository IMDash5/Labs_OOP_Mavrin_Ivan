#include "../../include/GreatestCommonDivisor.h"

int NOD(int num1, int num2){

    if (num1 == 0 && num2 == 0){
        throw ZerosInputException();
    }

    if (num1 < 0){
        num1 = -num1;
    }
    if (num2 < 0){
        num2 = -num2;
    }
    
    if (num1 % num2 == 0){
        return num2;
    }
    else if (num2 % num1 == 0){
        return num1;
    }
    
    if (num1 > num2){
        return NOD(num1 % num2, num2);
    }
    return NOD(num1, num2 % num1);
}