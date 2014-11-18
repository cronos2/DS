#ifndef NODE_CPP
#define NODE_CPP

#include <stddef.h>

#include <Node.h>


template <class T> Node <T>::Node(const T &value, Node <T> *next = NULL){

    this->value = value;
    this->next = next;

}

#endif