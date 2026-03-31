#include "punct.h"

using namespace std;

punct::punct()
{
    x = 0;
    y = 0;
    cout << "Constr. implicit pentru punct(" << x << "," << y << ")\n";
}

punct::punct(double valx, double valy)
{
    x = valx;
    y = valy;
    cout << "Constructor punct(" << x << "," << y << ")\n";
}

punct::punct(punct& P)
{
    x = P.x;
    y = P.y;
    cout << "Constructor copiere punct(" << x << "," << y << ")\n";
}

punct::~punct()
{
    cout << "Destructor punct(" << x << "," << y << ")\n";
}

double punct::abscisa()
{
    return x;
}

double punct::ordonata()
{
    return y;
}

void punct::deplasare(double dx, double dy)
{
    x += dx;
    y += dy;
}

void punct::afisare()
{
    cout << "Punct(" << x << "," << y << ")";
}
