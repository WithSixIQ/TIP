#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    string bad = "usergamnt";   // буквы из "user agreement" без повторов
    char c;
    while (in.get(c)) {                          // читаем по одному символу
        if (bad.find(tolower(c)) == string::npos) // npos проверяет наличие символа в строке
            out << c;                             // значит, символ оставляем
    }
    return 0;
}