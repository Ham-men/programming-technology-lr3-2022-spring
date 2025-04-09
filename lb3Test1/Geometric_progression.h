#include "Progression.h"
#pragma once
class Geometric_progression: public Progression
{
private:
    double member;  //первый член прогрессии
    double const_ge; //постоянная отношение 
    double count_el;   //кол-во элементов
public:
    
    Geometric_progression();                                //обычный конструктор
    Geometric_progression(double m, double c, double col);  // конструктор с параметром
    double getSummProgres() override;
    Geometric_progression(const Geometric_progression& obj, double m, double c, double col);  //конструктор копирование. бесполезная


};

