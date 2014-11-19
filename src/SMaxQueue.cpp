#ifndef SMAXQUEUE_CPP
#define SMAXQUEUE_CPP

#include <SQueue.h>
#include <SDeque.h>
#include <SMaxQueue.h>

using namespace std;


template <class T> SMaxQueue <T>::SMaxQueue(){
    
    SQueue <T> queue;
    SDeque <T> maxs;

    this->queue = queue;
    this->maxs = maxs;

}


template <class T> SMaxQueue <T>::SMaxQueue(const T &value){
    
    SQueue <T> queue(value);
    SDeque <T> maxs(value);

    this->queue = queue;
    this->maxs = maxs;

}


template <class T> void SMaxQueue <T>::push_back(const T &value){

    this->queue.push_back(value);

    while(not this->maxs.empty() and this->maxs.back() < value){

        this->maxs.pop_back();

    }

    this->maxs.push_back(value);

}


template <class T> T SMaxQueue <T>::pop_front(){
    
    T value = this->queue.pop_front();

    if(this->maxs.front() == value){

        this->maxs.pop_front();

    }

    return value;

}


template <class T> T SMaxQueue <T>::front(){

    return this->queue.front();

}


template <class T> bool SMaxQueue <T>::empty() const {
    
    return this->queue.empty();

}


template <class T> T SMaxQueue <T>::getMax(){

    return this->maxs.back();

}

#endif