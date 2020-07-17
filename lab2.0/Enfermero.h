#ifndef ENFERMERO_H
#define ENFERMERO_H


#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Persona.h"
using namespace std;

class Enfermero :public Persona
{
private:
    string especialidad;
    string cantidad;

public:
    Enfermero();
    ~Enfermero();

    Enfermero(vector<Enfermero>& vec);



    void agregarEnfermero(vector<Enfermero>& vec);


    void mostrarEnfermeros(vector<Enfermero>& vec);


    void guardarDatos(vector<Enfermero>& vec);


    void editarEnfermero(vector<Enfermero>& vec);


    void borrarEnfermero(vector<Enfermero>& vec);


    void buscarEnfermero(vector<Enfermero>& vec);


    void ordenarEnfermeros(vector<Enfermero>& vec);


    void setCantidad();

    void setEspecialidad();

    string getCantidad() {
        return cantidad;
    }

    string getEspecialidad() {
        return especialidad;
    }


};



#endif // ENFERMERO_H
