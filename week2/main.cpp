#include <iostream>        // nodig voor cout (schrijven naar scherm)
#include <iomanip>         // nodig voor setw (veldbreedte defini�ren)
using namespace std;
// De declaratie van de ADT Tijdsduur:
class Tijdsduur {
public:
//...
    void eraf(Tijdsduur t);
//...
private:
    int min;
//...
};
// De definities van de memberfunctie van de ADT Tijdsduur, oftewel: de
//implementatie van de ADT Tijdsduur:
void Tijdsduur::eraf(Tijdsduur t) {
min �= t.min;

}
//...
int main() {
    Tijdsduur t1(3, 50);        // t1 is 3 uur en 50 minuten
    cout << "t1 = "; t1.print(); cout << endl;
    const Tijdsduur kw(15);     // kw is 15 minuten
    cout << "kw = "; kw.print(); cout << endl;
    t1.erbij(kw);               // Tel kw bij t1 op
    cout << "t1 = "; t1.print(); cout << endl;
    Tijdsduur t2(t1);           // t2 is een kopie van t1
    t2.eraf(kw);                // Trek kw van t2 af
    cout << "t2 = "; t2.print(); cout << endl;
    t2.maal(7);                 // Vermenigvuldig t2 met 7
    cout << "t2 = "; t2.print(); cout << endl;
    Tijdsduur t3(3, �122);      // t3 is 3 uur minus 122 minuten
    cout << "t3 = "; t3.print(); cout << endl;
    Tijdsduur t4(3, 122);       // t4 is 3 uur plus 122 minuten
    cout << "t4 = "; t4.print(); cout << endl;
    return 0;
}
