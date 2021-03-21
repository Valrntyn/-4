#include <math.h>
#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
    srand(time(0));
    int i = rand() % 4 + 1;
    while (i <= 5) {
        cout << rand() % i + 1 << "\n";
        i++;
    }
    cin >> i;
}
