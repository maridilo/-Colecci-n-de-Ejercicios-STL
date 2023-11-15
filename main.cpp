#include<iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

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

int main() {

    cout <<"Suma: " << Matematicas::suma(5,7) << endl;
    cout <<"Resta: " << Matematicas::resta(5,7) << endl;

    double base = 5;
    double altura = 7;
    double radio = 5;

    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    cout <<"Area del triangulo: " << Geometria::calcularAreaTriangulo(5,7) << endl;
    double areaCirculo = Geometria::calcularAreaCirculo(radio);
    cout <<"Area del circulo: " << Geometria::calcularAreaCirculo(5) << endl;
    return 0;
}
