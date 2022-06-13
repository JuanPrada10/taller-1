#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main(int argc, const char **argv)
{
    int numero;
    string resutadoDivisores;
    char continuacion;
    int contadorNumerosDivisores;
    // hacemos un do while saber si la persona desea probar con mas numeros
    do
    {
        //hacemos otro do while para comprobar si el numero que ingresaron es primo o no
        do
        {
            // condicion para verificar y mostrar que el numero ingresado es primo en o apartir
            // de la segunda repeticion del do while
            if (contadorNumerosDivisores == 2){
                cout << "intenta con otro numero \n";
            }


            cout << "ingrese el numero \n";
            cin >> numero;

            //reiniciamos las variables para que no guarde divisores que no son validos
            contadorNumerosDivisores = 0;
            resutadoDivisores = "";

            // hacemos un for para que empieza desde 1 hasta el valor absoluto del numero ingresado
            for (int i = 1; i <= abs(numero); i++)
            {
                //condicion para saber si i es un divisor 
                if (numero % i == 0)
                {
                    // contando nuevo numero divisor 
                    contadorNumerosDivisores++;
                    //guardando divisor anterior y el actual para mostrarlo al final 
                    resutadoDivisores = resutadoDivisores + " " + to_string(i) + "\n";
                }
            }

        } while (contadorNumerosDivisores == 2);

        cout << "estos son los numero divisores de  " + to_string(numero) + ":\n";
        cout << resutadoDivisores;
        cout << "ingrese C para probar otro numero o cualquier letra para terminar: ";
        cin >> continuacion;

    } while (continuacion == 'c' || continuacion == 'C');

    return 0;
}