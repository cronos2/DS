#ifndef VMAXSTACK_CPP
#define VMAXSTACK_CPP

#include <VMaxStack.h>
#include <Vector.h>
#include <Pair.h>


using namespace std;


template <class T> VMaxStack <T>::VMaxStack(){

    Vector < Pair <T> > vector;

    this->vector = vector;

}


template <class T> VMaxStack <T>::VMaxStack(T value){

    Vector < Pair <T> > vector;

    Pair <T> pair(value, value);

    vector.push_back(pair);

    this->vector = vector;

}


template <class T> void VMaxStack <T>::push(T value){

    T prev_max = this->getMax(), curr_max;

    curr_max = prev_max < value ? value : prev_max;

    Pair <T> pair(value, curr_max);

    this->vector.push_back(pair);

}


template <class T> T VMaxStack <T>::pop(){

    return this->vector.pop_back().fst();

}


template <class T> T VMaxStack <T>::getMax(){

    return this->vector.back().snd();

}

#endif