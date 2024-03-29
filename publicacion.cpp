#include "publicacion.h"

void Publicacion::mostrarPublicacion()
{

}

Publicacion::Publicacion(Usuario* usuario, string fecha, string contenido)
{
    this->usuario=usuario;
    this->fecha=fecha;
    this->contenido=contenido;
}