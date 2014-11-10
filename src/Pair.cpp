#ifndef PAIR_CPP
#define PAIR_CPP

#include <Pair.h>


using namespace std;


template <class T> Pair <T>::Pair(){

    T fst, snd;

    this->first = fst;
    this->second = snd;

}


template <class T> Pair <T>::Pair(T first, T second){

    this->first = first;
    this->second = second;

}

#endif