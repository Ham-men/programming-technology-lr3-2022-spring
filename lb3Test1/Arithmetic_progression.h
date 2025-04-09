#include "Progression.h"

#pragma once
class Arithmetic_progression: public Progression
{
private:
    double member;  //первый член прогрессии
    double const_ar; //постоянная разность 
    double count_el;   //кол-во элементов
public:
   
    Arithmetic_progression();                               // обычный конструктор
    Arithmetic_progression(double m, double c, double col); // конструктор с параметром
    double getSummProgres()override;
    Arithmetic_progression(const Arithmetic_progression& obj, double m, double c, double col);  //конструктор копирование. бесполезная
    

};


