#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main() {
    int a, b;
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    do{
        cout<<"Введите длину и высоту прямоугольника\n";
        cin>>a>>b;
        if (a < 3 || a > 5 || b < 3 || b > 5) {
            cout << "Ошибка! Размеры должны быть от 3 до 5.\n";
            cout << "Нажмите любую клавишу для повторного ввода...\n" ;
            _getch();
        }
    }while (a < 3 || a > 5 || b < 3 || b > 5);
    
    
    
    system("cls");
    
    int x = 0, y = 0;  //Координата верхнего левого угла прямоугольника 
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
        //cout << "Позиция: (" << x << ", " << y << ")";
        
        key = _getch();
        if (key == 'q' || key == 'Q') break;
        if (key == 'w' || key == 'W') y--;
        if (key == 's' || key == 'S') y++;
        if (key == 'a' || key == 'A') x--;
        if (key == 'd' || key == 'D') x++;
        
        // Границы
        if (x < 0) x = 0;
        if (y < 0) y = 0;
    }
    return 0;
}