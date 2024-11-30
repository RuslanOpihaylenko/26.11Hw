#include "Abonent.h"
#include<iostream>

using namespace std;

Abonent::Abonent():Abonent(nullptr,0,0,0,0)
{

}

Abonent::Abonent(char* my_snp, long long my_number, int d, int m, int y):number{my_number}, date{d,m,y}
{
	setSnp(my_snp);
}

Abonent::~Abonent()
{
	if (snp != nullptr)
	{
		delete[] snp;
	}
}

void Abonent::setSnp(char* my_snp)
{
	if (snp != nullptr)
	{
		delete[] snp;
	}
	if (my_snp != nullptr)
	{
		snp = new char[strlen(my_snp) + 1];
		strcpy_s(snp, strlen(my_snp) + 1, my_snp);
	}
	else
	{
		snp = nullptr;
	}
}

char* Abonent::getSnp()
{
	return snp;
}

long long Abonent::getNumber()
{
	return number;
}

Abonent& Abonent::input()
{
	const int N = 100;
	char name[N];
	cout << "Enter surname, name and patronymic: ";
	cin.getline(name, N - 1);
	cout << "Enter number: ";
	long long number;
	cin >> number;
	int d, m, y;
	cout << "Enter day: ";
	cin >> d;
	cout << "Enter month: ";
	cin >> m;
	cout << "Enter year: ";
	cin >> y;
	Abonent ab = { name,number,d,m,y };
	return ab;
}

void Abonent::output()
{
	cout << "Surname,name and patronymic: " << getSnp() << endl;
	cout << "Number: " << getNumber() << endl;
	cout << "Enter date: ";
}
