#ifndef LMAXSTACK_CPP
#define LMAXSTACK_CPP

#include <LMaxStack.h>
#include <List.h>

using namespace std;


template <class T> LMaxStack <T>::LMaxStack(){

    List < Pair <T> > list;

    this->list = list;

}


template <class T> LMaxStack <T>::LMaxStack(T value){

    Pair <T> pair(value, value);

    List < Pair <T> > list(pair);

    this->list = list;

}

template <class T> void LMaxStack <T>::push(T value){
    
    T curr_max;

    if(not this->list.empty()){
        
        T prev_max = this->list.getHead()->getValue().snd();
        curr_max = prev_max < value ? value : prev_max;
    
    } else {

        curr_max = value;

    }

    Pair <T> pair(value, curr_max);

    this->list.unshift(pair); 

}

template <class T> T LMaxStack <T>::pop(){
    
    return this->list.shift().fst(); 

}

template <class T> T LMaxStack <T>::getMax(){
    
    return this->list.getHead().snd(); 

}

#endif