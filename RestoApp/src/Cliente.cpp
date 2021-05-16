#include "Cliente.h"

Cliente::Cliente()
{
    //ctor
}
int Cliente::getId()
{
    return idcliente;
}
char *Cliente::getApellido()
{
    return Apellido;
}
char *Cliente::getNombre()
{
    return Nombre;
}
Fecha Cliente::getFechadeIngreso()
{
    return FechadeIngreso;
}
bool  Cliente::getEstado()
{
    return Estado;
}
void  Cliente::setId(int id)
{
    idcliente=id;
}
void Cliente::setApellido(char *ape)
{
    strcpy(Apellido,ape);
}
void Cliente::setNombre(char*nom)
{
    strcpy(Nombre,nom);
}
void Cliente::setFechadeIngreso(Fecha f)
{
    FechadeIngreso=f;
}
void Cliente::setEstado(bool est)
{
    Estado=est;
}
void Cliente::cargar()
{
        cout<<"Ingrese el ID del cliente: "<< endl;
        cin>>idcliente;
        cout<<"Ingrese el Apellido del cliente: "<<endl;
        cin>>Apellido;
        cout<<"Ingrese el Nombre del cliente: "<<endl;
        cin>>Nombre;
        cout<< "Ingrese la Fecha de ingreso del cliente: ";
        FechadeIngreso.Cargar();
        Estado=true;
}
void Cliente::mostrar()
{
    if(Estado!=false)
    {
        cout<<"ID del cliente: "<< idcliente <<endl;
        cout<<"Apellido del cliente: "<< Apellido <<endl;
        cout<<"Nombre del cliente: "<<Nombre<<endl;
        cout<< "Fecha de ingreso del cliente: ";
        FechadeIngreso.Mostrar();
    }
}
bool Cliente::EscribirenDisco(int pos)
{
    bool escribio;
    FILE *p;
    p=fopen("clientes.dat","ab");
    if (p==NULL)return false;
    fseek(p,sizeof(Cliente)*pos,SEEK_SET);
    escribio=fwrite(this,sizeof(Cliente),1,p);
    fclose(p);
    return escribio;
}
bool Cliente::LeerenDisco(int pos)
{
    bool leyo;
    FILE *p;
    p=fopen("alimentos.dat","rb");
    if (p==NULL)return false;
    fseek(p,sizeof(Cliente)*pos,SEEK_SET);
    leyo=fread(this,sizeof(Cliente),1,p);
    fclose(p);
    return leyo;
}
