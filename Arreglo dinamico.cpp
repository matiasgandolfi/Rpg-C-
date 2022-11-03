#include <iostream>
using namespace std;

int main() {
	
	int t;
	cout<<"Ingrese dimension: ";
	cin>>t;
	int *A, *B;
	
	A = new int[t];
	B= new int[t];
	int Sa=0, Sb=0;
	
	for(int i=0; i<t; i++){
		cout<<"Ingreseun valor para A["<<i<<"]: ";
		cin>>A[i];
		Sa += A[i];
	}
	
	for(int i=0; i<t; i++){
		cout<<"Ingrese un valor para B["<<i<<"]: ";
		cin>>B[i];
		Sb += B[i];
	}
	
	if(Sa>Sb)
	{
		cout<<"La suma de los elementos del vector A es mayor que la sumade los elementos del vector B";
	}
	else if (Sb>Sa)
	{
		cout<<"La suma de los elementos del vector B es mayor que la sumade los elementos del vector A";
		
	}
	else
	{
		cout<<"La suma de los elementos es la misma en A y en B";
	}
	
	return 0;
}

