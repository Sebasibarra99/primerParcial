// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    //DECLARACION DE VARIABLES Y SOLICITUD DELTAMAÑO DEL ARREGLO AL USUARIO
    int posiciones = 0;
    cout<<"DE QUE CANTIDAD QUIERE SU ARREGLO: ";
    cin>>posiciones;
    int temporal = 0;
    int arreglo[posiciones] = {};
    int ordenada[posiciones] = {};
    int real = 0;
    
    //LLENADO DE ARREGLO
    
    for (int i =0; i < posiciones; i++){
        cout<<"Ingrese el dato de la posicio "<<i+1<<": " ;
        cin>>arreglo[i];
    };
    
    //ORDENAMIENTO TIPO BURBUJA 
    
    for (int i=0;i<posiciones;i++){
        for (int j=0;j<posiciones;j++){
            if (arreglo[j] > arreglo[j + 1]) {
                int temporal = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temporal;
            }
        };
        
    };
    //IMPRIMIR EL ARREGLO
    
    for (int i =0;i<posiciones;i++){
        cout<<arreglo[i]<<" | ";
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
