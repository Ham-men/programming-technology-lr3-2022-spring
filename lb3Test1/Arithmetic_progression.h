#include "Progression.h"

#pragma once
class Arithmetic_progression: public Progression
{
private:
    double member;  //������ ���� ����������
    double const_ar; //���������� �������� 
    double count_el;   //���-�� ���������
public:
   
    Arithmetic_progression();                               // ������� �����������
    Arithmetic_progression(double m, double c, double col); // ����������� � ����������
    double getSummProgres()override;
    Arithmetic_progression(const Arithmetic_progression& obj, double m, double c, double col);  //����������� �����������. �����������
    

};


