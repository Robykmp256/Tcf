#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"
carrello::carrello()
{

}
void carrello::stampa( vector<Oggetto> &carrell){
    car=carrell;
    for(int i=0;i<car.size();i++)
    {
        car[i].stampaog();
    }
}
void carrello::rimuovi(vector<Oggetto> &carrell){
    int a;
    cout<<"quale elemento del carrello vuoi rimuovere?"<<endl;
    cin>>a;
while(a>car.size()+1){
    cout<<"nessun elemento del carrello corrisponde a "<<a<<" , inserire un valore valido"<<endl;
    cin>>a;
}
car.erase(car.begin()+(a-1));
}