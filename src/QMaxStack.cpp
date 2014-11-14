#ifndef QMAXSTACK_CPP
#define QMAXSTACK_CPP

#include <QMaxStack.h>

using namespace std;


template <class T> QMaxStack <T>::QMaxStack(){
    
    Queue < Pair <T> > Q1, Q2;

    this->Q1 = Q1;
    this->Q2 = Q2;

}


template <class T> QMaxStack <T>::QMaxStack(const T &value){
    
    Queue < Pair <T> > queue(value), Q2;

    this->Q1 = queue;
    this->Q2 = Q2;

}


template <class T> void QMaxStack <T>::push(const T &value){

    T curr_max = this->empty() ? value : this->getMax();

    Pair <T> pair(value, curr_max < value ? curr_max : value);

    this->Q1.push_back(pair);

}


template <class T> T QMaxStack <T>::pop(){
    
    Pair <T> pair;

    while(true){

        pair = this->Q1.pop_front();

        if(this->Q1.empty()){

            Queue < Pair <T> > new_queue;
            
            this->Q1 = this->Q2;
            this->Q2 = new_queue;

            return pair.fst();

        } else {

            this->Q2.push_back(pair);

        }

    }

}


template <class T> T QMaxStack <T>::getMax(){
    
    Pair <T> pair = this->pop();

    this->push(pair);

    return pair.snd();

}


template <class T> bool QMaxStack <T>::empty() const {
    
    return this->Q1.empty();

}

#endif