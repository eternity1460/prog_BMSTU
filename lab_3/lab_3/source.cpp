#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cmath>

using namespace std;
/*
Бекух Михаил Сергеевич
Э8-14\6
Лабараторная работа №3 вариант №2
*/
void shiftRight(int A[], int n,int k) {
	int temp;
	for (int j = 0; j < k; j++) {
		temp = A[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			A[i] = A[i - 1];
		}

		A[0] = temp;
	}
}
int countLocalMax(int A[], int n)
{
	int count = 0;
	if (A[0] > A[1])
		count++;

	for (int i = 1; i < n - 1; i++)
	{
		if (A[i] > A[i - 1] && A[i] > A[i + 1])
			count++;
	}

	if (A[n - 1] > A[n - 2])
		count++;

	return count;
}


int main() {
	const int N = 100;
	int A[N],n,k,m,h,S;
	setlocale(0, "rus");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	srand(time(0));
	S = 0;
	cout << "Введите массив A из N элементов и число k.\n"
		<< "Программа выполнит циклический сдвиг вправо на k позиций\n"
		<< "и подсчитает количество локальных максимумов.\n\n";
	do {
		cout << "Введите реальный размер массива от 1 до " << N <<" и натуральное число k:\n";
		cin >> n>>k;
		if ((n < 1) || (n > N)||(k<0)) { cout << "Неправильный размер массива, или число k не натуральное\n"; }
		else break;
	} while (1);
	if (k > n) { k = k % n;}

	system("cls");
	cout << "Выберите способ задания массива:\n1. Ввод с клавиатуры\n2. Генерация случайных чисел\n";
M:
	cin >> m;
	switch (m) {
		case(1): {
			system("cls");
			for (int i = 0; i < n; i++) {
				cout << "Введите элемент массива A[" << i << "] = ";
				cin >> A[i];			
			}	
			break;
		}
		case(2): {
			system("cls");
			cout << "Введите диапазон случайных чисел (от a до b):\n";
			int a, b;
			cin >> a >> b;
			for (int z = 0; z < n; z++) {
				A[z] = a + rand() % (b - a + 1);
			}
			break;
		}
		default:
			cout << "Неверный пункт меню" << endl;
			goto M;
	}
	system("cls");
	cout << "Исходный массив:\n";
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
		S = S + A[i];
	}
	cout << endl;
	cout << "Инвариант 1 (сумма чисел в массиве)=" << S << endl;
	cout << endl;
	S = 0;
	cout << "Смещенный на " << k << " элементов массив:\n";
	shiftRight(A, n, k);
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";
		S = S + A[i];
	}
	cout << endl;
	cout << "Инвариант 2 (сумма чисел в массиве)=" << S << endl;
	cout << endl;
	if (n == 1) { cout << "Массив из одного числа, локальных максимумов нет" << endl; }
	else { cout << "Количество локальных максимумов в массиве: " << countLocalMax(A, n) << endl; }


}