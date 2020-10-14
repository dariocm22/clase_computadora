#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &marca,
                         const string &sistema_op,
                         int mem_ram,
                         long almcn)
{  
    this->marca = marca;
    this->sistema_op = sistema_op;
    this->mem_ram = mem_ram;
    this->almcn = almcn;
}

void Computadora::setMarca(const string &v)
{
    marca = v;
}

string Computadora::getMarca()
{
    return marca;
}

void Computadora::setSistema_op(const string &v)
{
    sistema_op = v;
}

string Computadora::getSistema_op()
{
    return sistema_op;
}

void Computadora::setMem_ram(int v)
{
    mem_ram = v;
}

int Computadora::getMem_ram()
{
    return mem_ram;
}

void Computadora::setAlmcn(long v)
{
    almcn = v;
}

long Computadora::getAlmcn()
{
    return almcn;
}
