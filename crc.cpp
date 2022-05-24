#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;


void sequenza_b(int &nb, int b[]){
    cout<<"\nI bit generati sono: ";
    for(int i=0; i<nb; i++){
        cout<<b[i];
    }
}

void funz_risc(int b[],int &nb)
    {   
        int i=0;
        
        if(b[i]=! 1){
        int j;
        while(i<nb)
        {
        j=i+1;
        b[i]=b[j];
        i=i+1;
        }                
        }

        nb=nb-1;
        sequenza_b(nb, b);
    }


  restart(int b[], int nb){
        int v_pos;
        funz_risc(b, nb);
        for(int i=0; i<nb; i++){
            if(b[i]==1){
                v_pos=i;
                return v_pos;
            }
        }
    }

int nb;

int main(){
	
	
	int app;
	cout<<"Selezioanare un numero di bit da generare (da 8 a 32): ";
	cin>>nb;
	
	while(nb<8 || nb>32){
        cout<<"numero inserito invalido, riprova :";
        cin>>nb;
    }
		
	int b[nb];
	srand (time(NULL));
	
	cout<<"Il numero di bit e': "<<nb<<endl;

	
	for(int i=0; i<nb; i++){
	int app=rand() % 2;
	b[i] = app;
	}

	sequenza_b(nb, b);
	
	int r=4;
	int Gx[r];
	Gx[0]=1;
	Gx[1]=1;
	Gx[2]=0;
	Gx[3]=1;
	
	cout<<"\n\nmx: ";
	for(int i=0, P = nb ; P>=0, i<nb; P--, i++){
		if (b[i]==1){
			cout<<"x^"<<P-1<<"+";
		}
	}
	
	nb=nb+3;
    

    b[nb];
    b[nb]=0;
    b[nb-1]=0;
    b[nb-2]=0;
  int v_pos=0;


  int var_fine=nb-2;
    bool loop=true;

    for(int i=0, P=3; r=true; i++, P--){
        
        if(nb<=4){
            cout<<"\n-----------RISULTATO--------";
            funz_risc(b, nb);
            return 0;
            
        }
       if(v_pos!=0){
            i=v_pos;
            	cout<<"\n-------------passaggio successivo---------------";
        }

        if(P==-1){
            i=restart(b, nb);
            P=3;
        }
     
        cout<<"\n\nrisultato tra :"<<b[i]<<" e ";
        cout<<Gx[P]<<" = ";
        if (b[i] == Gx[P]){
            b[i] = 0;
        }else {
        b[i]=1;
        }
        if(b[i]==1){
            v_pos=i;
        }
       cout<<b[i];
        funz_risc(b, nb);
    }
}
