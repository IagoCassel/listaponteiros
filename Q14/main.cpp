#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, i, j;	
	cout<<"Digite o numero de valores ";
	cin>>n;
	float *x, maior, aux;
	x=(float*) malloc(n*sizeof(float*));
	for (i = 0; i < n; i++){
		cout<<("Digite um valor ");
		cin>>(x[i]);
	}
	cout<<"Array nao ordenado"<<endl;
	for (i = 0; i < n; i++){
		cout<<(x[i])<<endl ;
	}
	cout<<"Array ordenado por INSERTION SORT "<<endl;
	for (i = 1; i < n; i++){
		for (j = i; j > 0; j--){
		if (x[j]<x[j-1]){
			maior = x[j];
			x[j] = x[j-1];
			x[j-1] = maior;
		}
	}
}
	for (i = 0; i < n; i++){
		cout<<(x[i])<<endl ;
	}
	return 0;
}
