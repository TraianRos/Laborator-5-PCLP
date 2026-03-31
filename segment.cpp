#include "segment.h"

using namespace std;

segment::segment(punct& A1, punct& B1)
{
    A = A1;
    B = B1;
    cout << "Constructor segment [";
    A.afisare();
    cout << ",";
    B.afisare();
    cout << "]\n";
}

segment::segment(segment& AB)
{
    A = AB.A;
    B = AB.B;
    cout << "Constructor copiere segment [";
    A.afisare();
    cout << ",";
    B.afisare();
    cout << "]\n";
}

segment::~segment()
{
    cout << "Destructor segment [";
    A.afisare();
    cout << ",";
    B.afisare();
    cout << "]\n";
}

punct segment::origine()
{
    return punct(A);
}

punct segment::varf()
{
    return punct(B);
}

void segment::afisare()
{
    cout << "[";
    A.afisare();
    cout << ",";
    B.afisare();
    cout << "]\n";
}

void segment::translatie(double dx, double dy)
{
    A.deplasare(dx, dy);
    B.deplasare(dx, dy);
}
