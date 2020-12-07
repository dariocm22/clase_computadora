#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
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

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << left;
        out << setw(10) << c.marca;
        out << setw(20) << c.sistema_op;
        out << setw(15) << c.mem_ram;
        out << setw(15) << c.almcn;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c)
    {
        cout << "Marca: ";
        getline(cin, c.marca);

        cout << "Sistema Operativo: ";
        getline(cin, c.sistema_op);

        cout << "Memoria Ram: ";
        cin >> c.mem_ram;

        cout << "Almacenamiento: ";
        cin >> c.almcn;

        return in;
    }

};

#endif
