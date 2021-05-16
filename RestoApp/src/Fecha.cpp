#include "Fecha.h"

Fecha::Fecha(int day, int month, int year)
{
    dia=day;
    mes=month;
    anio=year;
}


void Fecha::Cargar()
{
    cout<< "Ingrese el dia: ";
    cin>>dia;
    cout<< "Ingrese el mes: ";
    cin>>mes;
    cout<< "Ingrese el anio: ";
    cin>>anio;
}

void Fecha::Mostrar()
{
    cout<<dia<<"/"<<mes<<"/"<<anio;
}

int Fecha::getdia()
{
    return dia;
}

int Fecha::getmes()
{
    return mes;
}

int Fecha::getanio()
{
    return anio;
}

void Fecha::setdia(int day)
{
    dia=day;
}

void Fecha::setmes(int month)
{
    mes=month;
}

void Fecha::setanio(int year)
{
    anio=year;
}
