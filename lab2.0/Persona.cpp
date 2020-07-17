#include "Persona.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

#include "Enfermero.h"
#include "Paciente.h"

using namespace std;

Persona::Persona()
{

}

Persona::~Persona()
{

}

void Persona::setNombre() {
    string nom;
    cout << "Ingresa tu Nombre: ";
    getline(cin, nom);
    nombre = nom;
    
}

void Persona::setApellido() {

    string ape;
    cout << "Ingresa tu Apellido: ";
    getline(cin, ape);
    apellido = ape;
    

}

template<class T>
bool Persona::verificarDni(vector<T>& vec, string auxdni) {
    unsigned int i;
    bool encontro = false;
    for (i = 0; i < vec.size(); i++) {

        if (auxdni == vec[i].getDni()) {
            encontro = true;
            break;
        }
    }
    if (encontro) {
        return true;
    }
    else {
        return false;
    }
}

void Persona::setDni(int x) {
    string auxdni;
    if (x == 1) {

        cout << "Ingrese su Documento de Identidad: ";
        getline(cin, auxdni);

        vector<Paciente>vec1;
        Paciente p1(vec1);

        while (auxdni.size() != 8 || verificarDni(vec1, auxdni) != false) {
            cout << "Ya existe un Paciente registrado con ese Dni o el DNI esta incompleto" << endl;
            cout << "Escriba de nuevo: " << endl;
            getline(cin, auxdni);

        }
        dni = auxdni;
    }
    else if (x == 2) {
        cout << "Ingrese su Documento de Identidad: ";
        getline(cin, auxdni);

        vector<Enfermero>vec2;
        Enfermero e1(vec2);

        while (auxdni.size() != 8 || verificarDni(vec2, auxdni) != false) {
            cout << "Ya existe una Enfermero registrado con ese Dni o el DNI esta incompleto" << endl;
            cout << "Escriba de nuevo: " << endl;
            getline(cin, auxdni);

        }
        dni = auxdni;
    }


}

