#include <iostream>

using namespace std;

int main()
{
    int valoare, cantitate, pret;
    cout << "Cantitatea : " << endl;
    cin >> cantitate;
    cout << "Pretul : " << endl;
    cin >> pret;
    valoare = cantitate * pret;
    cout << "Valoarea :" << valoare << endl;
    return 0;
}
