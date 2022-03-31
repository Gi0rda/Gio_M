using namespace std;
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
int main()
{
	int b, a;
	cout<<"Inserire il numero di bit che si desidera trasmettere(da 8 ba 32) = ";
	cin>> b;
	cout<<"Il numero di bit e = "<<b<<endl;
	for(int i=0; i<b; i++)
	 {
	 	int a=rand() % 2;
	 	cout<<a;
	 }
}
