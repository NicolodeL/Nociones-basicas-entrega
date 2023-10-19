//
// Created by nicol on 16/10/2023.
//

#ifndef UNTITLED_ESTUDIANTE_H
#define UNTITLED_ESTUDIANTE_H
#include <string>
#include "Persona.h"

class Estudiante : public Persona {
    std::string grado;

public:
    void setGrado(const std::string &grado);
    std::string getGrado();
    void mostrarDetalles();
};

#endif //UNTITLED_ESTUDIANTE_H
