#include "Arithmetic_progression.h"

Arithmetic_progression::Arithmetic_progression()
{
    member = 0;
    const_ar = 0;
    count_el = 0;
}

Arithmetic_progression::Arithmetic_progression(double m, double c, double col) : member(m), const_ar(c), count_el(col)
{
}

double Arithmetic_progression::getSummProgres()
{
    double temp = 0;
    double temp_member = member;

    for (int i = 0; i < count_el; i++)
    {
        temp += temp_member;
        temp_member += const_ar;
    }
    return temp;
}


