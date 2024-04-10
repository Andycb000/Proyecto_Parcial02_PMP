#ifndef usuario_h
#define usuario_h
#include <string>
#include <vector>

using namespace std;

class Publicacion;
class RecPriv;

class Usuario
{
    private:
    int id;

    public:
    string nombre;
    int edad;
    string nacionalidad;
    vector<Usuario*>amigos;
    vector<Publicacion*>publicaciones;
    vector<RecPriv*>recomendacionesPrivadasR;
    

    int getId();
    void setId(int id);
    void mostrar();
    void mostrarAmigos();
    void mostrarPublicaciones();
    void agregarAmigo(Usuario* nuevoAmigo);
    void crearPublicacion();
    void crearRecomendacionPrivada(Usuario* receptor);
    Usuario* getAmigo(int id);

    Usuario(string nombre);
    Usuario(string nombre, int edad);
    Usuario(string nombre, int edad, string nacionalidad);

};


#endif