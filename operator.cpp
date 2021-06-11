#include <iostream>
#include <vector>
#include "operator.h"
using namespace std;

Operator::Operator(){}
double Operator::addition() const
{
    int value_list;
    cout<<"Add how many values: ";
    cin>>value_list;
    vector<double>values(value_list);
    cout<<"Enter the values to add: ";
    double total = 0;
    for(int i=0;i<value_list;i++)
    {
        cin>>values[i];
    }
    for(int row=0;row<values.size();row++)
    {
        total += values[row];
    }
    return total;
}

double Operator::subtract(double value1,double value2) const
{
    typedef double* pointer;
    pointer val1;
    pointer val2;
    val1 = &value1;
    val2 = &value2;
    return *val1 - *val2;
}

double Operator::division(double value1,double value2)
{
    return value1 / value2;
}

double Operator::multiplication() const
{
    cout<<"Multiply how many values: ";
    int values;
    cin>>values;
    double myValue[values];
    cout<<"Enter the values: ";
    double product = 1;
    for(int i=0;i<values;i++)
    {
        cin>>myValue[i];
    }
    for(int row = 0;row<values;row++)
    {
        product *= myValue[row];
    }
    return product;
}