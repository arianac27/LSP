#include <iostream>
using namespace std;

class Producto {
public:
    virtual void mostrarProducto() {
        cout<<"Producto: "<<endl;
    }

    virtual ~Producto() {
    }
};
class Vestido : public Producto {
public:
    void mostrarProducto() override {
        cout<<"Producto: Vestido"<<endl;
    }
};
class Falda : public Producto {
public:
    void mostrarProducto() override {
        cout<<"Producto: Falda"<<endl;
    }
};

int main() {
    Producto* p1 = new Vestido();
    Producto* p2 = new Falda();

    p1->mostrarProducto();
    p2->mostrarProducto();

    delete p1;
    delete p2;

    return 0;
}
