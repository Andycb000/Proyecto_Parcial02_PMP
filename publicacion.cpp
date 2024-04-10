#include "publicacion.h"
#include "usuario.h"
#include <iostream>
#include <string> 
using namespace std;

void Publicacion::mostrarPublicacion()
{
    cout << "Date: " << this->fecha << endl;
    cout << "Type: " << this->tipo << endl;
    cout << "Recommendation: " << this->contenido << endl;
    cout << "Comments: "<< this->comentario << endl;
    cout << "By: " << this->usuario->nombre << endl; 
}


Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido)
{
    this->usuario= usuario;
    this->fecha=fecha;
    this->contenido=contenido;
}

Publicacion::Publicacion(Usuario* usuario, string fecha, string tipo, string contenido)
{
    this->usuario= usuario;
    this->fecha=fecha;
    this->contenido=contenido;
    this->tipo=tipo;
}

Publicacion::Publicacion(Usuario* usuario, string fecha, string tipo, string contenido, string comentario)
{
    this->usuario=usuario;
    this->fecha=fecha;
    this->contenido=contenido;
    this->tipo=tipo;
    this->comentario=comentario;
}