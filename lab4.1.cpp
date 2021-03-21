#include <math.h>
#include <iostream>
#include <ctime> 
using namespace std;
#include <iostream>

int main()
{
    srand(time(0));
    int x = rand() % 200+100;
    int y = rand() % 99+1;
    if (x > y) {
        cout << "x: " << x << ", is greater than y: " << y << endl;
    }
    cin >> x;
}
