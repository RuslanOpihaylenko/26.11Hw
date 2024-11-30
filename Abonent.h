#pragma once
#include"Date.h"
class Abonent
{
private:
	char* snp;
	const long long number;
	Date date;
public:
	Abonent();
	Abonent(char* my_snp, long long my_number, int d, int m, int y);
	~Abonent();
	void setSnp(char* my_snp);
	char* getSnp();
	long long getNumber();
	static Abonent& input();
	void output();
};

