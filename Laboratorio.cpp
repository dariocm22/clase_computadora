#include "Laboratorio.h"
#include <fstream>

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
    cout << left;
        cout << setw(10) << "Marca";
        cout << setw(20) << "Sistema Operarivo";
        cout << setw(15) << "Memoria Ram";
        cout << setw(15) << "Almacenamiento";
        cout << endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &p = arreglo[i];
        cout << p;
        //cout << "Marca: " << p.getMarca() << endl;
        //cout << "Sistema Operativo: " << p.getSistema_op() << endl;
        //cout << "Memoria Ram: " << p.getMem_ram() << endl;
        //cout << "Almacenamiento: " << p.getAlmcn() << endl;
        //cout << endl;
    }
    
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open()) {
        cout << left;
        cout << setw(10) << "Marca";
        cout << setw(20) << "Sistema Operarivo";
        cout << setw(15) << "Memoria Ram";
        cout << setw(15) << "Almacenamiento";
        cout << endl;
        for (size_t i = 0; i < cont; i++) {
            Computadora &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < cont; i++) {
            Computadora &p = arreglo[i];
            archivo << p.getMarca() << endl;
            archivo << p.getSistema_op() << endl;
            archivo << p.getMem_ram() << endl;
            archivo << p.getAlmcn() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open()){
        string temp;
        int mem_ram;
        long almcn;
        Computadora p;

        while(true)
        {
            getline(archivo, temp);
            if (archivo.eof()){
                break;
            }
            p.setMarca(temp);

            getline(archivo, temp);
            p.setSistema_op(temp);

            getline(archivo, temp);
            mem_ram = stoi(temp);
            p.setMem_ram(mem_ram);

            getline(archivo, temp);
            almcn = stoi(temp);
            p.setAlmcn(almcn);

            agregarFinal(p);


        }
    }
    archivo.close();
}