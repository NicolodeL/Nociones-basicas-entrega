#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
int g = 20;
int suma(int a, int b) {
    return a + b;
}
/* arriba va como se operan las fuciones y debajo el programa las imprime */
/* por ahora no pongos tildes ya que no las procesa el programa */
int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;
    // Cosas de la clase persona:
    Persona persona1;
    persona1.setNombre("Juanito");
    persona1.setEdad(11);
    persona1.setGenero("masculino");
    std::cout << "Caracteristicas de la persona" << std::endl;
    std::cout << "nombre:" << persona1.getNombre() << std::endl;
    std::cout << "edad:" << persona1.getEdad() << std::endl;
    std::cout << "genero:" << persona1.getGenero() << std::endl;
    // Cosas del estudiante:
    Estudiante estudiante1;
    estudiante1.setNombre("Pedro");
    estudiante1.setEdad(12);
    estudiante1.setGenero("masculino");
    estudiante1.setGrado("primero de Educacion Secundaria Obligatoria");
    std::cout << "\nDetalles del estudiante:" << std::endl;
    estudiante1.mostrarDetalles();
    return 0;
}
// falta hacer que se vean los detalles de la función estudiante