#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, const char **argv)
{
    // definimos las variables
    string nombreEmpleado;
    string respuesta;
    int salarioEmpleado, numeroEmpleados;
// pedimo el numero de empleados
    cout << "Ingrese numero de empleados\n";
    cin >> numeroEmpleados;
// hacemos un while para comprobar  que el numero de empleados no sea negativo
    while (numeroEmpleados <= 0)
    {
        cout << "Ingrese numero de empleados\n";
        cin >> numeroEmpleados;
    }
// hacemos un for para pedir el nombre de cada empleado y su salario
    for (int i = 0; i < numeroEmpleados; i++)
    {
    //    imprimimos un mensaje para que ingrese el nombre del empleado y 
    //    le añadimos un to_string para tranformar a "i" como string y nos muestre el
    //    numero en el que va y lo mismo para el salario
       cout << "Ingrese nombre del empleado # "+ to_string(i+1)+"\n";
        cin >> nombreEmpleado;
        cout << "Ingrese Salario Del "+to_string(i+1)+" \n";
        cin >> (salarioEmpleado);
        // creamos una varaiable para guardar el nombre y salario de cada empleado 
        respuesta = respuesta + " " + nombreEmpleado + " | " + to_string(salarioEmpleado * 3)+"\n";
    }
    // imprimimos la respuesta en donde ya esta guardado cada nombre y salario 
    cout<<"Empleado | salario\n";
    cout<<"---------------------\n";
    cout << respuesta;
     cout<<"---------------------\n";

    return 0;
}
