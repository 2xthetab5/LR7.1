#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <conio.h>
#include "melee.h"
#include "weapon.h"
#include "kind.h"
#include "form.h"
#include "transformer.h"
#include "windows.h"
#include "Record.h"
#include "mini_Record.h"
#include "Account.h"
#include <vector>
#include <list>
#include <algorithm>  
using namespace std;

bool cond(int k)
{
	return (k >= 5 && k <= 6);        
}

int main() {
	setlocale(LC_ALL, "RUS");
	int i = 0;
	string strinput;
	int intinput;
	int count_1, count_2, count_3;
	count_1 = 0;
	count_2 = 0;
	count_3 = 0;
	intinput = 0;
	int c;

	auto *your_transformer = new transformer[20];
	auto *your_transformer_2 = new transformer[20][20];
	kind your_kind = kind();
	melee your_melee = melee();
	weapon your_weapon = weapon();
	model your_form = model("model_of_car", 0, 0);
	bad your_badkarma;
	good your_goodkarma;
	your_transformer[i] = transformer(your_kind, your_melee, your_weapon, your_form, your_badkarma, your_goodkarma);

	while (intinput != 9) {
		cout << " Введите: 1 - для создания вашего трансформера " << endl;
		cout << " 2 - для вывода всех ваших трансформеров " << endl;
		cout << " 3 - для создания двумерного массива из трансформера " << endl;
		cout << " 4 - для вывода двумерного массива из трансформера " << endl;
		cout << " 5 - для перегрузки оператора присваивания объекту производного класса объектов базового класса " << endl;
		cout << " 6 - для вывода кармы ваших трансформеров" << endl;
		cout << " 7 - для использования шаблона класса" << endl;
		cout << " 8 - для работы с контейнером" << endl;
		cout << " 9 - выхода" << endl;
		/////TRY БЛОК/////
		cin >> strinput;
		try {
			intinput = stoi(strinput);
			if (intinput > 7 || intinput < 1)
				throw ("invalid range");
		}
		catch (invalid_argument e) {
			cout << ("Нужно вводить цифру");
		}
		catch (char const* s) {
			cout << ("Диапазон 1-7\n");
		}
		switch (intinput) {
		case 1:
		{
			your_transformer[i].input();
			your_transformer[i].output();
			your_transformer[i].weapon_details_counter(*your_transformer);
			your_transformer[i].color(*your_transformer);
			your_transformer[i].speed_type(*your_transformer);
			//Дружественная функция
			components(*your_transformer);
			i++;
			count_1++;
			break;
		}
		case 2: {
			for (int j = 0; j < count_1; j++) {
				your_transformer[j].output();
				your_transformer[j].weapon_details_counter(*your_transformer);
				your_transformer[j].color(*your_transformer);
				your_transformer[j].speed_type(*your_transformer);
				components(*your_transformer);
				puts("");
			}
			break;
		}
		case 3: {
			//ДВУМЕРНЫЙ МАССИВ ОБЪЕКТОВ//
			for (int k = 0; k < 1; k++) {
				count_2++;
				for (int j = 0; j < 1; j++) {
					kind your_kind = kind();
					melee your_melee = melee();
					weapon your_weapon = weapon();
					model your_form = model();

					your_transformer_2[i][j] = transformer(your_kind, your_melee, your_weapon, your_form, your_badkarma, your_goodkarma);
					your_transformer_2[i][j].input();
					your_transformer_2[i][j].output();
					your_transformer_2[i][j].weapon_details_counter(*your_transformer);
					your_transformer_2[i][j].color(*your_transformer);
					your_transformer_2[i][j].speed_type(*your_transformer);
					count_3++;
				}
			}
			break;
		}
		case 4: {
			//ДВУМЕРНЫЙ МАССИВ ОБЪЕКТОВ - ВЫВОД//
			for (int k = 0; k < count_2; k++) {
				for (int j = 0; j < count_3; j++) {
					your_transformer_2[i][j].output();
					your_transformer_2[i][j].weapon_details_counter(*your_transformer);
					your_transformer_2[i][j].color(*your_transformer);
					your_transformer_2[i][j].speed_type(*your_transformer);
					puts("");
				}
			}
			break;
		}
		//перегрузка оператора присваивания объекту производного класса объектов базового класса
		case 5: {
			Record a(2, 4);
			mini_Record b(3, 5);
			a = b;
			b.Putmin(5);    // b: min=5 sec=5 a: min=3 sec=5 – у a прежние значения полей после присваивания
			Record* c = new Record(2, 4);
			mini_Record* d = new mini_Record(3, 5);
			c = d;   // c и d указывают на одну и ту же область памяти
			d->Putmin(5); // d: min=5 sec=5 c: min=5 sec=5 ! изменение в одной области памяти
			cout << "c = " << c << endl;
			cout << "d = " << d << endl;
			break;
		}
		case 6: {
			for (int j = 0; j < count_1; j++) {
				your_transformer[j]._karma(*your_transformer);
				puts("");
			}
			break;
		}
		case 7: {
			//шаблон класса
			puts("");
			cout << "      Код выводит два account-id, шаблон используется для уточнения какого типа id(только цифры или смешанный вариант)" << endl;
			puts("");
			Account<string> acc1("ca-pub1343767");
			Account<int> acc2(1234566);
			cout << "acc1: " << acc1.getId() << endl;
			cout << "acc2: " << acc2.getId() << endl;
			break;
		}
		case 8: {
			//контейнер
			vector <int> v1;      
			vector <Record>v2;  
			v1.clear();                 
			v2.clear();
			int k, m, n, p, z;
			k = 2;
			m = 5;
			n = 3;
			v1.push_back(k);
			v1.push_back(m);
			v1.push_back(n);
			v1.push_back(9);   
			p = v1.size();            
			v1.pop_back();      
			Record a(2, 55), b(3, 1), c(3, 8);
			v2.push_back(a);
			v2.push_back(b);
			z = v1[1];      
			cout << ("Пример контейнера:") << endl;
			cout << z << '\n';  
			c = v2[0];
			c.Display();    
			//сортировка
			v1.clear();
			v1.push_back(9);
			v1.push_back(6);
			v1.push_back(-2);
			v1.push_back(-5);
			v1.push_back(3);
			v1.push_back(-1);
			v1.push_back(4);
			v1.push_back(7);   
			sort(v1.begin(), v1.end());  
			//поиск
			v1.clear();
			v1.push_back(9);
			v1.push_back(6);
			v1.push_back(-2);
			v1.push_back(-5);
			v1.push_back(3);
			v1.push_back(-1);
			v1.push_back(4);
			v1.push_back(7);
			vector<int>::iterator ia;
			ia = find_if(v1.begin(), v1.end(), cond); // поиск, удовлетворяющий условию
			if (ia != v1.end())     // если найден
				int v = (*ia);   // v=6
			break;
		}
			  fflush(stdin);
			  for (int i = 0; i < 1; i++) {
				  delete your_transformer;
			  }
			  delete[] your_transformer;

		}
	}
}