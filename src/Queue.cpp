#ifndef QUEUE_CPP
#define QUEUE_CPP

#include <stddef.h>

#include <Queue.h>
#include <Node.h>

using namespace std;


template <class T> Queue <T>::Queue(){
    
    this->head = this->end = NULL;

}


template <class T> Queue <T>::Queue(const T &value){
    
    Node <T> *node = new Node <T>(value, NULL);

    this->head = this->last = node;

}


template <class T> Queue <T>::Queue(const Queue <T> &other){
    
    Node <T> *curr_other = other.head, *prev_here, *curr_here;

    prev_here = new Node <T>(curr_other->getValue());

    this->head = prev_here;

    curr_other = curr_other->getNext();

    while(curr_other != NULL){

        curr_here = new Node <T>(curr_other->getValue());

        prev_here.setNext(curr_here);

        prev_here = curr_here;

        curr_other = curr_other->getNext();

    }

    curr_here.setNext(NULL);

    this->end = curr_here;

}


template <class T> Queue <T>& Queue <T>::operator=(const Queue <T> &other){
    
    if(this != &other){

        Node <T> *curr_here = this->head, *curr_other = other.head;

        while(curr_here != NULL and curr_other != NULL){

            curr_here->setValue(curr_other->getValue());

            curr_here = curr_here->getNext();
            curr_other = curr_other->getNext();

        }

        if(curr_here == NULL and curr_other != NULL){  // not enough space

            Node <T> *new_node;

            while(curr_other != NULL){

                new_node = new Node <T>(curr_other->getValue());
                
                curr_here->setNext(new_node);

                curr_here = new_node;

                curr_other = curr_other->getNext();

            }

        } else if(curr_here != NULL and curr_other == NULL){ // remove remaining

            Node <T> *curr_aux;

            while(curr_here != NULL){

                curr_aux = curr_here->getNext();

                delete curr_here;

                curr_here = curr_aux;

            }

        }

    }

    return *this;

}


template <class T> Queue <T>::~Queue(){
    
    Node <T> *curr = this->head, *aux;

    while(curr != NULL){

        aux = curr->getNext();

        delete curr;

        curr = aux;

    }

}


template <class T> void Queue <T>::push_back(const T &value){
    
    Node <T> *new_node = new Node <T>(value);

    if(not this->empty()){

        this->end->setNext(new_node);

        this->end = new_node;

    } else {

        this->end = this->head = new_node;

    }

}


template <class T> T& Queue <T>::pop_front(){

    Node <T> *curr_head = this->head;
    
    T value = curr_head->getValue();

    this->head = curr_head->getNext();

    delete curr_head;

    if(this->head == NULL){

        this->end = NULL;

    }

    return value;

}


template <class T> T& Queue <T>::front(){

    return this->head->getValue();

}


template <class T> const T& Queue <T>::front() const {
    
    return this->head->getValue();

}


template <class T> bool Queue <T>::empty(){
    
    return this->head == NULL and this->end == NULL;

}

#endif