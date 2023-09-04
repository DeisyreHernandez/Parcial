#include <iostream>
using namespace:: std;

struct nodo{
    int dato;
    nodo*sig;
    
}*primero, *ultimo;

void insertar();
void actualizar();

int main(){
 insertar();
 insertar();
 insertar();
 insertar();
 insertar();
 actualizar();
 
    return 0;
}

void insertar(){
    nodo* nuevo = new nodo();
    cout<<"Digite un dato:\n" ;
    cin>> nuevo->dato;
    
    if(primero == NULL){
        primero =  nuevo;
        primero-> sig = NULL;
        ultimo =  nuevo;
    }else{
        ultimo->sig = nuevo;
         nuevo->sig = NULL;
        ultimo =  nuevo;
    }
}

void actualizar(){
    nodo* actual = new nodo;
    actual = primero;
    nodo* anterior = new nodo;
    anterior = NULL;
    bool datos= false;
    int buscar =0;
    if (primero != NULL){
        cout <<"Dato a actualizar \n: ";
        cin>>buscar;
        
        while (actual !=NULL && datos != true){
          
          if (actual->dato= buscar){
              cout<< "  Dato :\n" <<buscar<< "encontrado\n";
              cout << "Ingrese el nuevo dato que se desea actualizar:\n";
              cin>>actual->dato;
              cout<<"Dato actualizado\n";
              datos = true;
          }  
          actual = actual-> sig;
        }if (!datos){
            cout<< "No se encontro ese dato\n";
        }
        
    }
}
