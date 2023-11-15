#include<iostream>

using namespace std;

// Definición del espacio de nombres Matematicas
namespace Matematicas {
    //Función para sumar dos numeros
    int suma(int a, int b) {
        return a + b;
    }
    //Función para restar dos numeros
    int resta(int a, int b) {
        return a - b;
    }
}
int main(){
    cout <<"Suma: " << Matematicas::suma(5,7) << endl;
    cout <<"Resta: " << Matematicas::resta(5,7) << endl;
    return 0;
}
