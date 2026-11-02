#include <fstream>
#include <string>
using namespace std;

// Переводит число, записанное строкой цифр, в двоичную запись
string toBinary(string num) {
    string bin = "";
    while (num != "") {                  // пока число не стало нулём
        string next = "";                // результат деления num на 2
        int rest = 0;                    // остаток
        for (char c : num) {
            int cur = rest * 10 + (c - '0');
            if (cur / 2 != 0 || next != "")  // не пишем ведущие нули
                next += char('0' + cur / 2);
            rest = cur % 2;
        }
        bin = char('0' + rest) + bin;    // остаток - очередной бит, ставим слева
        num = next;
    }
    if (bin == "") bin = "0";
    return bin;
}

int main() {
    ifstream in("input4.txt");
    ofstream out("output.txt");

    string s;
    getline(in, s);

    string number = "";                  // число, которое сейчас собираем
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            number += c;                 // цифра - продолжаем число
        } else {
            if (number != "") {          // число закончилось - выводим в двоичной
                out << toBinary(number);
                number = "";
            }
            out << c;                    // сам нецифровой символ
        }
    }
    if (number != "")                    // число в самом конце строки
        out << toBinary(number);
    return 0;
}