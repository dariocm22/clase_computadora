#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &p)
{
    if (cont < 5)
    {
        arreglo[cont] = p;
        cont ++;
    }
    else
    {
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &p = arreglo[i];
        cout << "Marca: " << p.getMarca() << endl;
        cout << "Sistema Operativo: " << p.getSistema_op() << endl;
        cout << "Memoria Ram: " << p.getMem_ram() << endl;
        cout << "Almacenamiento: " << p.getAlmcn() << endl;
        cout << endl;
    }
}