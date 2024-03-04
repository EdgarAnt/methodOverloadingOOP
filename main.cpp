// test.cpp - Trabajar con la clase CFecha
#include <iostream>
#include <ctime>
#include "fecha.h"



using namespace std;
void leerFecha(int&, int&, int&);
void visualizarFecha(CFecha& fecha, CFecha& fechaA);

int main()
{
    CFecha fechaA;
    CFecha fecha; // objeto de tipo CFecha
    int dd = 0, mm = 0, aaaa = 0; // Indico que dd, mm y año es cereo
    bool fechaValida = true;
    do
    {
        leerFecha(dd, mm, aaaa);
        fechaValida = fecha.asignarFecha(dd, mm, aaaa);
    }
    while (!fechaValida);
    visualizarFecha(fecha, fechaA);
}
void leerFecha(int& dia, int& mes, int& anyo)
{
    cout<<"Ingresa tu fecha de nacimiento:"<<endl;
    cout << "dia: "; cin >> dia;
    cout << "mes: "; cin >> mes;
    cout << "anyo: "; cin >> anyo;
}

void visualizarFecha(CFecha& fecha, CFecha& fechaA)
{
    int dd, mm, aaaa;
    fecha.obtenerFecha(dd, mm, aaaa);
    cout<<"Tu fecha de cumpleanyos es: ";
    cout << dd << "/" << mm << "/" << aaaa << "\n";
    fechaA.asignarFecha();
    fechaA.obtenerFecha(dd,mm,aaaa);
    cout<<"\nLa fecha del dia de hoy es: ";
    cout << dd << "/" << mm << "/" << aaaa << "\n";


}

    return 0;
}
//         ░░                    ░░        ██████████  ░░                    ░░
//                                     ████          ████
//                                   ████              ████
// ░░      ░░                    ░░██                      ██░░              ░░
//         ░░            ░░      ░░██  ██  ██      ██  ██  ██░░      ░░      ░░
//                               ██    ██              ██    ██
//                               ██    ██              ██    ██
// ░░░░░░░░░░░░░░  ░░░░░░░░░░░░██      ██    ██████    ██      ██░░░░░░░░░░░░░░░░░░  ░░░░░░
//         ░░            ░░    ██    ██        ██        ██    ██    ░░      ░░             .-.
//                             ██  ████    ██  ██  ██    ████  ██                          /'v'\
//                               ██  ██      ██  ██      ██  ██                           (/   \)
//                                     ██              ██                                 ='="="===<
//                                       ██████████████                              Paullie|_|
//                                     ██              ██
//                                     ██              ██
//                                     ██    ██  ██    ██
//                                   ████    ██  ██    ████         ~°I'm getting there, I'm being consistent°~
//       my 3 cats                   ████    ██  ██    ████                    and im enjoyng this
//     \    /\                     ██  ██    ██  ██    ██  ██
//      )  ( ')          ░░        ██  ██    ██  ██    ██  ██        ░░
//      (  /  )                      ████    ██████    ████
//       \(__)|                    ██    ████      ████    ██
//   ░░░░░░  ░░░░  ░░░░░░  ░░░░░░  ██████    ░░  ░░    ██████░░░░░░░░  ░░░░░░  ░░░░  ░░░░░░
//         ░░            ░░      ░░                                  ░░      ░░

//                                                                                  ░░
