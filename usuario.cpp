#include "usuario.h"
#include <iostream>
#include <string> 
using namespace std;

int Usuario::getId()
{
    return this->id;
}

void Usuario::mostrar()
{
    cout<<"User: "<<nombre<<endl;
    cout<<"ID: "<<getId()<<endl;
    cout<<"Age: "<<edad<<endl;
    cout<<"Nationality: "<<nacionalidad<<endl;
}

void Usuario::mostrarAmigos()
{
    cout<<"Friends:"<<endl;
    for(int i=0;i<amigos.size();i++){
        cout<<i+1<<". "<<amigos[i]->nombre<< endl;
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
    amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}

void Usuario::crearPublicacion()
{
    string fecha, contenido;
    cout << "Enter the date:";
    cin >> fecha;
    cout << "Enter content of post:";
    cin.ignore();
    getline(cin, contenido);
    
    Publicacion* nuevaPublicacion = new Publicacion(this, fecha, contenido);
    publicaciones.push_back(nuevaPublicacion);
}

Usuario* Usuario::getAmigo(int id)
{
    for (size_t i = 0; i < amigos.size(); ++i) {
        Usuario* amigo = amigos[i];
        if (amigo->getId() == id) {
            return amigo;
        }
    }
    cout << "You have no friends with that ID." << endl;
    return nullptr;
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