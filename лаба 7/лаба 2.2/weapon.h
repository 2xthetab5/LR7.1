#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class weapon
{
	//Заменить методы Display используя операции << для C++ 
	friend void operator << (ostream& x, weapon& y);
	public:
		string type_of_weapon;
		int durability_of_weapon;
		string color_of_weapon;
		int ammo_of_weapon;
		int cost_weapon;
		weapon(string type_of_weapon, int durability_of_weapon, string color_of_weapon, int ammo_of_weapon, int cost_weapon);
		weapon(string type_of_weapon);
		weapon();
		~weapon();
		void input();
		void output();
		static void weapon_counter(static int wc);
		//применение модификатора protected
protected:
		static int wc;

};

