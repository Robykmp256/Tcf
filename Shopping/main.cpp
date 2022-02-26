#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include<algorithm>
#include "Maglie.h"
#include "Pantaloni.h"
#include "Categorie.h"
#include "Menu.h"
#include <cstdlib>
#include<Windows.h>
#include"Oggetto.h"
#include "carrello.h"
using std::vector;
using namespace std;
int main() {
    int risposta;  //variabile usata per salvare le risposte dell'utente
vector< Oggetto> carrello;
    vector< Oggetto> carrello1;
    vector< Oggetto> carrello2;
    cout << "Benvenuto!";
    cout << " Vuole vedere l'intero catalogo o sfogliarlo per categoria?" << endl << "1 - Intero catalogo" << endl
         << "2 - per categoria" << endl;

    cin >> risposta;
    system("cls");

    while ((risposta != 1) && (risposta != 2)) {

        cout << "risposta non valida, inserire nuovamente!!" << endl;  //problema, se metti una lettera impazzisce
        cin >> risposta;
    }
    int rispo = 1;
    Menu m;

    while (rispo == 1) {
        if (risposta == 1) {
            m.No();
        }else{
            m.Si();
            cout << "1-Torna al catalogo" << endl;
            cout << "2-Termina" << endl;
            cin >> rispo;
            while ((rispo != 1) && (rispo != 2)) {

                cout << "risposta non valida, inserire nuovamente!!"
                     << endl;  //problema, se metti una lettera impazzisce
                cin >> rispo;// giocarsela meglio questa
                risposta=1;

            }
        }
    }
    vector<Oggetto> carrell(carrello1.size()+carrello2.size());
    vector<Oggetto>::iterator it, st;
    it=set_union(carrello1.begin(),carrello1.end(),carrello2.begin(),carrello2.end(),carrell.begin());
class carrello c;
c.stampa(carrell);

    while(rispo==2){
    cout << "1 conferma ordine" << endl;
    cout << "2 elimina un elemento dal carrello" << endl;
    cin>>rispo;
    if(rispo==2) {
  c.rimuovi(carrell);
  c.stampa(carrell);
    }
    }
    return 0;
}/*problemi: prezzi stringhe, */