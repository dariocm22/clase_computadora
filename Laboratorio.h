#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;

public:
    Laboratorio();
    void agregarFinal(const Computadora &p);
    void mostrar();
    void respaldar_tabla();
    void respaldar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &p)
    {
        l.agregarFinal(p);
        
        return l;
    }
};

#endif