#include <math.h>
#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
    double a, b, p, d, s;
    srand(time(0));
    a = rand() % 100;
    b = rand() % 100;
    p = (a + b) * 2;
    d = sqrt(a * a + b * b);
    s = a * b;
    cout << "results" << endl;
    cout << "p=" << p << "d=" << d << " s=" << s << endl;
    return 0;
}