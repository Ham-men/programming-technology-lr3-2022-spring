#include "Progression.h"
#pragma once
class Geometric_progression: public Progression
{
private:
    double member;  //������ ���� ����������
    double const_ge; //���������� ��������� 
    double count_el;   //���-�� ���������
public:
    
    Geometric_progression();                                //������� �����������
    Geometric_progression(double m, double c, double col);  // ����������� � ����������
    double getSummProgres() override;
    Geometric_progression(const Geometric_progression& obj, double m, double c, double col);  //����������� �����������. �����������


};

