#ifndef recpriv_h
#define recpriv_h
#include <string>

class Publicacion;

class RecPriv: public Publicacion
{
    public:
    Usuario* receptor;

    RecPriv(Usuario* usuario, string fecha, string tipo, string contenido, string comentario):Publicacion(usuario, fecha, tipo, contenido, comentario){}
};


#endif