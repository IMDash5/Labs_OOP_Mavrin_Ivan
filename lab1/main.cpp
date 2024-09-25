#include <iostream>
#include "include/GreatestCommonDivisor.h"

using namespace std;

int main() {
    int num1, num2, res;
    cout << "Введите первое число:" << endl;
    cin >> num1;
    cout << "Введите второе число:" << endl;
    cin >> num2;

    try{
        res = NOD(num1, num2);
        cout << "Результат:" << res << endl;
    }
    catch (const ZerosInputException& e) {
        cerr << e.what() << endl;
        }
    
    return 0;
}