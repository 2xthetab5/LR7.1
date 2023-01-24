#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class form
{
	public:
		int horsepower;
		int speed;
		form(int speed, int horsepower); // конструктор с параметрами
		form(int speed);
		form();
		~form();
		void output();
		//виртуальная функция
		virtual void input();
		//вызов виртуальной функции через вызов не виртуальной функцией базового класса
		void test();
		//метод базового класса для перегрузки
		void overload();

};

