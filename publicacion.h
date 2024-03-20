#ifndef publicacion_h
#define publicacion_h
#include <string>
#include "usuario.h"
using namespace std;

class Publicacion
{
    private:
    int id;

    public:
    string fecha;
    string contenido;
    Usuario* usuario;

    void mostrarPublicacion();

    Publicacion(Usuario* usuario, string fecha, string contenido);
};


#endif