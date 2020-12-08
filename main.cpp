#include <iostream>
#include "Laboratorio.h"


int main() {
    Computadora c1 = Computadora("HP", "Windows 10", 8, 256);

    Computadora c2;
    c2.setMarca("Lenovo");
    c2.setSistema_op("Linux");
    c2.setMem_ram(16);
    c2.setAlmcn(1056);

    Laboratorio cp;

    //cp.agregarFinal(c1);
    //cp.agregarFinal(c2);

    cp << c1 << c2;

    //cout << c1;

    cp.mostrar();
    cp.respaldar_tabla();
    cp.respaldar();

    //cout << c2.getMarca() << endl;
    //cout << c2.getSistema_op() << endl;
    //cout << c2.getMem_ram() << endl;
    //cout << c2.getAlmcn() << endl;

    return 0;
}