#ifndef PACIENTE_H
#define PACIENTE_H

#pragma once

#include <vector>
#include "Persona.h"
#include <algorithm>
#include <string>
#include <iostream>




class Paciente :public Persona
{

private:
    string celular;

    string direccion;

public:
    Paciente();
    ~Paciente();
    Paciente(vector<Paciente>& vec);


    void setCelular();
    void setDireccion();

    string getCelular() {
        return celular;
    }
    string getDireccion() {
        return direccion;
    }


    void agregarPaciente(vector<Paciente>& vec);
    void mostrarPacientes(vector<Paciente>& vec);
    void guardarDatos(vector<Paciente>& vec);
    void editarPaciente(vector<Paciente>& vec);
    void borrarPaciente(vector<Paciente>& vec);
    void buscarPaciente(vector<Paciente>& vec);
    void ordenarPacientes(vector<Paciente>& vec);




};
#endif // PACIENTE_H