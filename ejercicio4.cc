#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    bool esCorrecto=true;
    int multiplos, inicio, final, i;
    do
    {
        if (esCorrecto==false)
        {
            cout << "datos incorrectos\n";
        }
        cout << "Ingrese de que numero quiere los multiplos \n";
        cin >> multiplos;
        cout << "ingrese desde que numero quiere comenzar \n";
        cin >> inicio;
        cout << "ingrese hasta que numero desea llegar \n";
        cin >> final;
        esCorrecto=false;

    } while (multiplos < 0 || inicio > final||multiplos>=inicio);
    for (int i = inicio + 1; i < final; i++)
    {
        if (i % multiplos == 0)
            cout << i << '\n';
    }

    return 0;
}
