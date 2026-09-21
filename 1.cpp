#include <iostream>            // подключаем библиотеку для ввода/вывода
using namespace std;           // cin/cout вместо std::cin или std::cout

int main() {                  // начало алгоритма
    int x, y;                  // переменные

    cin >> x >> y;             // ввод

    int temp = x;              // temp = x
    x = y;                     // в x кладём значение y
    y = temp;                  // x в y

    cout << "a = " << x << endl;   // вывод
    cout << "b = " << y << endl;   // вывод

    return 0;                      
}   