#include "Enfermero.h"
#include "Persona.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


#include <fstream>

using namespace std;


Enfermero::Enfermero()
{

}

Enfermero::~Enfermero()
{

}

Enfermero::Enfermero(vector<Enfermero>& vec)
{
    ifstream archivo("Enfermeros.txt");
    if (archivo.is_open()) {
        string texto;
        Enfermero s;
        //s = new Enfermero;
        while (getline(archivo, texto, '#')) {
            s.nombre = texto;
            getline(archivo, texto, '#');
            s.apellido = texto;
            getline(archivo, texto, '#');
            s.dni = texto;
            getline(archivo, texto, '#');
            s.especialidad = texto;
            getline(archivo, texto, '#');
            s.cantidad = texto;



            vec.push_back(s);
        }
        archivo.close();
    }



}


void Enfermero::setCantidad() {
    string can;
    cout << "Ingrese la cantidad de horas: ";
    getline(cin, can);
    cantidad = can;

}

void Enfermero::agregarEnfermero(vector<Enfermero>& vec)
{

    Enfermero e1;
    //e1 = new Enfermero;
    e1.setNombre();
    e1.setApellido();
    e1.setDni(2);
    e1.setEspecialidad();
    e1.setCantidad();
    vec.push_back(e1);
}

void Enfermero::mostrarEnfermeros(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;

    system("cls");

    cout << "Lista de Enfermeros: " << endl;
    cout << "--------------------------------\n";
    for (it = vec.begin(); it != vec.end(); it++) {

        cout << "Nombres-----------: " << it->getNombre() << endl;
        cout << "Apellidos---------: " << it->getApellido() << endl;
        cout << "Dni---------------: " << it->getDni() << endl;
        cout << "Especialidad------: " << it->getEspecialidad() << endl;
        cout << "Horas de trabajo--: " << it->getCantidad() << endl;
        cout << "--------------------------------\n";
    }

}
void Enfermero::guardarDatos(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;
    ofstream archivo("Enfermeros.txt");
    if (archivo.is_open()) {
        for (it = vec.begin(); it != vec.end(); it++) {
            archivo << it->getNombre() << "#" << it->getApellido() << "#" << it->getDni() << "#" << it->getEspecialidad() << "#" << it->getCantidad() << "#";
        }
    }archivo.close();

}

void Enfermero::editarEnfermero(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;
    string dni2;
    cin.ignore();
    cout << "Ingrese el Dni: ";
    getline(cin, dni2);
    //     int i;
    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni()) {
            cout << "Nombres-----------:" << it->getNombre() << endl;
            cout << "Apellidos---------:" << it->getApellido() << endl;
            cout << "Dni---------------:" << it->getDni() << endl;
            cout << "Especialidad------:" << it->getEspecialidad() << endl;
            cout << "Horas de trabajo--:" << it->getCantidad() << endl;
            int x;
            do {
                cout << "1.Nombre" << endl;
                cout << "2.Apellido" << endl;
                cout << "3.Dni" << endl;
                cout << "4.Especialidad" << endl;
                cout << "5.Horas de trabajo" << endl;
                cout << "6.Salir" << endl;
                cout << "Ingrese una opcion: ";

                cin >> x;
                switch (x) {

                case 1:
                    cin.ignore();
                    it->setNombre(); break;
                case 2:
                    cin.ignore();
                    it->setApellido(); break;
                case 3:
                    cin.ignore();
                    it->setDni(2); break;
                case 4:
                    cin.ignore();
                    it->setEspecialidad(); break;

                case 5:
                    cin.ignore();
                    it->setCantidad();
                    break;
                default:cout << endl;
                }

            } while (x != 6);

        }
    }
}


void Enfermero::borrarEnfermero(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;
    string dni2;
    unsigned int i;
    cin.ignore();
    cout << "Ingrese el Dni:";
    getline(cin, dni2);

    bool encontrado = false;
    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni()) {

            cout << "Nombres-----------:" << it->getNombre() << endl;
            cout << "Apellidos---------:" << it->getApellido() << endl;
            cout << "Dni---------------:" << it->getDni() << endl;
            cout << "Especialidad------:" << it->getEspecialidad() << endl;
            cout << "Horas de trabajo--:" << it->getCantidad() << endl;
            cout << endl;
            encontrado = true;
        }
        for (i = 0; i < vec.size(); i++) {
            if (dni2 == vec[i].getDni()) {
                vec.erase(vec.begin());
                cout << "Se ha eliminado al Enfermero" << endl;
            }
        }
        if (!encontrado) {
            cout << "No se encontro el DNI" << endl;
        }
    }

}

void Enfermero::buscarEnfermero(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;
    string dni2;
    //     unsigned int i;
    cin.ignore();

    system("cls");

    cout << "Ingrese el Nombre o Dni del Enfermero que desea buscar:";

    getline(cin, dni2);


    for (it = vec.begin(); it != vec.end(); it++) {
        if (dni2 == it->getDni() || dni2 == it->getNombre()) {
            cout << "Se encontro el Enfermero" << endl;

            cout << endl;
            cout << "Nombres-----------:" << it->getNombre() << endl;
            cout << "Apellidos---------:" << it->getApellido() << endl;
            cout << "Dni---------------:" << it->getDni() << endl;
            cout << "Especialidad------:" << it->getEspecialidad() << endl;
            cout << "Horas de trabajo--:" << it->getCantidad() << endl;

        }
        else {
            cout << "\n\n";
        }
    }
}


void Enfermero::ordenarEnfermeros(vector<Enfermero>& vec)
{
    vector<Enfermero>::iterator it;
    int x;

    cin.ignore();
    do {
        cout << "1.Ordenar los nombres de forma ascendente(A-Z)" << endl;
        cout << "2.Ordenar los nombres de forma descentente(Z-A)" << endl;
        cout << "3.Ordenar por apellidos" << endl;
        cout << "4.Ordenar por Dni" << endl;
        cout << "5.Salir" << endl;
        cout << endl;
        cout << "Ingrese una opcion:";
        cin >> x;
        cout << endl;
        switch (x) {

        case 1:

            sort(vec.begin(), vec.end(), [](Enfermero a, Enfermero b) {return a.getNombre() < b.getNombre(); });


            break;
        case 2:
            sort(vec.begin(), vec.end(), [](Enfermero a, Enfermero b) {return a.getNombre() > b.getNombre(); });

            break;

        case 3:
            sort(vec.begin(), vec.end(), [](Enfermero a, Enfermero b) {return a.getApellido() > b.getApellido(); });

            break;
        case 4:
            sort(vec.begin(), vec.end(), [](Enfermero a, Enfermero b) {return a.getDni() > b.getDni(); });

            break;
        default:cout << "\n" << endl; 
            system("cls");

            break;
        }

    } while (x != 5);
}



void Enfermero::setEspecialidad() {
    string espe;
    cout << "Ingrese su Especialidad: ";
    getline(cin, espe);
    especialidad = espe;
}