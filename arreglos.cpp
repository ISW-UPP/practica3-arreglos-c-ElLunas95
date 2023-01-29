//Finalizado el 28/ene./2023 23:10:11

#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>

using namespace std;
string suma(int num1);
string titulo(string titulo2);

int main()
{
    //Para acentos y Ñ.
    setlocale(LC_CTYPE, "Spanish");

    float vector1[2], vector2[2], vectormulti[2], sumavec_ = 0;
    int i = 0, set = i;
    string set_string = "", titulo3;

    //Datos 1er Vector
    for (i = 0; i < 2; i++)
    {
        system("cls");
        cout << titulo(titulo3);
        set_string = suma(i);
        cout << i + 1;
        cout << set_string + " valor del 1er vector: \n";
        cin >> vector1[i];
    }

    //Datos 2do Vector
    for (i = 0; i < 2; i++)
    {
        system("cls");
        cout << titulo(titulo3);
        set_string = suma(i);
        cout << i + 1;
        cout << set_string + " valor del 2do vector: \n";
        cin >> vector2[i];
    }


    //Multiplicación
    for (i = 0; i < 2; i++)
    {
        vectormulti[i] = vector1[i] * vector2[i];
    }

    //Suma de los vectores
    for (i = 0; i < 2; i++)
    {
        sumavec_ += vectormulti[i];
    }

    //Resultado final
    system("cls");
    cout << titulo(titulo3);
    cout << "El producto escalar es: " << sumavec_;
    cout << "\n\n";
    system("pause");
}

//Funciones
string suma(int num1)
{
    string comple = "";
    if (num1 == 1)
    {
        comple = "do";
    }
    else
    {
        comple = "er";
    }

    return comple;
}

string titulo(string titulo2)
{
    string titulo = "Práctica III: Arreglos:\n\n";
    return titulo;
}
