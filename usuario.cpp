#include "usuario.h"
#include <iostream>
using namespace std;

int Usuario::getId()
{
    return this->id;
}

void Usuario::mostrar()
{
    cout<<"User:"<<nombre<<endl;
    cout<<"ID:"<<getId()<<endl;
    cout<<"Age:"<<edad<<endl;
    cout<<"Nationality:"<<nacionalidad<<endl;
}

void Usuario::mostrarAmigos()
{
    cout<<"Friends:"<<endl;
    for(int i=0;i<amigos.size();i++){
        cout<<i+1<<". "<<amigos[i]<<endl;
    }
}

void Usuario::mostrarPublicaciones()
{
    cout<<"Posts:"<<endl;
    for(int i=0;i<publicaciones.size();i++){
        cout<<publicaciones[i]<<endl;
    }
}

void Usuario::agregarAmigo(Usuario*nuevoAmigo)
{

}

void Usuario::crearPublicacion()
{

}

Usuario* Usuario::getAmigo(int id)
{

}

Usuario::Usuario(string nombre)
{
    this->nombre=nombre;
}

Usuario::Usuario(string nombre, int edad)
{
    this->nombre=nombre;
    this->edad=edad;
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
    this->nombre=nombre;
    this->edad=edad;
    this->nacionalidad=nacionalidad;
}