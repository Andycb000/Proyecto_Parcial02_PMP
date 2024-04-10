#include "redsocial.h"
#include "usuario.h"
#include <iostream>
using namespace std;

void RedSocial::agregarUsuario(Usuario* nuevoUsuario, int id) 
{
    this->usuarios.push_back(nuevoUsuario);
    numeroDeUsuarios++;
    nuevoUsuario->setId(id);
}

void RedSocial::mostrarUsuarios()
{
    cout << "Users: " << endl;
    for(int i=0;i<usuarios.size();i++)
    {
        usuarios[i]->mostrar();
        cout << endl;
        cout << endl;
    }
}

void RedSocial::mostrarPublicaciones()
{
    cout << "All posts: " << endl;
    for (size_t i = 0; i < publicaciones.size(); i++) 
    {
        publicaciones[i]->mostrarPublicacion();
        cout << endl;
        cout << endl;
    }
}

void RedSocial::agregarPublicacion(Publicacion* nuevaPublicacion) 
{
    publicaciones.push_back(nuevaPublicacion);
    numerosDePublicaciones++;
}

Usuario* RedSocial::getUsuario(int id) 
{
    for (int i = 0; i < usuarios.size(); ++i)
    {
        if (usuarios[i]->getId() == id) 
        {
            return usuarios[i];
        }
    }

    return nullptr;
}

RedSocial::RedSocial(string nombre)
{
    this->nombre=nombre;
}

RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios) //creo que está bien
{
    this->nombre=nombre;
    this->usuarios = usuarios;
}

RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones) //creo que está bien
{
    this->nombre=nombre;
    this->usuarios=usuarios;
    this->publicaciones=publicaciones;
}