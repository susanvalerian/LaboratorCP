#include <iostream>

using namespace std;

int main()
{
    int v;
    cout << "Introduceti virsta : " << endl;
    cin >> v;
    if(v >= 18)
        cout << "Major" << endl;
    else
        cout << "Minor" << endl;
    return 0;
}
