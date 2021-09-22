#include <iostream>
using namespace std;

class Nodo{
private:
    int elem;
    Nodo *right;
    Nodo *left;
    friend class Arbol;
public:
    Nodo();
    Nodo(int, Nodo*, Nodo*);
    Nodo(int);
    ~Nodo();
};

Nodo::Nodo(){
    elem = 0;
    right = nullptr;
    left = nullptr;
}
Nodo::Nodo(int elem, Nodo *rig, Nodo *lef){
    this->elem = elem;
    right = rig;
    left = lef;
}
Nodo::Nodo(int elem){
    this->elem = elem;
    right = nullptr;
    left = nullptr;
}
Nodo::~Nodo(){
    delete right;
    delete left;
}

class Arbol{
private:
    Nodo *padre;
public:
    Arbol();
    ~Arbol();
    void insertar(int);
    void eliminar(int);
    bool find(int);
};

Arbol::Arbol(){
    padre = nullptr;
}

void Arbol::insertar(int elem){
    Nodo *temp = new Nodo(elem);
    
    if(padre)
        padre = temp;
    else{
        while(temp != nullptr){
            
        }
    }
}

void Arbol::eliminar(int elem){

}

Arbol::~Arbol(){
}


int main(){

}