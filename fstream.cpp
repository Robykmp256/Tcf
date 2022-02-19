#include<iostream>
#include<fstream>
#include <string>

#include <sstream>

using namespace std;

int main(){
	fstream file;                     //come prendere le righe da un file
	file.open("Maglie.txt", ios::in);
	string riga;
	
	if(file.is_open()){
		while(file){
			getline(file,riga);
			cout<<riga<<endl;
		}
		file.close();		
	}
	
	string nome = "Ciao mi chiamo Sara";  //dividere una stringa per spazi
	istringstream ss(nome);  // ss e token sono nomi generici che posso scegliere io
	string token;
	
	while(getline(ss, token, ' ')){
		cout<<token<<endl;   //qua posso caricarlo su un array
	}
	
	
	return 0;
}
