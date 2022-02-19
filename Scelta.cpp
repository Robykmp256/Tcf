#include <iostream>
#include <conio.h>   //prende input da tastiera
#include <string>
#include <vector>
#include <windows.h>


using namespace std;

void Color(int color){
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);  //seleziona il colore
}

int main(){
	int input;
	string vettore[]= {"a", "b", "c"};
	int j = 0;
	
	while(true){
		for (int i=0; i<3; i++){
			if (i==j){
				Color(2);
				cout<<vettore [i]<<endl;
			}else{
				Color(7);
				cout<< vettore[i]<<endl;
			}
		}
		
		input = getch();
		if (input == 72){
		 		if ( j != 0){  //freccia up, salgo nell'elenco
					j--;
				}
	    }
		if (input == 80){    //freccia down, scendo nell'elenco
				if ( j!=2){
					j++;
				}
		}
		if (input == 13){   // tasto invio esce 
		
				break;
	    }
	    system ("cls");
	}

	return 0;
}

