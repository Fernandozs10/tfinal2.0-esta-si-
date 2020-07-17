#include <iostream>
#include "Persona.h"
#include "Enfermero.h"
#include "Paciente.h"
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>
#include <iomanip>

using namespace std;
string k;
void preinicio() {
    cout << endl;
    cout << "                ************************************************************************************" << endl;
    cout << "                                 " << "Bienvenido a la base de datos del hospital Esschalud" << endl;
    cout << "               ************************************************************************************" << endl;
    Sleep(3000);
    system("cls");
}

void menu()
{
    int x;
    int y1;
    int y2;



    do {
        cout <<setw(68)<< "HOSPITAL CENTRAL DE ESSCHALUD" << endl;
        cout <<"\n" << "\n" << "\n" << "\n" << "\n" << "\n"<< endl;
        cout <<setw(60)<< "MENU PRINCIPAL";
        cout << "\n" << endl;
        cout <<setw(60)<<"1. Ver Pacientes" << endl;
        cout<<endl;
        cout <<setw(61)<<"2. Ver Enfermeros" << endl;
        cout << endl;
        cout <<setw(54)<<"3. Salir \n";
        cout << endl;
        cout << "\n" << "\n"<< "\n" << "\n";
        cout << setw(60) << "Ingresa una opcion: ";
        cin >> x;
        cout << endl;
        system("cls");

        vector<Paciente>vec1;
        Paciente obj2(vec1);

        vector<Enfermero>vec2;
        Enfermero obj(vec2);










        switch (x) {
        case 1:


            do {


                cout << "1.Agregar Pacientes" << endl;
                cout << "2.Mostrar Pacientes" << endl;
                cout << "3.Buscar Pacientes" << endl;
                cout << "4.Editar Pacientes" << endl;
                cout << "5.Borrar Paciente" << endl;
                cout << "6.Ordenar Pacientes" << endl;
                cout << "7.Guardar datos" << endl;
                cout << "8.Salir" << endl;
                cout << "Ingresa una opcion: ";
                cin >> y1;

                switch (y1)
                {
                case 1:
                    cin.ignore();
                    system("cls");
                    obj2.agregarPaciente(vec1);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 2:
                    system("cls");
                    obj2.mostrarPacientes(vec1);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 3:
                    cout << endl;
                    system("cls");
                    obj2.buscarPaciente(vec1);
                    cout << endl;
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 4:
                    system("cls");
                    obj2.editarPaciente(vec1);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 5:
                    system("cls");
                    obj2.borrarPaciente(vec1);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 6:
                    system("cls");

                    obj2.ordenarPacientes(vec1);

                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);

                    break;

                case 7:obj2.guardarDatos(vec1);

                    system("cls");

                    cout << "Datos almacenados !!" << endl;

                    Sleep(2000);

                    system("cls");

                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);

                    break;
                case 8:

                    system("cls");
                    cout << "Hasta la proximaaaaaa !!!!";
                    Sleep(2000);

                    exit(1);

                    break;
                }
            } while (y1 != 8);

            break;

        case 2:
            do
            {
                cout << "1.Agregar Enfermero" << endl;
                cout << "2.Mostrar Enfermero" << endl;
                cout << "3.Buscar Enfermero" << endl;
                cout << "4.Editar Enfermero" << endl;
                cout << "5.Borrar Enfermero" << endl;
                cout << "6.Ordenar Enfermero" << endl;
                cout << "7.Guardar datos" << endl;
                cout << "8.Salir" << endl;
                cout << endl;
                cout << "Ingresa una opcion: ";
                cin >> y2;
                cout << endl;
                switch (y2) {
                case 1:cin.ignore();
                    obj.agregarEnfermero(vec2);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 2:
                    obj.mostrarEnfermeros(vec2);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 3:obj.buscarEnfermero(vec2);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 4:
                    obj.editarEnfermero(vec2);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;

                case 5:obj.borrarEnfermero(vec2);
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;
                case 6:
                    system("cls");

                    obj.ordenarEnfermeros(vec2); break;
                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else 
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                case 7:
                    obj.guardarDatos(vec2); 

                    system("cls");

                    cout << "Datos almacenados !!" << endl;

                    Sleep(2000);

                    system("cls");

                    cout << "Desea volver al inicio? si o no ?" << endl;
                    cin >> k;
                    if (k == "si" || k == "Si" || k == "SI") {
                        system("cls");
                    }
                    else
                        system("cls");
                        cout << "Hasta la proximaaaa!!!!!!";
                        exit(1);
                    break;

                case 8:

                    system("cls");
                    cout << "Hasta la proximaaaaaa !!!!";
                    Sleep(2000);
                    exit(1);
                    break;

                
                }



            } while (y2 != 8);


            default:
                cout << "Hasta la proximaaaaaa!!!!";
                break;
        }





    } while (x != 3);

    system("cls");
}


int main() {

    system("color 0E");
    preinicio();
    menu();
    return 0;
}
