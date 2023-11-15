
#include <iostream>
#include <cmath>

namespace Geometria {
    class circulo {
    private:
        double radio;
    public:
         //Función para calcular el area del circulo
         circulo(double r) : radio(r) {}
         double calcularAreacirculo() {
          return 3.1416 * radio * radio;
        }
        //Función para calcular el perimetro del circulo
        double calcularPerimetrocirculo() {
          return 2 * 3.1416 * radio;
        }
    };
}