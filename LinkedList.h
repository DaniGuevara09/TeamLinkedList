//
// Created by Jairo Riaño on 6/09/24.
//

#ifndef LKPROJECT_LINKEDLIST_H
#define LKPROJECT_LINKEDLIST_H
#include <vector>
#include "Node.h"

template <class T>
class LinkedList {
public:
    LinkedList();
    bool isEmpty();
    void addNodeFirst( T* );
    void addNodeLast( T* );
    void addNodeAfterTo( Node<T>*, T* );
    void addNodeBeforeTo( Node<T>*, T* );
    void addNodeSorted(T*);
    Node<T>* findNode(T*);
    T* findInfo( int );
    std::vector<T*> getLinkedList();
    T* deleteNode(Node<T>*);
    int getSize();
    T* getObject(int key);
    T* getFirst();
    T* getLast();
    std::vector<T*> sumNumber(LinkedList<T>*);
    virtual ~LinkedList();

private:
    Node<T> *head;
};


#endif //LKPROJECT_LINKEDLIST_H
