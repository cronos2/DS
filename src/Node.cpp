#ifndef NODE_CPP
#define NODE_CPP

#include <stddef.h>

#include <Node.h>


template <class T> Node <T>::Node(T value){

    this->value = value;
    this->next = NULL;

}


template <class T> Node <T>::Node(T value, Node <T> *next){

    this->value = value;
    this->next = next;

}

#endif