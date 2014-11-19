#ifndef SQUEUE_CPP
#define SQUEUE_CPP

#include <SQueue.h>
#include <Stack.h>
#include <Pair.h>

using namespace std;


template <class T> SQueue <T>::SQueue(){
    
    Stack <T> input, output;

    this->input = input;
    this->output = output;

}


template <class T> SQueue <T>::SQueue(const T &value){
    
    Stack <T> input(value), output;

    this->input = input;
    this->output = output;

}


template <class T> void SQueue <T>::push_back(const T &value){

    this->input.push(value);

}


template <class T> T SQueue <T>::pop_front(){
    
    if(this->output.empty()){

        while(not this->input.empty()){

            this->output.push(this->input.pop());

        }

    }

    return this->output.pop();

}


template <class T> T SQueue <T>::front(){
    
    T value = this->pop_front();

    this->output.push(value);

    return value;

}


template <class T> bool SQueue <T>::empty() const {
    
    return this->input.empty() and this->output.empty();

}

#endif