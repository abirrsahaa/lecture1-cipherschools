#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "input 4 integers:" << endl;
    cin >> a >> b >> c >> d;
    cout << (a > b && c > d) << endl;
    cout << (a < b || d > c) << endl;
}