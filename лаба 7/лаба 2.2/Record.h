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
	Record(int m, int s); // ����������� � �����������
	Record();
	void Putmin(int m); // ������� �������� ����
	void Display();
	int Numbersec();
};

