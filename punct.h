#ifndef PUNCT_H
#define PUNCT_H

#include <iostream>

class punct
{
    double x, y;

public:
    punct();
    punct(double, double);
    punct(punct&);
    ~punct();

    double abscisa();
    double ordonata();
    void afisare();
    void deplasare(double, double);
};

#endif
