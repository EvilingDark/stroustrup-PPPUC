﻿// глава 17 упр 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <std_lib_facilities.h>

void to_lower(char* s)
{
	while (*s != '0')
	{
		if (isupper(*s))
			* s = tolower(*s);
		s += 1;
	}
}

void print(char* s)
{
	while (*s != '0')
	{
		cout << *s;
		s += 1;
	}
	cout << endl;
}

int size(char* s)
{
	int count = 0;
	while (*s != '0')
	{
		s += 1;
		count++;
	}
	return count;
}

char* _strdup(const char* str)
{
	char* st0 = const_cast<char*>(str);
	int length = size(st0);
	char* st1 = new char[length+1];
	for (int i = 0; i <= length; ++i)
		st1[i] = st0[i];
	return st1;
}

char* enter()
{
	cout << "Enter the number of characters" << endl;
	int n = 0;
	cin >> n;
	cout << "Enter the characters" << endl;
	char* s = new char[n + 1];
	for (int i = 0; i < n; ++i)
		cin >> s[i];
	s[n] = '0';
	return s;
}

int main()
{
	char* s = enter();
	print(s);
	char* str = _strdup(s);
	print(str);
	delete[] s;
	delete[] str;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
