#include<iostream>

using namespace std;

struct Nodo{
	int valor;
	Nodo* siguiente;
};

int main(){
    int cantidadNodos = 4;
    int listaNodos[cantidadNodos] = {};
    
    
	// CREACION DE LOS NODOS USANDO LA ESTRUCTURA ANTERIOR
	Nodo* nodo1 = new Nodo();
	Nodo* nodo2 = new Nodo();
	Nodo* nodo3 = new Nodo();
	Nodo* nodo4 = new Nodo();
	
	//SE LE ASIGNAR VALORES ALEATORIOS A LOS NODOS
	
	nodo1->valor = 50;
	nodo2->valor = 1;
	nodo3->valor = 20;
	nodo4->valor = 3;
	
	//ENLACE DE LOS NODOS
	
	nodo1->siguiente = nodo2;
	nodo2->siguiente = nodo3;
	nodo3->siguiente = nodo4;
	nodo4->siguiente = NULL;
	
	//PUNTERO NUMERO 1
	
	Nodo* cabeza = nodo1;
	
	//VARIABLE TEMPORAL LA CUAL IRA CAMBIANDO DE NODO
	//SE INICIALIZA DESDE EL PRIMER NODO
	Nodo* temporal = cabeza;
	
	cout<<"VALORES DE LOS NODOS: ";
	while (temporal != NULL){
	    listaNodos[temporal->valor];
		cout<<temporal->valor<<" | ";
		temporal = temporal->siguiente;
	}
	cout<<listaNodos;
	cout<<endl;
	

	
    for (int i = 0; i < cantidadNodos - 1; i++) {
        for (int j = 0; j < cantidadNodos - i - 1; j++) {
            if (listaNodos[j] > listaNodos[j + 1]) {
                int temp = listaNodos[j];
                listaNodos[j] = listaNodos[j + 1];
                listaNodos[j + 1] = temp;
            }
        }
    }
	
	for (int i =0;i<cantidadNodos;i++){
	    cout<<listaNodos[i];
	}
	delete nodo1;
	delete nodo2;
	delete nodo3;
	delete nodo4;
	
	return 0;

}



