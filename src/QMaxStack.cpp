#ifndef QMAXSTACK_CPP
#define QMAXSTACK_CPP

#include <QMaxStack.h>

using namespace std;


template <class T> QMaxStack <T>::QMaxStack(){
    
    Queue < Pair <T> > queue;

    this->queue = queue;

}


template <class T> QMaxStack <T>::QMaxStack(const T &value){
    
    Queue < Pair <T> > queue(value);

    this->queue = queue;

}


template <class T> void QMaxStack <T>::push(const T &value){

    T curr_max = this->empty() ? value : this->getMax();
    
    Pair <T> pair(value, curr_max < value ? value : curr_max);
    
    Queue < Pair <T> > aux_queue(pair);

    while(not this->queue.empty()){

        pair = this->queue.pop_front();
        aux_queue.push_back(pair);

    }

    this->queue = aux_queue;

}


template <class T> T QMaxStack <T>::pop(){

    return this->queue.pop_front().fst();

}


template <class T> T QMaxStack <T>::getMax(){
    
    const Pair <T> &pair = this->queue.front();

    return pair.snd();

}


template <class T> bool QMaxStack <T>::empty() const {
    
    return this->queue.empty();

}

#endif