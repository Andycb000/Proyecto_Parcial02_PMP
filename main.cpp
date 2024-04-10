#include "rlutil.h"
#include "redsocial.h"
#include "usuario.h"
#include "publicacion.h"
#include <cstdlib>
using namespace std;
using namespace rlutil;

void titulo();

int main()
{
    int idtot = 0;
    int loginID;
    int amiguito;
    Usuario* logIn;
    Usuario* ptramiguin;
    int receptorsin;
    int r2;
    string nom, nac;
    int age;
    
    //Declarar red social
    RedSocial musicBox("Music Box");

    //Declarar usuarios base
    Usuario u1("Allison", 17, "Canadiense");
    idtot++;
    musicBox.agregarUsuario(&u1,idtot);

    Usuario u2("Anthony", 17, "Alemán");
    idtot++;
    musicBox.agregarUsuario(&u2,idtot);

    Usuario u3("Julia", 25, "Española");
    idtot++;
    musicBox.agregarUsuario(&u3,idtot);

    //Declarar publicaciones base
    Publicacion rec1 (musicBox.getUsuario(1), "30/mayo/2023", "Album", "Souvlaki Space Station - Slowdive", "Es uno de mis albumes favoritos de shoegaze");
    musicBox.agregarPublicacion(&rec1);
    
    Publicacion rec2 (musicBox.getUsuario(2), "12/junio/2023", "Canción", "Earthmover - Have A Nice Life");
    musicBox.agregarPublicacion(&rec2);

    Publicacion rec3 (musicBox.getUsuario(3), "15/junio/2023", "Artista", "Radiohead", "Espacialmente recomiendo los albumes 'In Rainbows' y 'OK Computer'");
    musicBox.agregarPublicacion(&rec3);


    //Bienvenida
    setColor(15);
    cout << "Welcome to the..." << endl;
    cout << endl;
    cout << endl;
    titulo();
    cout << endl;

    //menu de la red social
inicio:

    setColor(15);
    int r;
    cout << "1. View users" << endl;
    cout << "2. View posts" << endl;
    cout << "3. Log in" << endl;
    cout << "4. Sign up" << endl;
    cout << "5. Exit" << endl;
    cin >> r;

    switch(r)
    {
        case 1:
            cls();
            musicBox.mostrarUsuarios();
            goto inicio;
        break;

        case 2:
            cls();
            musicBox.mostrarPublicaciones();
            goto inicio;
        break;

        case 3:
            iniciarSesion:
            cls();
            cout << "Log in" << endl;
            cout << "Enter your user ID:" << endl;
            cin >> loginID;

            logIn= musicBox.getUsuario(loginID);

            if (logIn == nullptr)
            {
                cout << "Try again" << endl;
                goto iniciarSesion;
            }

            cls();
            cout << "Welcome " << logIn->nombre << endl;
            menuUsuario:
            cout << "1. View your friend list" << endl;
            cout << "2. View your music recommendations" << endl;
            cout << "3. Make a music recommendation" << endl;
            cout << "4. View a friend profile" << endl;
            cout << "5. Add a friend" << endl;
            cout << "6. Make a private recommendation" << endl;
            cout << "7. Exit" << endl;
            cin >> r2;

            switch(r2)
            {
                case 1:
                    cls();
                    logIn->mostrarAmigos();
                    goto menuUsuario;
                break;
    
                case 2:
                    cls();
                    logIn->mostrarPublicaciones();
                    goto menuUsuario;
                break;

                case 3:
                    logIn->crearPublicacion();
                break;

                case 4:
                    cout << "Enter the ID of the friend that you are looking for" << endl;
                    cin >> amiguito;
                    logIn->getAmigo(amiguito)->mostrar();
                break;

                case 5:
                    cout << "Enter the ID of the user that you want to add as a friend" << endl;
                    cin >> amiguito;
                    logIn->agregarAmigo(musicBox.getUsuario(amiguito));
                break;

                case 6:
                    cout << "Enter the ID of the user that you want to recommend something to" << endl;
                    cin >> receptorsin;
                    logIn->crearRecomendacionPrivada(musicBox.getUsuario(receptorsin));
                break;

                case 7:
                    goto inicio;
                    break;
                default:
                    cout << "Please select a valid option" << endl;
                    goto menuUsuario;
                break;
            }

        break;

        case 4:            
            cout << "Sign up" << endl;
            cout << "Username: ";
            cin >> nom;
            cout << "Age: ";
            cin >> age;
            cout << "Nationality: ";
            cin >> nac;
            logIn=  new Usuario(nom, age, nac);
            idtot++;
            musicBox.agregarUsuario(logIn,idtot);
            goto inicio;
        break;

        case 5:
            goto final;
        break;

        default:
            cout << "Choose a valid option" << endl;
            goto inicio;
        break;
    }
final:
    return 0;
}

void titulo()
{
    setColor(4);                            
    cout<<"MUSIC BOX"<<endl;   
}