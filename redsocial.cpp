#include "redsocial.h"
#include <iostream>
using namespace std;

void RedSocial::agregarUsuario()
{
    
}

void RedSocial::mostrarUsuarios()
{

}

void RedSocial::mostrarPublicaciones()
{

}

Usuario* RedSocial::getUsuario(int id)
{
    for (size_t i = 0; i < usuarios.size(); ++i) {
    Usuario* usuario = usuarios[i];
    if (usuario->getId() == id) {
        return usuario;
    }
    }   
    cout << "There is no user with that ID." << endl;
    return nullptr;
}

RedSocial::RedSocial(string nombre)
{
    this->nombre=nombre;
}

RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios)
{
    this->nombre=nombre;
    this->usuarios=usuarios;
}

RedSocial::RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones)
{
    this->nombre=nombre;
    this->usuarios=usuarios;
    this->publicaciones=publicaciones;
}