#ifndef publicacion_h
#define publicacion_h
#include <string>
#include <iostream> 
using namespace std;

class Usuario;

class Publicacion
{
    private:
    int id;

    public:
    string fecha;
    string tipo;
    string contenido;
    string comentario;
    Usuario* usuario;

    void mostrarPublicacion();

    Publicacion(Usuario* usuario, string fecha, string contenido);
    Publicacion(Usuario* usuario, string fecha, string tipo, string contenido);
    Publicacion(Usuario* usuario, string fecha, string tipo, string contenido, string comentario);
};


#endif
