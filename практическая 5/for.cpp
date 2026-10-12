#include <iostream>                      // библиотека ввода.вывода
using namespace std;                     // облегчение кода чтобы не писать std
int main() {                             // точка входа 
    double X, Y;
    cin >> X >> Y;                       
    double sum = X;                      
    int d;                             
    for (d = 1; sum < Y; d++) {         // функция повторения действия 
        sum *= 1.1;                      
    }                               
    cout << day << endl;                //вывод
    return 0;
}