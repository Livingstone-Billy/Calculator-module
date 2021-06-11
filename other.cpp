#include <iostream>
#include "other.h"
#include <cmath>
#include <cstdlib>
using namespace std;
Other::Other(){}

double Other::square(double value, int by) const
{
    return pow(value,by);
}
double Other::squareRoot(double number) const
{
    return sqrt(number);
}
double Other::absoluteValue(int x) const
{
    return abs(x);
}
double Other::Floor(double x) const
{
    return floor(x);
}
double Other::Ceil(double y) const
{
    return ceil(y);
}
double Other::max(double m,double n) const
{
    if (m > n)
        return m;
    else
        return n;
}
double Other::min(double p,double q) const
{
    if(p<q)
        return p;
    else
        return q;
}
void Other::maxInArray() const
{
    cout<<"Enter no of elements: ";
    int n;
    cin>>n;
    double myarray[n];
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++)
    {
        cin>>myarray[i];
    }
    double maxValue = myarray[0];
    double minValue = myarray[0];
    for(int j = 0;j<n;j++)
    {
        if(maxValue<myarray[j])
            maxValue = myarray[j];
        if(minValue>myarray[j])
            minValue = myarray[j];
    }
    cout<<"Max value "<<maxValue<<endl;
    cout<<"Min value "<<minValue<<endl;
}

double Other::getMean() const
{
    cout<<"Enter no of elements: ";
    int n;
    cin>>n;
    double mylist[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i = 0;i<n;i++)
    {
        cin>>mylist[i];
    }
    double total = 0;
    for(int row = 0;row<n;row++)
    {
        total += mylist[row];
    }
    double average;
    average = total / n;
    return average;
}