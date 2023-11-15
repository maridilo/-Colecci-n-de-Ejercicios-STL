
#include <iostream>

namespace Geometria {
    class circulo {
    private:
        double radio;
    public:
         //Función para calcular el area del circulo
         circulo(double r) : radio(r) {}
         double calcularArea() {
          return 3.1416 * radio * radio;
        }
        //Función para calcular el perimetro del circulo
        double calcularPerimetro() {
          return 2 * 3.1416 * radio;
        }
    };
}