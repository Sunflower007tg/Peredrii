#pragma once
#include <string>
using namespace std;
float Sum(float a, float b)
{
	return a+b;
}
float _Min(float a, float b)
{
	if (a > b)
	{
		return b;
	}
	if (a == b)
	{
		return 0;
	}
	else
	{
		return a;
	}
}
float poloj(float a)
{
	if (a > 0)
	{
		return a;
	}
	else
	{
		return 0;
	}
}
float _Max(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	if (a == b)
	{
		return 0;
	}
	else
	{
		return b;
	}
}






#include "Peredrii.h"
#include <string>
using namespace std;
#include <iostream>

int main()
{
	cout << "Summa = " << Sum(12.5, 24.8) << "\n";
	cout << "Summa = " << Sum(17.5, 13.6) << "\n";
	cout << "Summa = " << Sum(2, 5) << "\n";
	cout << poloj(-90) << "\n";
}

