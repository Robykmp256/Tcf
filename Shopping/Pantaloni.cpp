#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
using std::vector;
#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"


Pantaloni::Pantaloni (){
    nome = " pantaloni";
    fstream file;
    file.open("Pantaloni.txt");
    string pant;
    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, pant);
            if (i%6==0){
                prodotti.push_back(pant);
                //cout<<maglie<<" "<<i<<endl;    //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }

        }
        file.close();
    }
}

void Pantaloni::Elenco() const{     //Ti stampa l'elenco delle maglie
    for( int i=0; i<prodotti.size()-1; i++){
        cout<<i+1<<" - "<<prodotti[i]<<endl;
    }

}

  bool Pantaloni::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    fstream file;
    file.open("Pantaloni.txt");
    string pant;

    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, pant);
            if(i>=(s-1)*6 && i<=(s-1)*6+5){
                cout<<pant<<endl;     		//STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
        }
        file.close();
    }

    cout<<" Aggiungere al carrello? No vuol dire tornare indietro"<<endl<<"S/N"<<endl;
    string risp;//chiedi se vuoi aggiungere e togliere se vuoi tornare oggetto
    cin>>risp;
    if(risp=="n" || risp=="N"){     //con false torna indietro
        return false;
    }
    if(risp== "s" || risp=="S"){   //con true crea l'oggetto e lo aggiunge al carrello

        return true;
    }
    return false;
}
void Pantaloni::getoggetto(int s, vector<Oggetto> &carrello1) {//prima era tipo oggetto ora l'ho messa void
    fstream file;
    file.open("Pantaloni.txt");
    string pant;

    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, pant);
            if(i>=(s-1)*6 && i<=(s-1)*6+5){
                    		//STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
        }
        file.close();
    }
    Oggetto * og = new Oggetto ("Pantaloni.txt",s);
    carre1=carrello1;
    carre1.push_back( * og);
}
string Pantaloni::Nome () const{
    return nome;
}


