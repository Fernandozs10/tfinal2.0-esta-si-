#include "Paciente.h"

#include <vector>
#include "Persona.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Paciente::Paciente()
{

}

Paciente::~Paciente()
{

}
Paciente::Paciente(vector<Paciente>& vec)
{
    ifstream archivo("Pacientes.txt");
    string  texto;
    Paciente p;
    //p = new Paciente;
    if (archivo.is_open()) {
        while (getline(archivo, texto, '#')) {

            p.nombre = texto;
            getline(archivo, texto, '#');
            p.apellido = texto;
            getline(archivo, texto, '#');
            p.dni = texto;
            getline(archivo, texto, '#');
            p.celular = texto;
            getline(archivo, texto, '#');
            p.direccion = texto;


            vec.push_back(p);

        }archivo.close();
    }
}


void Paciente::setCelular() {
    string cel;
    cout << "Ingrese su Celular: ";
    getline(cin, cel);
    celular = cel;
}
void Paciente::setDireccion() {
    string direc;
    cout << "Ingrese su Direccion: ";
    getline(cin, direc);
    direccion = direc;

}


void Paciente::agregarPaciente(vector<Paciente>& vec)
{
    Paciente p;
    //p = new Paciente;
    p.setNombre();
    p.setApellido();
    p.setDni(1);
    p.setCelular();
    p.setDireccion();

    vec.push_back(p);
}
void Paciente::guardarDatos(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;
    ofstream archivo("Pacientes.txt");
    if (archivo.is_open()) {

        for (it = vec.begin(); it != vec.end(); it++) {
            archivo << it->getNombre() << "#" << it->getApellido() << "#" << it->getDni() << "#" << it->getCelular() << "#" << it->getDireccion() << "#";
        }
    }archivo.close();

}

void Paciente::mostrarPacientes(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;

    cout << "Lista de Pacientes" << endl;

    for (it = vec.begin(); it != vec.end(); it++) {
        cout << endl;
        cout << "Nombres-----------:" << it->getNombre() << endl;
        cout << "Apellidos---------:" << it->getApellido() << endl;
        cout << "Dni---------------:" << it->getDni() << endl;
        cout << "Celular-----------:" << it->getCelular() << endl;
        cout << "Direccion---------:" << it->getDireccion() << endl;
        cout << "--------------------------------------- " << endl;
    }


}

void Paciente::editarPaciente(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;
    int x;
    string dni2;
    cin.ignore();
    cout << "Ingrese el Nombre o Dni del paciente que desea buscar:";
    getline(cin, dni2);

    cout << "Datos del paciente------------:"<< endl;

    cout << endl;

    cout << "------------------------------\n";
    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni()) {


            cout << "Nombres-----------:" << it->getNombre() << endl;
            cout << "Apellidos---------:" << it->getApellido() << endl;
            cout << "Dni---------------:" << it->getDni() << endl;
            cout << "Celular-----------:" << it->getCelular() << endl;
            cout << "Direccion---------:" << it->getDireccion() << endl;

            cout << "------------------------------\n";

            do {
                cout << endl;
                cout << "1.Nombres" << endl;
                cout << "2.Apellidos" << endl;
                cout << "3.Dni" << endl;
                cout << "4.Celular" << endl;
                cout << "5.Direccion" << endl;
                cout << "6.Salir" << endl;

                cout << "Ingrese una opcion: ";
                cin >> x;
                cout << endl;
                cin.ignore();
                switch (x) {

                case 1:
                    it->setNombre();
                    break;
                case 2:
                    it->setApellido();
                    break;
                case 3:
                    it->setDni(1);
                    break;
                case 4:
                    it->setCelular();
                    break;
                case 5:
                    it->setDireccion();
                    break;

                default:cout << "\n"; 

                    system("cls");

                    break;

                }

            } while (x != 6);
        }
    }
}

void Paciente::borrarPaciente(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;
    string dni2;
    /*unsigned int i;*/
    cin.ignore();
    cout << "Ingrese el Dni: ";
    getline(cin, dni2);
    bool encontrado = false;
    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni()) {
            cout << "Se encontro el dni" << endl;
            encontrado = true;

        }

    }
    for (int i = 0; i < vec.size(); i++) {
        if (dni2 == vec[i].getDni()) {
            vec.erase(vec.begin());
            cout << "Se ha eliminado al paciente" << endl;
        }
    }
    if (!encontrado) {
        cout << "No se encontro el DNI" << endl;
    }


}
void Paciente::buscarPaciente(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;
    string dni2;
    cin.ignore();
    cout << "Ingrese el Nombre o Dni del paciente que desea buscar:";
    getline(cin, dni2);

    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni() || dni2 == it->getNombre()) {
            cout << "Nombres-----------:" << it->getNombre() << endl;
            cout << "Apellidos---------:" << it->getApellido() << endl;
            cout << "Dni---------------:" << it->getDni() << endl;
            cout << "Celular-----------:" << it->getCelular() << endl;
            cout << "Direccion---------:" << it->getDireccion() << endl;


        }cout << endl;

    }
}
/*bool comparacion(Paciente& a, Paciente& b) {
    return a.getNombre() < b.getNombre();
}*/
void  Paciente::ordenarPacientes(vector<Paciente>& vec)
{
    vector<Paciente>::iterator it;
    int x;
    do {
        cout << endl;
        cout << "1.Ordenar los Nombres de forma ascendente(A - Z)" << endl;
        cout << "2.Ordenar los Nombres de forma descentente(Z - A)" << endl;
        cout << "3.Ordenar por Apellidos" << endl;
        cout << "4.Ordenar por Dni" << endl;
        cout << "5.Ordenar por Celular" << endl;
        cout << "6.Salir" << endl;
        cout << "ingresa una opcion:";
        cin >> x;
        switch (x) {

        case 1:
            sort(vec.begin(), vec.end(), [](Paciente a, Paciente b) {return a.getNombre() < b.getNombre(); });

            break;
        case 2:
            sort(vec.begin(), vec.end(), [](Paciente a, Paciente b) {return a.getNombre() > b.getNombre(); });


            break;
        case 3:
            sort(vec.begin(), vec.end(), [](Paciente a, Paciente b) {return a.getApellido() < b.getApellido(); });

            break;
        case 4:
            sort(vec.begin(), vec.end(), [](Paciente a, Paciente b) {return a.getDni() < b.getDni(); });

            break;
        case 5:
            sort(vec.begin(), vec.end(), [](Paciente a, Paciente b) {return a.getCelular() < b.getCelular(); });

            break;
        default:cout << "\n" << endl; break;
        }


    } while (x != 6);
}