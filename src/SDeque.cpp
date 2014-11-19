#ifndef SDEQUE_CPP
#define SDEQUE_CPP

#include <SDeque.h>
#include <Stack.h>

using namespace std;


template <class T> SDeque <T>::SDeque(){
    
    Stack <T> input, output;

    this->input = input;
    this->output = output;

}


template <class T> SDeque <T>::SDeque(const T &value){
    
    Stack <T> input(value), output;

    this->input = input;
    this->output = output;

}


template <class T> void SDeque <T>::push_back(const T &value){

    this->input.push(value);

}


template <class T> void SDeque <T>::push_front(const T &value){

    this->output.push(value);

}


template <class T> T SDeque <T>::pop_back(){
    
    if(this->input.empty()){

        while(not this->output.empty()){

            this->input.push(this->output.pop());

        }

    }

    return this->input.pop();

}


template <class T> T SDeque <T>::pop_front(){
    
    if(this->output.empty()){

        while(not this->input.empty()){

            this->output.push(this->input.pop());

        }

    }

    return this->output.pop();

}


template <class T> T SDeque <T>::front(){
    
    T value = this->pop_front();

    this->output.push(value);

    return value;

}


template <class T> T SDeque <T>::back(){
    
    T value = this->pop_back();

    this->input.push(value);

    return value;

}


template <class T> bool SDeque <T>::empty() const {
    
    return this->input.empty() and this->output.empty();

}

#endif