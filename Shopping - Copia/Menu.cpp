#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Menu.h"
#include "Menusel.h"

Menu::Menu(){
    ma = new Maglie;
    pa = new Pantaloni;
    lista = new Categorie;
}

void Menu::tutto()const{
    int risp;
    bool scelta;
    Menusel men;

    do{
        risp = men.sel(lista->Elenco()," Selezionare un prodotto tra i seguenti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
        system("cls");
        scelta= lista->Selezione(risp);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        system("cls");
    }while(!scelta);
}




void Menu::parte()const{
    vector <Catalogo *> vet {pa,ma}; //creo un vettore con le varie categorie
    vector <string> vettore;
    bool scelta;
    int risp1;
    int risp2;
    Menusel men;

    for (int i= 0; i <vet.size(); i++){
        vettore.push_back( vet[i]->Nome());
    }

    do{
        risp1 = men.sel(vettore,"Le categorie sono le seguenti, selezionarne una: ");
        system ("cls");

        risp2= men.sel(vet[risp1]->Elenco()," Selezionare un prodotto tra i seguenti prodotti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
        system ("cls");
        scelta= vet[risp1]->Selezione(risp2);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        system("cls");
    }while(!scelta);

}