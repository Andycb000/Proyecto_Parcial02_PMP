#include "usuario.h"
#include "publicacion.h"
#include "recpriv.h"
#include <iostream>
#include <string> 
using namespace std;

int Usuario::getId()
{
    return this->id;
}

void Usuario::setId(int id)
{
    this->id=id;
}

void Usuario::mostrar() //revisar
{
    cout << "User: " << this->nombre << endl;
    cout << "ID: " << getId() << endl;
    cout << "Age: " << this->edad << endl;
    cout << "Nationality: " << this->nacionalidad << endl;
}

void Usuario::mostrarAmigos()
{
    cout<< "Friend list of " << this->nombre << ": " << endl;
    for(int i=0;i < amigos.size(); i++)
    {
        cout << i+1 << ". " << amigos[i]->nombre << endl; 
    }
}

void Usuario::mostrarPublicaciones()
{
    cout<< "Posts of " << this->nombre << ": " << endl;
    for(int i=0; i<publicaciones.size(); i++)
    {
        publicaciones[i]->mostrarPublicacion();
        cout << endl;
        cout << endl;
    }
}

void Usuario::agregarAmigo(Usuario* nuevoAmigo)
{
    amigos.push_back(nuevoAmigo);
    nuevoAmigo->amigos.push_back(this);
}

void Usuario::crearPublicacion(RedSocial& redSocial)
{
    string fecha, contenido, tipo, comentario;
    cout << "Enter the date: ";
    cin >> fecha;
    cout << "Enter the recommendation type: ";
    cin >> tipo;
    cout << "What is your recommendation?" << endl;
    cin >> contenido;
    cout << "Write your comments: ";
    cin.ignore();
    getline(cin, comentario);
    
    Publicacion* nuevaPublicacion = new Publicacion(this, fecha, tipo, contenido, comentario);
    publicaciones.push_back(nuevaPublicacion);
}

void Usuario::crearRecomendacionPrivada(Usuario* receptor)
{
    string fecha, contenido, tipo, comentario;
    cout << "Enter the date: ";
    cin >> fecha;
    cout << "Enter the recommendation type: ";
    cin >> tipo;
    cout << "What is your recommendation?" << endl;
    cin >> contenido;
    cout << "Write your comments: ";
    cin.ignore();
    getline(cin, comentario);

    RecPriv* nuevaRecPriv = new RecPriv(this, fecha, tipo, contenido, comentario);
    recomendacionesPrivadasR.push_back(nuevaRecPriv);
}

Usuario* Usuario::getAmigo(int id)
{
    bool amigoEncontrado= false;
    for (int i = 0; i < amigos.size(); ++i) //size_t
    {
        Usuario* buscarAmigo = amigos[i];
        if (buscarAmigo->getId() == id) 
        {
            return buscarAmigo;
            amigoEncontrado= true;
        }
    }
    
    if (amigoEncontrado == false)
    {
        cout << "You have no friends with that ID." << endl;
        return nullptr;
    }
}

Usuario::Usuario(string nombre)
{
    this->nombre=nombre;
}

Usuario::Usuario(string nombre, int edad)
{
    this->nombre=nombre;
    this->edad=edad;
}

Usuario::Usuario(string nombre, int edad, string nacionalidad)
{
    this->nombre=nombre;
    this->edad=edad;
    this->nacionalidad=nacionalidad;
}