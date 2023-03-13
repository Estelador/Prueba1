/*Programa para juego con pistas*/

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include<string>

using namespace std;

int main (void)
{
    //Variables
    string cad1, cad2;
    cad1="MR.D1993R";

    SetConsoleTitleA("357314D0R");
    SetConsoleOutputCP(1252);


    //Recibimiento
    cout<<endl;
    cout<<" Hola N.\n \n Menos mal que has encontrado el USB, tenía que salvar mi investigación de alguna manera. Ya me encuentro en un \n lugar seguro, a salvo de mis perseguidores, pero necesito tu ayuda." ;
    cout<<" Antes de nada necesito comprobar que eres tú \n de verdad N., así que escribe tu nombre en clave:";
    getline(cin, cad2);
    cout<<endl;

    if((cad1==cad2))
    {
        cout<<" Hola MR.D1993R, ha pasado mucho tiempo."<<endl<<endl;
        cout<<" Necesito que vayas a dónde me conociste, mejor dicho, a dónde nos vimos por primera vez hace muchos años...";//Clave correcta
    }
    else cout<<"¿No eres quien pensaba? Adiós entonces >:c";//Clave incorrecta

    cout<<endl;
    system ("pause");
    return 0;
}
