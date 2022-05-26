#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
using namespace std;

void sequenza_b(int &nb, int b[]){
cout<<"\nLa sequenza di bit e': ";

for(int i=0; i<nb; i++){
cout<<b[i];
}
}

void funz_risc(int b[],int &nb)
{
int i=0;

        if(b[i]==0)
{
        int j;
        for(int i=0; i<nb; i++)
{
        j=i+1;
        b[i]=b[j];
i=i+1;
}

}            
    nb=nb-1;
sequenza_b(nb, b);

}

int nb;

int main()
{
 
int p=0;
int gx[p];
int scelta_divisore;
int a;
cout<<"Quanti bit si vogliono generare? (da 8 a 32) : ";
cin>>nb;

while(nb<8 || nb>32)
{
cout<<"Il numero inserito non è invalido, reinserirlo :";
cin>>nb;
}


cout<<"\n\n-1 1001\n\n-2 101\n\n:";
cin>>scelta_divisore;

while(scelta_divisore!=1 && scelta_divisore!=2)
{
cout<<"numero inserito invalido, riprova :";
cin>>scelta_divisore;
}

int b[nb];

srand (time(NULL));

cout<<"Il numero dei bit e': "<<nb<<endl;


for(int i=0; i<nb; i++)
{
int a=rand() % 2;
b[i] = a;
}

sequenza_b(nb, b);
if(scelta_divisore==1)
{
cout<<"\n\nIl divisore e': 1001";
p=4;
gx[p];
gx[0]=1;
gx[1]=0;
gx[2]=0;
gx[3]=1;

nb=nb+3;
b[nb];
b[nb-1]=0;
b[nb-2]=0;
b[nb-3]=0;
sequenza_b(nb, b);
}
else if(scelta_divisore==2)
{
cout<<"\n\nIl divisore e': 101";
gx[p];
p=3;
gx[0]=1;
gx[1]=0;
gx[2]=1;

nb=nb+2;
b[nb];
b[nb-1]=0;
b[nb-2]=0;
sequenza_b(nb, b);
}


cout<<"\n\nmx: ";
for(int i=0, h = p ; h>=0, i<p; h--, i++)
{
if(h<2)
{
if (gx[i]==1)
{
cout<<"1";
}
}
else if (h>1)
{
if (gx[i]==1)
{
cout<<"x^"<<h-1<<"+";

}
}
}


    bool loop=true;

for(int i=0, h=p; loop=true; i++, h--)
{

if(nb<=3)
{
        cout<<"\n\n-----------RISULTATO FINALE--------";
        funz_risc(b, nb);
return 0;        
}

if(h==-1)
{
h=p;
}
cout<<"\n\nrisultato tra :"<<b[i]<<" e ";

cout<<gx[h]<<" = ";

if (b[i] == gx[h])
{
b[i] = 0;
}
else
{
b[i]=1;
}
cout<<b[i];
    funz_risc(b, nb);
}
}


