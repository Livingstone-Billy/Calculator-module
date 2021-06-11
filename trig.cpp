#include <iostream>
#include "trig.h"
#include <cmath>
using namespace std;

Trigonometry::Trigonometry(){}

//Enter angle in radians

double Trigonometry::Sine(double angle) const
{
    return sin(angle);
}

double Trigonometry::Cosine(double angle) const
{
    return cos(angle);
}

double Trigonometry::Tangent(double angle) const
{
    return tan(angle);
}
double Trigonometry::exponent(double x) const
{
    return exp(x);
}
double Trigonometry::logs(double y) const
{
    return log(y);
}
double Trigonometry::logs10(double z) const
{
    return log10(z);
}