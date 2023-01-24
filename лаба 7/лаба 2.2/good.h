#pragma once
#include "soul.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class good :
    public soul
{
public:
    void karma() override;
};

