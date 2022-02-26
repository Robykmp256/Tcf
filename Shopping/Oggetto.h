#ifndef OGGETTO_H
#define OGGETTO_H

#include <string>
using namespace std;


class Oggetto{

public:
    Oggetto(string,int);
    string  getnome();
    string getprezzo();
    string gettaglia();
    string getcolore();
    void stampaog();
private:
    string nome;
    string prezzo;
    string taglia;
    string colore;


};



#endif