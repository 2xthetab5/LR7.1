#include "Record.h"
#include <iostream>
#include <string.h>
#include <string>
#include <windows.h>
#include <vector>
using namespace std;

Record::Record(int m, int s)
{
	min = m;
	sec = s;
}

Record::Record()
{

}

void Record::Putmin(int m)
{
	min = m;
}

void Record::Display()
{
	cout << min << "  " << sec;
}

int Record::Numbersec()
{
	return 60 * min + sec;
}

