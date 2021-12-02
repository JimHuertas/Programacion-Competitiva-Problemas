#include <iostream>
using namespace std;

class Nodo{
private:
    int elem;
    Nodo *next;
    friend class LinkedList;
public:
    Nodo();
    Nodo(int);
    int print();
};
Nodo::Nodo(){
    elem = 0;
    next = nullptr;
}
Nodo::Nodo(int a){
    elem = a;
    next = nullptr;
}
int Nodo::print(){
    return elem;
}


class LinkedList{
private:
    Nodo *head;
    int size;
public:
    LinkedList(Nodo *head);
    LinkedList();
    void insert(int nuevo, int pos);
    void print();
};

LinkedList::LinkedList(){
    head = nullptr;
    size=0;
}

void LinkedList::insert(int nuevo, int pos){
    Nodo *node = new Nodo(nuevo);

    //si la posicion es 0, o no existen elementos en la lista
    if(head == nullptr || pos == 0){
        head = node;
        if(size != 0){
            Nodo *temp = head;
            head = node;
            node -> next = temp;
        } else {
            head->next = nullptr;
        }
        size++;
    }

    //si la posicion es igual o mayor al nro de elementos en la lista
    else if (size <= pos){
        Nodo *temp = head;
        int cont = 0;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = node;
        node->next = nullptr;
        size++;
    }

    //si la posicion es menor al nro de elementos en la lista
    else{
        Nodo *temp = head;
        int cont=0;
        while(cont<pos-1){
            temp = temp->next;
            cont++;
        }
        Nodo *aux = temp->next;
        temp->next = node;
        node->next = aux;
        size++;
    }

}

void LinkedList::print(){
    Nodo *temp = head;
    while(temp){
        cout<<temp->print()<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    LinkedList lista;
    lista.insert(1, 0);
    lista.insert(2, 1);
    lista.insert(3, 1);
    lista.insert(4, 32);
    lista.insert(12, 12);
    lista.print();

}