#include "Geometric_progression.h"

Geometric_progression::Geometric_progression()
{
	member = 0;
	const_ge = 0;
	count_el = 0;
}

Geometric_progression::Geometric_progression(double m, double c, double col) : member(m), const_ge(c), count_el(col)
{
}

double Geometric_progression::getSummProgres()
{
    double temp = 0;
    double temp_member = member;

    for (int i = 0; i < count_el; i++)
    {
        temp += temp_member;
        temp_member *= const_ge;
    }
    return temp;
}


