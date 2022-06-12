#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, const char **argv)
{
    string nombreEmpleado;
    string respuesta;
    int salarioEmpleado, numeroEmpleados;

    cout << "Ingrese numero de empleados\n";
    cin >> numeroEmpleados;

    while (numeroEmpleados <= 0)
    {
        cout << "Ingrese numero de empleados\n";
        cin >> numeroEmpleados;
    }

    for (int i = 0; i < numeroEmpleados; i++)
    {
        cout << "Ingrese nombre "+to_string(i+1)+"\n";
        cin >> nombreEmpleado;
        cout << "Ingrese Salario Del "+to_string(i+1)+" \n";
        cin >> (salarioEmpleado);
        respuesta = respuesta + " " + nombreEmpleado + " | " + to_string(salarioEmpleado * 3)+"\n";
    }
    cout<<"Empleado | salario\n";
    cout<<"---------------------\n";
    cout << respuesta;
     cout<<"---------------------\n";

    return 0;
}
