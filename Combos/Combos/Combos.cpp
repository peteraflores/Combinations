// Combos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Combinations.h"
#include <vector>
using namespace std;
int main()
{
	std::vector<char> ls = { 's' ,'t','o','p','l','g','w'};
	Combinations Combo;
	Combo.FindAll(ls, 4);
}
