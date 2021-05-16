#ifndef FECHA_H
#define FECHA_H
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;


class Fecha
{
private:
    int dia;
    int mes;
    int anio;
public:
    Fecha(int day=0, int month=0, int year=0);
    void Cargar();
    void Mostrar();
    int getdia();
    int getmes();
    int getanio();
    void setdia(int);
    void setmes(int);
    void setanio(int);
};
#endif // FECHA_H
