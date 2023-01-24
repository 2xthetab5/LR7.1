#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

class Record
{
public:
	int min, sec;
	Record(int m, int s); // конструктор с параметрами
	Record();
	void Putmin(int m); // задание значению поля
	void Display();
	int Numbersec();
};

