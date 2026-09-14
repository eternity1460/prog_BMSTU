#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;



double calculat(double a, double b, double c) {

    return (a / b) * sqrt(fabs(a * a - b * b)) * (sin(a + 2 * c) + cbrt(b)) / pow(c, 0.25);

}
void runRectangle() {
    int a = 0, b = 0; 

    do {
        cout << "Введите длину и высоту прямоугольника\n";
        cin >> a >> b;
        if (a < 3 || a > 5 || b < 3 || b > 5) {
            cout << "Ошибка! Размеры должны быть от 3 до 5.\n";
            cout << "Нажмите любую клавишу для повторного ввода...\n";
            _getch();
        }
    } while (a < 3 || a > 5 || b < 3 || b > 5);

    system("cls");

    int x = 0, y = 0; 
    char key;

    while (true) {
        system("cls");

        // Отступ сверху
        for (int i = 0; i < y; i++) cout << endl;

        // Рисуем
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < x; j++) cout << " ";
            for (int j = 0; j < a; j++) cout << "*";
            cout << endl;
        }

        cout << "\nWASD - движение, Q - выход\n";

        key = _getch();
        if (key == 'q' || key == 'Q') break;
        if (key == 'w' || key == 'W') y--;
        if (key == 's' || key == 'S') y++;
        if (key == 'a' || key == 'A') x--;
        if (key == 'd' || key == 'D') x++;

        if (x < 0) x = 0;
        if (y < 0) y = 0;
    }
}

int main() {
    int m;
    setlocale(0, "rus");

M:
    system("cls");

    cout << "Меню:\n";
    cout << "1. Простые задачи\n";
    cout << "2. Вычисление выражения" << endl;
    cout << "3. Выход из программы\n";
    cout << "\nВведите выбранный пункт меню:";
    cin >> m;


    switch (m)
    {
    case 1: {
        int p;
        system("cls");

        cout << "Простые задачи:\n";
        cout << "1. Задание с первого семинара\n";
        cout << "2. Домашнее задание\n";
        cout << "3. Назад\n";
        cout << "\nВведите выбранный пункт меню:";
        cin >> p;

        switch (p)
        {
        case 1: {
            system("cls");
            cout << "Задание с первого семинара\n";
            cout << "Нажмите любую клавишу для демонстрации\n";
            _getch();
            system("cls");
            char str[3];
            setlocale(0, "");
            cout << "Введите символ\n";
            cin >> str;
            _getch();
            system("cls");
            int i = 0;
            while (i < 4) {
                cout << str << "\n" << str << "\n" << str << "\n";
                Sleep(500);
                system("cls");
                cout << "        " << str << "\n";
                cout << "        " << str << "\n";
                cout << "        " << str << "\n";
                Sleep(500);
                system("cls");
                cout << "\n\n\n\n\n\n";
                cout << "        " << str << "\n";
                cout << "        " << str << "\n";
                cout << "        " << str << "\n";
                Sleep(500);
                system("cls");
                cout << "\n\n\n\n\n\n";
                cout << str << "\n" << str << "\n" << str << "\n";
                Sleep(500);
                system("cls");
                i++;
            }
            break;
        }

        case 2:
            system("cls");
            cout << "Домашнее задание\n";
            cout << "Нажмите любую клавишу для демонстрации\n";
            _getch();
            system("cls");

            runRectangle();

            break;

        case 3:
            goto M;

        default:
            cout << "Неверный пункт меню" << endl;
            _getch();
        }

        break;
    }


    case 2: {
        system("cls");
        cout << "Решение задачи вычисления выражения \n ";
        cout << "Нажмите любую клавишу для демонстрации\n";
        _getch();
        system("cls");
        cout << "Формула: y = (a / b) * sqrt(a^2 - b^2) * (sin(a + 2*c) + b^(1/3)) / c^(1/4)\n\n";
        cout << "Введите коэффиценты для формулы\n";
        double x, y, z;
        cin >> x >> y >> z;
        system("cls");
        cout << "коэффиценты\na=" << x << "\nb=" << y << "\nс=" << z << "\n";
        double result = calculat(x, y, z);
        cout << "Результат вычисления " << result;
        _getch();

        break;
    }

    case 3:
        return 0;

    default:
        cout << "Неверный пункт меню" << endl;
        _getch();
    }

    goto M;
    return 0;
}