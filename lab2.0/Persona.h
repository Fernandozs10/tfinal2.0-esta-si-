#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

class Persona
{
protected:
    string nombre;
    string apellido;
    string dni;

public:

    Persona();
    ~Persona();

    void setNombre();

    void setApellido();

    void setDni(int x);

    ///metodos para mostrar

    string getNombre() {
        return nombre;
    }


    string getApellido() {
        return apellido;
    }


    string getDni() {
        return dni;
    }


    template<class T>
    bool verificarDni(vector<T>& vec, string uprn);




};
#endif // PERSONA_H
