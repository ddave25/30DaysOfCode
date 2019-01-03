// 30DaysOfCode_Day26.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Difference(int actual, int returned)
{
	int difference = actual - returned;

	return difference;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int actualDay, actualMonth, actualYear, returnDay, returnMonth, returnYear, fine;

	cin >> actualDay;
	cin >> actualMonth;
	cin >> actualYear;

	cin >> returnDay;
	cin >> returnMonth;
	cin >> returnYear;

	if ((actualYear == returnYear && actualMonth < returnMonth) || (actualYear == returnYear && actualMonth == returnMonth && actualDay <= returnDay))
	{
		fine = 0;
	}

	else if (actualYear == returnYear && actualMonth == returnMonth && actualDay > returnDay)
	{
		fine = Difference(actualDay, returnDay) * 15;
	}

	else if (actualYear == returnYear && actualMonth > returnMonth)
	{
		fine = Difference(actualMonth, returnMonth) * 500;
	}

	else if (actualYear > returnYear)
	{
		fine = 10000;
	}

	cout << fine << "\n";

	cin.get();
	cin.get();

	return 0;
}