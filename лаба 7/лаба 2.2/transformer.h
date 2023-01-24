#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "melee.h"
#include "weapon.h"
#include "kind.h"
#include "form.h"
#include "model.h"
#include "Record.h"
#include "mini_Record.h"
#include "good.h"
#include "bad.h"
#include "soul.h"
#include "Account.h"
using namespace std;


class transformer
{
	friend void components(transformer &x);
	private:
		melee your_melee;
		weapon your_weapon;
		kind your_kind;
		model your_form;
		bad your_badkarma;
		good your_goodkarma;
		int comps = 4;
	public:
		transformer(kind your_kind, melee your_melee, weapon your_weapon, model your_form, bad your_badkarma, good your_goodkarma);
		transformer(melee your_melee);
		transformer();
		~transformer();
		void input();
		void output();
		void color(transformer your_transformer);
		void speed_type(transformer your_transformer);
		static void weapon_details_counter(transformer your_transformer);
		static void summa(transformer your_transformer, int *summa1);
		void summa(transformer your_transformer, int &summa2);
		void _karma(transformer your_transformer);
};

