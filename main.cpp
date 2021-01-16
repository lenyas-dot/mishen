#include <iostream>
#include <cstdlib>
#include <ctime>
#include "math.h"
using namespace std;
int main()
{
    unsigned seed = time(nullptr);
    srand(seed);
    int x;
    int y;
    int SumOfPoints = 0;
    int i = 1;
    int RadiusDiv;
    double Radius;
    while(i < 6) {

        cout <<"Enter the coordinates " << endl;
        cout << "x=";
        cin >> x;
        cout << "y=";
        cin >> y;

        x=x + rand()% 11-5;
        y=y + rand()% 11-5;

        cout << "You hit the spot " << "(" << x << "," << y << ")" << endl;

        Radius = sqrt(x * x+y * y);

        cout << "Radius= " << Radius << endl;

        if (Radius < 5)
        {

            RadiusDiv=floor(sqrt(x*x+y*y));

            SumOfPoints = SumOfPoints + abs(RadiusDiv - 5);

            cout << "Your current score:  " << SumOfPoints << endl;
        }

        cout <<"" << endl;
        i++;
    }

    cout <<"__________________________________________________________" << endl;
    if (SumOfPoints < 10)
    {
        cout << "Your score:  " << SumOfPoints << "  - Loser!" << endl;
    }
    else
    {
        cout << "Your score:  " << SumOfPoints << "  - Winner!" << endl;

    }
}