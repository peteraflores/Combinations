#include "pch.h"
#include "Combinations.h"
#include <vector>
#include <iostream>
using namespace std;

Combinations::Combinations()
{
	
}


Combinations::~Combinations()
{
}

int Combinations::factorial(int num) {
	if (num - 1 > 0) {
		return num * factorial(num - 1);
	}
	else {
		return 1;
	}
	
}

