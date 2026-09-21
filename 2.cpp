#include <iostream>            // подключаем библиотеку для ввода/вывода
using namespace std;           // cin/cout вместо std::cin или std::cout

int main() {                  //начало
    int n;                    //переменная
    cin >> n;                 // ввод

    long long result = 1;     // счётчик факториала(long long - тип для очень больших целых чисел )
    int i = 1;                // счётчик

    while (i <= n) {          // пока <= n
        result = result * i;  // умножаем на i
        i = i + 1;            // прибавка к счётчику
    }

    cout << result << endl;   // выводим факториал
    return 0;
}