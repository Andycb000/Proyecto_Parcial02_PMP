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
    setColor(15);
    cout<<"Welcome to the..."<<endl; 
    cout<<endl;  
    titulo();
    //revisar funcion de titulo abajo :(
    cout<<endl;
inicio:

    setColor(15);
    int r;
    cout<<"1. View users"<<endl;
    cout<<"2. View posts"<<endl;
    cout<<"3. Log in"<<endl;
    cout<<"4. Sign up"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>r;

    switch(r){

        case 1:
            cout<<"algo"<<endl;
        break;

        case 2:
            cout<<"algox2"<<endl;
        break;

        case 3:
            cout<<"algox3"<<endl;
        break;

        case 4:
            cout<<"algox4"<<endl;
        break;

        case 5:
            goto final;
        break;

        default:
        cout<<"Choose a valid option"<<endl;
        goto inicio;
        break;
    }
final:
    return 0;
}

void titulo(){
    setColor(4);
    cout<<"MUSIC BOX"<<endl;
//andy me rendi tratando de hacer un titulo bonito ayudaaa.    
}