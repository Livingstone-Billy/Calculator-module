#ifndef OTHER_H
#define OTHER_H
class Other
{
    public:
        Other();
        double square(double value,int by) const;
        double squareRoot(double number) const;
        double absoluteValue(int value) const;
        double Floor(double x) const;
        double Ceil(double y) const;
        double max(double m, double n) const;
        double min(double p,double q) const;
        void maxInArray() const;
        double getMean() const;
};

#endif // !1