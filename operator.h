#ifndef OPERATOR_H
#define OPERATOR_H
#include <string>
using namespace std;
class Operator
{
    public:
        Operator();
        double addition() const;
        double subtract(double value1,double value2) const;
        double division(double value1,double value2);
        double multiplication() const;
};

#endif