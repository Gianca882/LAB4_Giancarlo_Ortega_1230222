// Lab4_Giancarlo_Ortega_1230222.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include "chrono"
#include "thread"

using namespace std;



void recorrido()
{
    bool comp = false;

    int conejo;
    int tortuga;
    int contC = 0;
    int contT = 0;

    
    char C = 'C';
    char ConejoVacia = '-';
    char ConejoPista[70];
    ConejoPista[0] = C;
    ConejoPista[1] = ConejoVacia;
    char* Pc = &C;

    char newC = *Pc;

    char T = 'T';
    char TortugaVacia = '-';
    char TortugaPista[70];
    TortugaPista[0] = T;
    TortugaPista[1] = TortugaVacia;

    char* Pt = &T;
    char newT = *Pt;



    for (int i = 0; i <= 61;i++)
    {
        conejo = rand() % 11;
        tortuga = rand() % 11;



        if (conejo > tortuga)

        {
            if (conejo >= 8 && conejo <= 10)
            {
                contC = contC + 9;
                ConejoPista[contC] = newC;
                cout << "\n super salto!! + 9 cuadros!! - pos: " << contC;
                this_thread::sleep_for(0.5s);
            }
            else if (conejo >= 4 && conejo <= 7)
            {
                contC = contC + 1;
                ConejoPista[contC] = newC;
                cout << " \n salto pequeño!! + 1 cuadros!! - pos: " << contC;
                this_thread::sleep_for(0.5s);
            }
            else if (conejo == 1)
            {
                if (contC > 12)
                {
                    contC = contC - 12;
                    ConejoPista[contC] = newC;
                    cout << " \nGRAN RESBALON!! - 12 cuadros!! - pos: " << contC;
                    this_thread::sleep_for(0.5s);
                }
                else
                {
                    cout << " \n no se mueve " << contC;;
                    this_thread::sleep_for(0.5s);
                }
            }
            else if (conejo == 2)
            {
                if (contC > 2)
                {
                    contC = contC - 2;
                    ConejoPista[contC] = newC;
                    cout << " \n resbalon!! - 2 cuadros!! - pos: " << contC;
                    this_thread::sleep_for(0.5s);
                }
                else
                {

                    cout << "\n conejo se queda inmovil " << contC;
                    this_thread::sleep_for(0.5s);
                }

            }
            else
            {

                cout << "\nSe ha quedado dormido!! + 0 cuadros!! - pos: " << contC;
                this_thread::sleep_for(0.5s);
            }
        }
        else if (tortuga > conejo)

        {
            if (tortuga >= 1 && tortuga <= 5)
            {
                contT = contT + 3;
                TortugaPista[contT] = newT;
                cout << "\n tortuga: paso veloz!! + 3 cuadros! -  pos : " << contT;
                this_thread::sleep_for(0.5s);
            }
            else if (tortuga >= 8 && tortuga <= 10)
            {
                contT = contT + 1;
                TortugaPista[contT] = newT;
                cout << "\ntortuga: Paso lento! + 1 cuadro! -  pos : " << contT;
                this_thread::sleep_for(0.5s);
            }
            else
            {
                if (contT > 6)
                {
                    contT = contT - 6;
                    TortugaPista[contT] = newT;
                    cout << "\ntortuga: Resbalon!! - 6  cuadros! - pos: " << contT;
                    this_thread::sleep_for(0.5s);
                }
                else
                {
                    contT = contT;
                    cout << "\ntortuga oermanece inmovil " << contT;
                    this_thread::sleep_for(0.5s);
                }

            }
        }
        else
        {
            cout << "\n Mordida!!!";
            this_thread::sleep_for(0.5s);
        }

    }
    if (contC >= 70)
    {
        cout << "\n \n Fin de la carrera, gana el conejo - conejo: Ni hablar!\n";
        this_thread::sleep_for(0.5s);

    }
    else if (contT >= 70)
    {
        cout << "\n \n Fin de la carrera, gana la tortuga - Tortuga: ¡BRAVO!\n";
        this_thread::sleep_for(0.5s);

    }
    cout << "\n Recorrido realizado por cada animal, la C son las posiciones donde el conejo paso y las T donde la tortuga paso \n";
    cout << "\n Conejo ";
    for (int o = 0; o < 70; o++)
    {
        cout << ConejoPista[o] << ",";

    }
    cout << "\n";

    cout << "\n tortuga: ";
    for (int q = 0; q < 70; q++)
    {
        cout << TortugaPista[q] << ",";

    }
    cout << "\n";

}


int main()
{
    cout << "Hoy se realizara la esperada carrera no se olviden de hacer sus apuestas, la carrera de hoy: la liebre contra la tortuga :O \n";
    cout << "En sus marcas... Listos.....\n";
    cout << " 1... \n 2... \n 3!! \n";
    this_thread::sleep_for(3s);
    cout << " FUERAAAA! \n";
    cout << "\n";
    this_thread::sleep_for(0.5s);
    recorrido();
}
