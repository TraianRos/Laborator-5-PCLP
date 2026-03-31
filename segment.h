#ifndef SEGMENT_H
#define SEGMENT_H

#include "punct.h"

class segment
{
private:
    punct A, B;

public:
    segment(punct&, punct&);
    segment(segment&);
    ~segment();

    punct origine();
    punct varf();
    void afisare();
    void translatie(double, double);
};

#endif
