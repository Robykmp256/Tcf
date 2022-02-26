#ifndef MAGLIE_H
#define MAGLIE_H


#include <string>
#include <vector>
using namespace std;
#include "Oggetto.h"
#include "Catalogo.h"

class Maglie: public Catalogo{

public:
    Maglie();
    virtual void Elenco() const;
    virtual bool Selezione(int) const;
    virtual string Nome () const;
    virtual void getoggetto(int,vector<Oggetto> &);

private:
    vector <string> prodotti;  //prendere magari in input il numero di prodotti?
    string nome;
    vector <Oggetto> carre2;
};

#endif
