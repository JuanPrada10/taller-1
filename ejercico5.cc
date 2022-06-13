#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    bool datosIncorrectos = false;
    float salarioPersona, numeroHijos, impuesto;
    float salarioMinimo = 1000000;
// hacemos do while para comprobar los datos ingresados
    do
    {
// condicional para mostrar el mensaje
        if (datosIncorrectos == true)
            cout << "datos incorrectos,vuelva a intentar\n";

        cout << "Igrese el valor del impuesto\n";
        cin >> impuesto;
        cout << "ingrese su salario \n";
        cin >> salarioPersona;
        cout << "Ingrese cuantos hijos tiene\n";
        cin >> numeroHijos;
// declaramos como true a datosIncorrectos por si el while se cumple
        datosIncorrectos = true;
    } while (salarioPersona < 0 || numeroHijos < 0 || numeroHijos > 15);
// hacemos un condicional para cada condicion que nos pide el problema
    if (salarioPersona <= salarioMinimo && numeroHijos > 0)
    {
        cout << "usted no paga el impuesto \n * valor a pagar: 0 \n * descuento: " + to_string(impuesto);
// ponemos un return 0 para que el programa finalice si es esta la condicion que se cumple y asi para cada if
        return 0;
    }
    if (salarioPersona == salarioMinimo && numeroHijos == 0)
    {
        cout << "usted paga un 3% del impuesto \n * valor a pagar: " + to_string(lround(0.03 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.03 * impuesto));
        return 0;
    }
    if ((salarioPersona >= salarioMinimo && salarioPersona <= 2 * salarioMinimo) && (numeroHijos > 0 && numeroHijos < 3))
    {
        cout << "usted paga un 18% del impuesto \n * valor a pagar: " + to_string(lround(0.18 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.18 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 3 * salarioMinimo) && (salarioPersona <= 4 * salarioMinimo))
    {
        cout << "usted paga un 28% del impuesto \n * valor a pagar: " + to_string(lround(0.28 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.28 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 5 * salarioMinimo) && (salarioPersona <= 6 * salarioMinimo))
    {
        cout << "usted paga un 38% del impuesto \n * valor a pagar: " + to_string(lround(0.38 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.38 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 7 * salarioMinimo) && (salarioPersona <= 8 * salarioMinimo))
    {
        cout << "usted paga un 48% del impuesto \n * valor a pagar: " + to_string(lround(0.48 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.48 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 9 * salarioMinimo) && (salarioPersona <= 10 * salarioMinimo))
    {
        cout << "usted paga un 58% del impuesto \n * valor a pagar: " + to_string(lround(0.58 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.58 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 11 * salarioMinimo) && (salarioPersona <= 12 * salarioMinimo))
    {
        cout << "usted paga un 68% del impuesto \n * valor a pagar: " + to_string(lround(0.68 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.68 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 13 * salarioMinimo) && (salarioPersona <= 14 * salarioMinimo))
    {
        cout << "usted paga un 78% del impuesto \n * valor a pagar: " + to_string(lround(0.78 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.78 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 15 * salarioMinimo) && (salarioPersona <= 16 * salarioMinimo))
    {
        cout << "usted paga un 88% del impuesto \n * valor a pagar: " + to_string(lround(0.88 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.88 * impuesto));
        return 0;
    }
    if ((salarioPersona >= 17 * salarioMinimo) && (salarioPersona <= 18 * salarioMinimo))
    {
        cout << "usted paga un 98% del impuesto \n * valor a pagar: " + to_string(lround(0.98 * impuesto)) + "\n * descuento: " + to_string(lround(impuesto - 0.98 * impuesto));
        return 0;
    }

    cout << "usted paga un 100% del impuesto \n * valor a pagar: " + to_string(lround(impuesto)) + "\n * descuento: " + "0";

    getch();
    return 0;
}
