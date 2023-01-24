#include "model.h"
#include <iostream>
#include <string.h>
#include <string>
#include <windows.h>
using namespace std;

//производный класс

//вызов конструктора базового класса в конструкторе производного класса с параметрами
model::model(string model_of_car, int speed, int horsepower):form(0, 0) {
	this->model_of_car = "model_of_car";
}
model::model() {
	this->model_of_car = "car";
}
//переопределение виртуальной функции в производном классе при помощи override
void model::input() {
	cout << "Введите в какой транспорт превращается ваш трансформер(sportcar, truck, tank, jeep): ";
	cin >> model_of_car;
	cout << "(Переопределение ВФ) Введите количество лошадиных сил у транспорта, в который превращается ваш трансформер(от 100 до 1000): ";
	cin >> horsepower;
	cout << "(Переопределение ВФ) Введите максимальную скорость транспорта(в км/ч), в который превращается ваш трансформер(от 120 до 400): ";
	cin >> speed;
}
void model::output_model() {
	cout << "Транспорт, в который превращается ваш трансформер: " << model_of_car << endl;
}
//метод производного класса для перегрузки
void model::overload() {
	cout << "Метод производного класса для перегрузки" << endl;
}
