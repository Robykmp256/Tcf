#ifndef PANTALONI_H
#define PANTALONI_H


#include <string>
#include <vector>
using namespace std;
#include "Oggetto.h"
#include "Catalogo.h"
#include "carrello.h"

class Pantaloni: public Catalogo{

public:
    Pantaloni();
    virtual void Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
virtual void getoggetto(int, vector<Oggetto> &);//lo aggiungo pure al carrello prova

private:
    vector <Oggetto> carre1;
    vector <string> prodotti;  //prendere magari in input il numero di prodotti?
    string nome ;
};

#endif
