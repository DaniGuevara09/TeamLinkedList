
#include <iostream>
#include <fstream>
#include "LinkedList.cpp"
#include "Notion.cpp"

using namespace std;

int main() {
    LinkedList<Notion> *list = new LinkedList<Notion>();

    list->addNodeFirst( new Notion(234,"Primera Nota"));
    list->addNodeLast( new Notion(100,"Segunda Nota"));
    list->addNodeLast( new Notion(50,"Tercera Nota"));
    list->addNodeFirst( new Notion(10,"Cuarta Nota"));

    //cout<<list->findNode(new Notion(800,""))<<endl;

    list->addNodeAfterTo( list->findNode(new Notion(100,"")), new Notion(80,"loren ipsum"));
    list->addNodeAfterTo( list->findNode(new Notion(50,"")), new Notion(2000,"loren ipsum"));
    //list->addNodeBeforeTo( list->findNode(new Notion(234,"")), new Notion(1200,"Ultisima"));

    //10-234-100-50
    //10-234-100-80-50

    for( Notion *notion : list->getLinkedList()){
        cout<<notion->getId()<<"-"<<notion->getName()<<endl;
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
