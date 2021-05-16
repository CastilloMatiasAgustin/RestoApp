#ifndef ALIMENTOS_H
#define ALIMENTOS_H
#include <iostream>
#include <cstring>
#include <cstdio>
#include "Fecha.h"
using namespace std;


class Alimentos
{
private:
    char TipoAlimento[50];
    char NombreAlimento[50];
    int CantAlimento;
    int GastoEntrada;
    Fecha fechadevencimiento;
    bool Estado;
public:
    Alimentos();
    char *getTipoAlimento();
    char *getNombreAli();
    Fecha getFechaVencimiento();
    Fecha getFechaVencimientoanio();
    Fecha getFechaVencimientomes();
    Fecha getFechaVencimientodia();
    int getcantenstock();
    int getGastosEntrada();
    bool getEstado();
    void setNombreAli(char*);
    void setFechaVencimiento(Fecha);
    void setFechaVencimientoanio(int);
    void setFechaVencimientomes(int);
    void setFechaVencimientodia(int);
    void setcantenstock(int);
    void setgastosentrada(int);
    void setEstado(bool);
    void cargar();
    void mostrar();
    bool EscribirenDisco(int);
    bool LeerenDisco(int);
};

#endif // ALIMENTOS_H
