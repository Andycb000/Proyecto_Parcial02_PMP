#ifndef redsocial_h
#define redsocial_h
#include <vector>
#include "usuario.h"
#include "publicacion.h"
using namespace std;

class RedSocial
{
    private:
    vector<Usuario*>usuarios; 
    vector<Publicacion*>publicaciones; 

    public:
    string nombre;
    int numeroDeUsuarios;
    int numerosDePublicaciones;

    void agregarUsuario(Usuario* nuevoUsuario, int id);
    void mostrarUsuarios();
    void mostrarPublicaciones();
    void agregarPublicacion(Publicacion* nuevaPublicacion);
    Usuario* getUsuario(int id);

    RedSocial(string nombre);
    RedSocial(string nombre,vector<Usuario*>usuarios);
    RedSocial(string nombre,vector<Usuario*>usuarios,vector<Publicacion*>publicaciones);
};




#endif