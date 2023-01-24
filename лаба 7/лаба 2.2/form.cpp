#include "form.h"
#include <iostream>
#include <string.h>
using namespace std;

form::form(int speed, int horsepower) {
	this->speed = 0;
	this->horsepower = 0;
	puts("");
	cout << "Вызван конструктор базового класса с параметрами" << endl;
	puts("");
}
form::form(int speed) {
	this->speed = 0;
}
form::form() {
	this->speed = 200;
	this->horsepower = 300;
}
form::~form() {

}
void form::input() {
	cout << "Введите количество лошадиных сил у транспорта, в который превращается ваш трансформер(от 100 до 1000): ";
	cin >> horsepower;
	cout << "Введите максимальную скорость транспорта(в км/ч), в который превращается ваш трансформер(от 120 до 400): ";
	cin >> speed;
}
void form::output() {
	cout << "Количество лошадиных сил транспорта, в который превращается ваш трансформер: " << horsepower << endl;;
	cout << "Максимальная скорость транспорта, в который превращается ваш трансформер: " << speed << endl;
}
//вызов виртуальной функции через вызов не виртуальной функцией базового класса
void form::test() {
	return input();
}
//метод базового класса для перегрузки
void form::overload() {
	cout << "Метод базового класса для перегрузки" << endl;
}