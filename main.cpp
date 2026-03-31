#include <iostream>
#include "punct.h"
#include "segment.h"

using namespace std;

int main()
{
    punct P(7.8, -20.4), Q(-4.82, 8.897), A, B;
    punct P3, Q3;

    segment S(P, Q);
    segment S1(P3, Q3);

    cout << "Apasa Enter pentru continuare!\n";
    cin.get();

    cout << "Punctele:\n";
    P.afisare();  cout << '\n';
    Q.afisare();  cout << '\n';
    P3.afisare(); cout << '\n';
    Q3.afisare(); cout << '\n';
    A.afisare();  cout << '\n';
    B.afisare();  cout << '\n';

    cout << "\nSegment:\n";
    S.afisare();

    punct D(1, 2);
    punct C;
    C = D;
    C.afisare();
    cout << '\n';

    cin.get();

    punct CC = C;
    cout << "in urma copierii: ";
    CC.afisare();
    cout << '\n';

    cout << "Se deplaseaza punctul CC cu valorile 10, 20. Noile coord. = ";
    CC.deplasare(10, 20);
    CC.afisare();
    cout << '\n';

    cout << "Abscisa CC=" << CC.abscisa();
    cout << " Ordonata CC=" << CC.ordonata() << '\n';

    cout << "Varf segment S = ";
    (S.varf()).afisare();
    cout << '\n';

    cout << "Origine segment S = ";
    C = S.origine();
    C.afisare();
    cout << '\n';

    CC.afisare();
    cout << '\n';

    S1 = S;
    S1.afisare();

    cout << "S1 translatat cu 100, 1000 este: ";
    S1.translatie(100, 1000);
    S1.afisare();

    segment S2 = S1;
    cout << "Segment S2 obtinut prin copiere: ";
    S2.afisare();

    cout << "Iesire din main\n";
    return 0;
}
