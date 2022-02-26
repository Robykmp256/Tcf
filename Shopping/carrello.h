

#ifndef SHOPPING_CARRELLO_H
#define SHOPPING_CARRELLO_H
#include <string>
#include <vector>
#include "Oggetto.h"
using std::vector;
using namespace std;
class carrello {
public:
    carrello() ;
    /*void aggiungi();
    void stampa();
    void rimuovi();
    void somma();*/

    virtual void stampa( vector<Oggetto> &);
    virtual void rimuovi(vector<Oggetto> &);
    virtual void somma(vector<Oggetto> &);
private:
    vector <Oggetto> car;



};


#endif //SHOPPING_CARRELLO_H
