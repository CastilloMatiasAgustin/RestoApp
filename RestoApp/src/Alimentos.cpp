#include "Alimentos.h"


Alimentos::Alimentos()
{
    //ctor
}

char *Alimentos::getTipoAlimento()
{
    return TipoAlimento;
}
char *Alimentos::getNombreAli()
{
    return NombreAlimento;
}
Fecha Alimentos::getFechaVencimiento()
{
    return fechadevencimiento;
}
Fecha Alimentos::getFechaVencimientoanio()
{
    return fechadevencimiento.getanio();
}
Fecha Alimentos::getFechaVencimientomes()
{
    return fechadevencimiento.getmes();
}
Fecha Alimentos::getFechaVencimientodia()
{
    return fechadevencimiento.getdia();
}
int Alimentos::getcantenstock()
{
    return CantAlimento;
}
int Alimentos::getGastosEntrada()
{
    return GastoEntrada;
}
bool Alimentos::getEstado()
{
    return Estado;
}
void Alimentos::setNombreAli(char *nom)
{
    strcpy(NombreAlimento,nom);
}
void Alimentos::setFechaVencimiento(Fecha f)
{
    fechadevencimiento=f;
}
void Alimentos::setFechaVencimientoanio(int a)
{
    fechadevencimiento.setanio(a);
}
void Alimentos::setFechaVencimientomes(int m)
{
    fechadevencimiento.setmes(m);
}
void Alimentos::setFechaVencimientodia(int d)
{
    fechadevencimiento.setdia(d);
}
void Alimentos::setcantenstock(int cant)
{
    CantAlimento=cant;
}
void Alimentos::setgastosentrada(int gasto)
{
    GastoEntrada=gasto;
}
void Alimentos::setEstado(bool valor)
{
    Estado=valor;
}
void Alimentos::cargar()
{
    cout<< "Tipo de alimento: "<<endl;
    cin.ignore();
    cin.getline(TipoAlimento,50);
    cout<< "Nombre del alimento: "<<endl;
    cin.getline(NombreAlimento,50);
    cout<< "Cantidad en Stock: "<< endl;
    cin>>CantAlimento;
    cout<< "Gastos de entrada del Alimento: "<<endl;
    cin>>GastoEntrada;
    Estado=true;
}
void Alimentos::mostrar()
{
    if(Estado!=false)
    {
        cout<< "Tipo de alimento: "<< TipoAlimento<<endl;
        cout<< "Nombre del alimento: "<<NombreAlimento<<endl;
        cout<< "Cantidad en Stock: "<< CantAlimento<<endl;
        cout<< "Gastos del Alimento: "<< GastoEntrada<<endl;
    }
}
bool Alimentos::EscribirenDisco(int pos)
{
    bool escribio;
    FILE *p;
    p=fopen("alimentos.dat","ab");
    if (p==NULL)return false;
    fseek(p,sizeof(Alimentos)*pos,SEEK_SET);
    escribio=fwrite(this,sizeof(Alimentos),1,p);
    fclose(p);
    return escribio;
}
bool Alimentos::LeerenDisco(int pos)
{
    bool leyo;
    FILE *p;
    p=fopen("alimentos.dat","rb");
    if (p==NULL)return false;
    fseek(p,sizeof(Alimentos)*pos,SEEK_SET);
    leyo=fread(this,sizeof(Alimentos),1,p);
    fclose(p);
    return leyo;
}
