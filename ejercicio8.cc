#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    bool primeraVez = true;
    int tiempoGanador, tiempoActual;
    string nombreGanador, nombreActual;
    char si;
    // hacemos un do while para que el usuario pueda ingresar otro participante
    do
    {
        //hacemos otro do while para comprobar que el dato no sea negativo y no sea mayor a 2 dias
        do
        {
        //    pedimos nombreActual y tiempo
            cout << "ingrese nombre del participante \n";
            cin >> nombreActual;
            cout << "ingrese el tiempo en segundos que tardo en hacer la tarea \n";
            cin >> tiempoActual;
//condicional para gusrdadar los primeros datos que entran 
            if (primeraVez == true)
            {
                tiempoGanador = tiempoActual;
                nombreGanador = nombreActual;
            }
//condicional para actualizar el ganador con los otros datos ingresados
            if (tiempoActual < tiempoGanador)
            {
                tiempoGanador = tiempoActual;
                nombreGanador = nombreActual;
            }

            primeraVez = false;

        } while (tiempoActual <= 0 || tiempoActual >= 172800);

        cout << "si desea ingresar otro participante escriba 's' sino escriba cualquier letra \n";
        cin >> si;
    } while (si == 's' || si == 'S');
    //condicional para saber si no hay mas participantes entonces que muetre el ganador
    if (si != 's' || si != 'S')
    {
        cout << "Felicitaciones " + nombreGanador + " eres el ganador \n";
        cout << "Con un tiempo de : " + to_string(tiempoGanador) + "\n";
    //regla de 3 para convertir de segundos a horas, minutos y segundos
        int dias = trunc(tiempoGanador / 86400);
        int reciduoDias = tiempoGanador - (dias * 86400);

        int horas = trunc(reciduoDias / 3600);
        int reciduoHoras = reciduoDias - (horas * 3600);

        int minutos = trunc(reciduoHoras / 60);
        int reciduoMinutos = reciduoHoras - (minutos * 60);

        cout << to_string(dias) + "d: " + to_string(horas) + "h : " + to_string(minutos) + "m : " + to_string(reciduoMinutos) + "s";
    }

    getch();
    return 0;
}
