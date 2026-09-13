//Моя первая программа на C++
/*
Программа выполняет:
-Ввод вывод 
-Вычисления 

*/

#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int main() {
	/*
	setlocale(0, "");
	cout << "***\n***\n***\n";
	_getch();
	system("cls");
	cout << "     ***\n     ***\n     ***\n";
	_getch();
	system("cls");
	cout << "\n\n\n\n\n     ***\n     ***\n     ***\n";
	_getch();
	system("cls");
	cout << "\n\n\n\n\n***\n***\n***\n";
	_getch();
	system("cls");
	cout << "***\n***\n***\n";
	_getch();
	*/
	char str[3];
	setlocale(0, "");
	cout << "Введите символ\n";
	cin >> str;
	_getch();
	system("cls");
	while (true) {
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

	}
}
	