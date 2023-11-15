#include<iostream>
#include "triangulo.cpp"
#include "circulo.cpp"
#include "ciencia.cpp"
#include <vector>
#include <map>
#include <set>

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

    //Calcular el area del triangulo
    double areaTriangulo = Geometria::calcularAreaTriangulo(base, altura);
    cout <<"Area del triangulo: " << Geometria::calcularAreaTriangulo(5,7) << endl;

    Geometria::circulo (radio)
    std::cout << "Area: " <<  Geometria::calcularAreacirculo(radio) << std::endl;
    std::cout << "Perimetro: " << Geometria::calcularPerimetrocirculo(radio) << std::endl;

    cout << "Energia: " << Ciencia::Fisica::calcularEnergia(5) << endl;

    //Vector
    vector<int> numeros {1,2,3,4,5};
    numeros.push_back(6);

    //Map
    map<string, int> edad;
    edad["Juan"] = 20;
    edad.erase("Juan");

    //Set
    set<int> conjunto {1,2,3,4,5};
    conjunto.insert(6);
    conjunto.erase(1);

    return 0;
}
