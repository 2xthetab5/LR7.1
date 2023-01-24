#pragma once
#include "form.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

//производный класс
class model:
    public form
{
public:
    string model_of_car;
    //переопределение виртуальной функции в производном классе при помощи override
    void input() override;
    void output_model();
    void overload();
    model(string model_of_car, int speed, int horsepower);
    model();
   
};

