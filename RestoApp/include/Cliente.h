#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <cstring>
#include <cstdio>
#include "Fecha.h"

using namespace std;

class Cliente
{
private:
    int idcliente;
    char Apellido[50];
    char Nombre[50];
    Fecha FechadeIngreso;
    bool Estado;

public:
    Cliente();
    int getId();
    char *getApellido();
    char *getNombre();
    Fecha getFechadeIngreso();
    bool  getEstado();
    void  setId(int);
    void setApellido(char*);
    void setNombre(char*);
    void setFechadeIngreso(Fecha);
    void setEstado(bool);
    void cargar();
    void mostrar();
    bool EscribirenDisco(int);
    bool LeerenDisco(int);
};

#endif // CLIENTE_H
