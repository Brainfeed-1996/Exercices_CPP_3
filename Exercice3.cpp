#include <iostream>
using namespace std;
main()
{
    char c = '\x05';
    int n = 5;
    long p = 1000;
    float x = 1.25;
    double z = 5.5;

    cout << n + c + p << endl; //1010
    cout << 2 * x + c << endl; //7.5
    cout << (char)n + c << endl; //10
    cout << (float)z + n / 2 << endl; //7.5

}
