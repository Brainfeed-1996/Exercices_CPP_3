#include <iostream>
using namespace std;
main()
{
    char c = '\x05';
    int n = 5;
    long p = 1000;
    float x = 1.25;
    double z = 5.5;

    cout << n + c + p << endl;
    cout << 2 * x + c << endl;
    cout << (char)n + c << endl;
    cout << (float)z + n / 2 << endl;

}