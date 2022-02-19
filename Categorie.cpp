#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
 
#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"



Categorie::Categorie (){
	cat.push_back(new Maglie);
	cat.push_back(new Pantaloni);
}

void Categorie::Elenco() const{     //Ti stampa l'elenco delle maglie

	for (int i=0; i<cat.size(); i++) {
		cat[i]->Elenco();
	}
}

bool Categorie::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
	double i = s/2.; 		//dice a quale categoria fa riferimento
	int j= s%2;  //dice a quale prodotto  fa riferimento
	cout<<j+1;
	cat[0]->Selezione(j+1);
		
	
	if(i>1 && i<=2){
		cat[1]->Selezione(j);
	}

}

string Categorie::Nome () const{
	
	for (int i=0; i<cat.size(); i++) {
		cout<< i-1 <<" - ";
		cat[i]->Nome();
		cout<<endl;
	}
}

	

