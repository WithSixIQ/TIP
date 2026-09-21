#include <iostream>     //библиотека
using namespace std;        //облегчение 

int main() {                    //алгоритм
    int A, B;                   //переменные
    cin >> A;                // читаем A (0 или 1)

    B = 2 - A;               // условие 0=2, 1=1

    cout << "B = " << B << endl;        //вывод
    return 0;
}