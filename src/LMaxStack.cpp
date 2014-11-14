#ifndef LMAXSTACK_CPP
#define LMAXSTACK_CPP

#include <LMaxStack.h>
#include <List.h>

using namespace std;


template <class T> LMaxStack <T>::LMaxStack(){

    List < Pair <T> > list;

    this->list = list;

}


template <class T> LMaxStack <T>::LMaxStack(const T &value){

    Pair <T> pair(value, value);

    List < Pair <T> > list(pair);

    this->list = list;

}


template <class T> void LMaxStack <T>::push(const T &value){

    T curr_max = this->empty() ? value : this->getMax();

    Pair <T> pair(value, curr_max < value ? value : curr_max);

    this->list.unshift(pair); 

}


template <class T> T LMaxStack <T>::pop(){
    
    return this->list.shift().fst(); 

}


template <class T> T LMaxStack <T>::getMax() const {
    
    return this->list.getHead()->getValue().snd(); 

}


template <class T> bool LMaxStack <T>::empty() const {
    
    return this->list.empty();

}


#endif