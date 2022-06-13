#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main(int argc, const char **argv)
{
    int numero;
    string numerosDivisores;
    char continuacion;
    // bandera
    int contadorNumerosDivisores;

    do
    {
        do
        {
            if (contadorNumerosDivisores == 2)
            {
                cout << "intenta con otro numero \n";
            }
            
            cout << "ingrese el numero \n";
            cin >> numero;

            contadorNumerosDivisores = 0;
            numerosDivisores = "";

            // identificando numeros divusores valor absoluto
            for (int i = 1; i <= abs(numero); i++)
            {
                if (numero % i == 0)
                {
                    // actualizando bandera
                    contadorNumerosDivisores++;
                    numerosDivisores = numerosDivisores + " " + to_string(i) + "\n";
                }
            }

        } while (contadorNumerosDivisores == 2);

        cout << "estos son los numero divisores de  " + to_string(numero) + ":\n";
        cout << numerosDivisores;
        cout << "ingrese C para probar otro numero o cualquier letra para terminar";
        cin >> continuacion;

    } while (continuacion == 'c' || continuacion == 'C');

    return 0;
}