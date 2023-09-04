
#include <iostream>

using namespace std;

int main()
{
int numero[]={1,2,3,4,5,9,10,12,15,19,22,25,13,11,17,20,23,21,24,27,29,30,32,34,36,38,40.42,44,48};
int i,j,aux;

for(i=0; i<30;i++){
    for(j =0;j<30;j++){
        if (numero[i]>numero [i+1]){
            aux = numero[i];
            numero[i]=numero[j+1];
            numero [j+1]= aux;
        }
    }
}
    
    cout<< "Orden decendente";
    for (i=1; i>0; i++){
    cout<< "Numeros"<<i;
    
	}
    
    return 0;
}

