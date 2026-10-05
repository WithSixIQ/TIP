// Вариант 3: C - имя, r - корни, s - делимость на 3
// Титов Артём ЭФБО-08-26
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    char symbol;

    // Ввод коэффициентов и символа
    cin >> a >> b >> c >> symbol;

    if (symbol == 'C')
    {
        // Фамилия и имя
        cout << "Titov Artem";
    }

    if (symbol == 'r')
    {
        // Корни многочлена
        double d = b * b - 4 * a * c;

        if (a == 0 && b == 0 && c == 0)
            cout << "x - любое";
        else if (a == 0 && b == 0)
            cout << "Нет корней";
        else if (a == 0)
            cout << "x = " << -c / b;
        else if (d < 0)
            cout << "Нет корней";
        else
            cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << ", x2 = " << (-b - sqrt(d)) / (2 * a);
    }

    if (symbol == 's')
    {
        // Делимость на 3
        int n;
        cin >> n;

        if (n % 3 == 0)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}
