#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    bool whileCorrecto=false;
    int multiplos, inicio, final, i;
    // hacemos un do while para comprobar que el multiplo no sea negativo  o que T no sea mayor a K
    // o que el multiplo no sea mayor o igual al T
    do
    {
        // condicional para mostrar un mensaje "datos incorrectos"
        if (whileCorrecto==true)
        {
            cout << "datos incorrectos\n";
        }
        // pedimos los datos y los guardamos
        cout << "Ingrese de que numero quire los multiplos \n";
        cin >> multiplos;
        cout << "ingrese desde que numero quiere comenzar \n";
        cin >> inicio;
        cout << "ingrese hasta que numero desea llegar \n";
        cin >> final;
        // declaramos la variable como true por si el while se cumple 
        whileCorrecto=true;

    } while (multiplos < 0 || inicio > final||multiplos>=inicio);
    // for que inicie en el numero T+1 para que muestre el siguiente numero hasta K y que vaya en 1 en 1
    for (int i = inicio + 1; i < final; i++)
    {
        if (i % multiplos == 0)
            cout << to_string(i) + "\n";
    }

    return 0;
}
