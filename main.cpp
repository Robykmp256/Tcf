
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Maglie.h"
#include "Pantaloni.h"
#include "Categorie.h"
#include "Menu.h"

using namespace std;

int main() {
	int risposta;  //variabile usata per salvare le risposte dell'utente
	
	cout<<"Benvenuto!";
	cout<<" Vuole vedere l'intero catalogo o sfogliarlo per categoria?"<<endl<<"1 - Intero catalogo"<<endl<<"2 - per categoria"<<endl;

	cin>>risposta;

	while ((risposta != 1) && (risposta !=2)){

		cout<<"risposta non valida, inserire nuovamente!!"<<endl;  //problema, se metti una lettera impazzisce
		cin>>risposta;
	}
	 
	Menu m;
	if (risposta == 1){
		m.No();
	}else{
		m.Si();
	}
	
	return 0;
}