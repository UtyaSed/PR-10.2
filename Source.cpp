// PR_10_1.cpp
// Обухов Віктор
// Лабораторна робота № 10.1
// Пошук символів у текстовому файлі
// Варіант 7

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>


using namespace std;

bool Search_while(const char* s)
{

	for (int j = 0; s[j] != '\0'; j++)
		if (s[j] == 'w' && s[j + 1] == 'h' && s[j + 2] == 'i' && s[j + 3] == 'l' && s[j + 4] == 'e')
			return true;

	return false;
}

int main()
{


	char str[101];

	ifstream f("t.txt");
	f >> str;
	if (Search_while(str))
	{
		cout << "Is there a while in this file :" << endl;
		cout << "yes" << endl;
	}

	else
	{
		cout << "Is there a while in this file :" << endl;
		cout << "no" << endl;
	}


	f.close();

	return 0;
}