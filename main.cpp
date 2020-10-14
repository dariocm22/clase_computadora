#include <iostream>
#include "Laboratorio.h"


int main() {
    Computadora c1 = Computadora("HP", "Windows 10", 8, 256);

    Computadora c2;
    c2.setMarca("Lenovo");
    c2.setSistema_op("Linux");
    c2.setMem_ram(16);
    c2.setAlmcn(1056);

    cout << c2.getMarca() << endl;
    cout << c2.getSistema_op() << endl;
    cout << c2.getMem_ram() << endl;
    cout << c2.getAlmcn() << endl;

    Laboratorio cp;

    cp.agregarFinal(c1);
    cp.agregarFinal(c2);
    cp.mostrar();

    return 0;
}