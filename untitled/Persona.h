#ifndef PERSONA_H
//comprueba que no se haya definido anteriormente persona
#define PERSONA_H
// empezamos a definir la clase persona
#include <string>
// entiendo que es para poder usar strings un tipo de variable
class Persona {
    // empiezo a definir la clase persona
    std::string nombre;
    // aqui defines cada uno de las propiedades de la clase persona
    int edad;
    // string para texto e int para número
    std::string genero;

public:
    void setNombre(const std::string &nombre);
    /* para guardar el valor del nombre que se proporcione como una constante??? void hace que no se te
    devuelva el valor e int hace que si se te devuelva */
    std::string getNombre();
    // aqui ejecutas para que se rellene el campo ???
    void setEdad(int edad);
    // igual que con el nombre pero con números
    int getEdad();
    void setGenero(const std::string &genero);
    std::string getGenero();
};
#endif