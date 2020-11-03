#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Se declaran funciones
void agregarPila(Nodo *&,int); 
void sacarPila(Nodo *&,int &);

int main(){
	Nodo *pila = NULL;	
	int dato;
	char rpt;
	
	
	
	do{ //Pedimos todos los elementos de la pila

		cout<<"\nDigite un numero para incertar en la pila: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		
		//Preguntamos si decesa agregar otro numero a la pila
		cout<<"\n\nDesea agregar otro numero a pila(s/n): ";
		cin>>rpt;
		
		
	}while((rpt == 's')||(rpt=='S'));
	
	//Se manda a llamar a la funacion sacarpila
	cout<<"\nMostrando los elementos de la pila: ";
	while(pila != NULL){
		sacarPila(pila,dato);
		
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}
	//Funcion para agregar los elementos a la pila
void agregarPila(Nodo *&pila,int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" agregado a PILA correctamente";
}
	//muestra los elementos almacenados enla pila
void sacarPila(Nodo *&pila,int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
