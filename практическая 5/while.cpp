#include <iostream>                      // # подключаем ввод/вывод
using namespace std;

int main() {                             // # точка входа
    double X, Y;                         
    cin >> X >> Y;                       
    double sum = X;                      
    int d = 1;                         
    while (sum < Y) {               //функция проверки условия
        sum *= 1.1;
        d++;                           
    }
    cout << d << endl;                 
    return 0;                            
}