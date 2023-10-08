#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << "give two floting point numner" << endl;

    cin >> a >> b;
    if (a > 0.01 || b > a)
    {
        cout << "the condition in the if statment is correct" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "entre integer" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "hahaa";
        break;
    case 2:
        cout << "hehee";
        break;
    case 3:
        cout << "hhuhuhuhu";
        break;
    case 4:
        cout << "ohhhhh";
        break;
    default:
        cout << "getlostt";
    }
        return 0;
}