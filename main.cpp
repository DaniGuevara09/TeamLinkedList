
#include <iostream>
#include <fstream>
#include "LinkedList.cpp"
#include <unistd.h>  // para getcwd
#include <limits.h>  // para PATH_MAX

using namespace std;

int main() {
    LinkedList<char> *list = new LinkedList<char>();

    char r = 'R';
    char j = 'J';
    char a = 'A';
    char i = 'I';
    char o = 'O';
  
    list->addNodeFirst(&o);
    list->addNodeFirst(&r);
    list->addNodeFirst(&i);
    list->addNodeFirst(&a);
    list->addNodeFirst(&j);


    // J-A-I-R-O
    for (char *c: list->getLinkedList()) {
        cout << *c << "-" ;
    }
    cout << endl;
    cout <<"El tamaño del Nodo es de: "<< list->getSize() << endl;

    cout<<"\n"<<*list->getLast()<<endl;

    delete(list);


    // __________________________________________________
    LinkedList<string> * nums = new LinkedList<string>();

    ifstream file("/home/dani/Documents/Uni/ProgrammingIII/Class/Proj5LinkedList/TeamLinkedList/info.in");
    if (!file.is_open()) {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    string line;
    while (getline(file,line)) {
        if (line == "-1") {
            break;
        }
        nums->addNodeFirst(new string(line));
    }

    for (string *c: nums->getLinkedList()) {
        cout << *c << "-" ;
    }
    delete(nums);

    return 0;
}
