#include "publicacion.h"
#include <iostream>
#include <string> 
using namespace std;

void Publicacion::mostrarPublicacion()
{
    cout <<"Fecha de la publicacion: "<<fecha<< endl;
    cout <<"Contenido: "<< contenido<< endl;
    cout <<"Usuario que creó la publicacion: "<< usuario->nombre << endl;
}


Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido)
{
    this->usuario=usuario;
    this->fecha=fecha;
    this->contenido=contenido;
}