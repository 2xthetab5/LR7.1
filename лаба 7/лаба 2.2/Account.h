#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

template <typename T>
class Account {
private:
    T id;
public:
    Account();
    Account(T id) : id(id)
    { }
    T getId() {
        return id;
    }
};
template<typename T>
inline Account<T>::Account()
{
}
