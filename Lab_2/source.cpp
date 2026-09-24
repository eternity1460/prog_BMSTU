#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;



bool test_circle(double a, double b) {
    if (sqrt(a * a + b * b) >= 0.5 && sqrt(a * a + b * b) <= 1) return true;
	else
		return false;
}
int test_natural(int a, int b) {
    int c;
    c = 0;
    while (a!= 0) {
        if (a % 10 == b) c++;
        a = a / 10;
    }
    return c;
}

int main() {
    int m;
	double x, y;
	int a, b,c;
    setlocale(0, "rus");
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    while (true) {
        system("cls");

        cout << "Меню:\n";
        cout << "1. Задание 1\n";
        cout << "2. Задание 2" << endl;
        cout << "3. Выход из программы\n";
        cout << "\nВведите выбранный пункт меню:";
        cin >> m;


        switch (m)
        {
        case 1: {
            system("cls");
            cout << "Введите действительные числа x, y." << endl;
            cout << "Программа определит, принадлежит ли точка с координатами (x, y) условию [0.5<=sqrt(x^2+y^2)<=1]." << endl;
            cin >> x >> y;
            if (test_circle(x, y)) {
                cout << "Точка x=" << x << ", y=" << y << " принадлежит области." << endl;
                _getch();
            }
            else {
                cout << "Точка x=" << x << ", y=" << y << " НЕ принадлежит области." << endl;
                _getch();
            }
            break;
        }


        case 2: {
        N:
            system("cls");
            cout << "Введите натуральное число n и цифру m (0 <= m <= 9)." << endl;
            cout << "Программа определит, сколько раз цифра m встречается в записи числа n." << endl;

            cin >> a >> b;
            if (b / 10 != 0) {
                cout << "Ошибка! Введите цифру m (0 <= m <= 9)." << endl;
                cout << "Нажмите любую клавишу для перезапуска программы" << endl;
                _getch();
                goto N;
            }
            c = test_natural(a, b);
            system("cls");
            cout << "Количество вхождений цифры " << b << " в число " << a << " равно " << c << "раз." << endl;
            _getch();
            break;
        }

        case 3:
            return 0;

        default:
            cout << "Неверный пункт меню" << endl;
            _getch();
        }
    }
}

/*
Тест 1.1
Входные данные: 1,0
Ожидаемый результат: true
Тест 2.1
Входные данные: 0,1
Ожидаемый результат: true
Тест 3.1
Входные данные: 0,0
Ожидаемый результат: false
*/

/*
Тест 1.2
Входные данные: 333,3
Ожидаемый результат: 3
Тест 2.2
Входные данные: 12345,2
Ожидаемый результат: 1
*/