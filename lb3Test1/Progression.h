#include <iostream>
#include <fstream>
using namespace std;

#pragma once
class Progression
{
public:
	virtual double getSummProgres() = 0;
	virtual ~Progression();	//деструктор
};

