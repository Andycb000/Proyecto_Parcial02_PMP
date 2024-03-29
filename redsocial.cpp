#include "redsocial.h"

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