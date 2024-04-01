#include "redsocial.h"
#include <iostream>
using namespace std;

void RedSocial::agregarUsuario()
{
    Usuario* nuevoUsuario = new Usuario("New user");
    usuarios.push_back(nuevoUsuario);
    numeroDeUsuarios++;
}

void RedSocial::mostrarUsuarios()
{
    cout<<"Users: "<<endl;
    for(int i=0;i<usuarios.size();i++){
        cout<<i+1<<". "<<usuarios[i]->nombre<< endl;
    }
}

void RedSocial::mostrarPublicaciones()
{
    cout << "All posts: " << endl;
    for (size_t i = 0; i < publicaciones.size(); ++i) {
        publicaciones[i]->mostrarPublicacion();
        cout << endl;
    }
}

void RedSocial::agregarPublicacion(Publicacion* nuevaPublicacion) {
        publicaciones.push_back(nuevaPublicacion);
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