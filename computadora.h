#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    string marca;
    string sistema_op;
    int mem_ram;
    long almcn;
public:
    Computadora();
    Computadora(const string &marca,
                const string &sistema_op,
                int mem_ram,
                long almcn);
    void setMarca(const string &v);
    string getMarca();
    void setSistema_op(const string &v);
    string getSistema_op();
    void setMem_ram(int v);
    int getMem_ram();
    void setAlmcn(long v);
    long getAlmcn();
};

#endif
