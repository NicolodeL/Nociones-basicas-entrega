#include <iostream>
#include "funciones.h"
#define PI 3.14159
#define AREA_CIRCULO(r) (PI * (r) * (r))

int main() {
    int a=23, b=74;
    int resultado_suma = suma(a, b);
    int resultado_resta = resta(a, b);
    int resultado_multiplicacion = multiplicacion(a, b);
    double resultado_division = static_cast<double>(a) / b;
    double r = 5.0;
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Multiplicacion: " << resultado_multiplicacion << std::endl;
    std::cout << "Division: " << resultado_division << std::endl;
    std::cout << AREA_CIRCULO(r) << std::endl;
    return 0;
}
