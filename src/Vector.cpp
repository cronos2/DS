#ifndef VECTOR_CPP
#define VECTOR_CPP

#include <stddef.h>

#include <Vector.h>

using namespace std;


/* PRIVATE */


template <class T> void Vector <T>::copy(T* from, T* to){

    int delta = to - from;

    if(delta > this->capacity){

        this->resize(2 * delta);

    }

    for(int i = 0; i < delta; i++){

        this->array[i] = *(from + i);

    }

    this->_size = delta;

}


template <class T> void Vector <T>::resize(int space){

    T* new_array = new T[space];

    int limit = min(this->_size, space);

    for(int i = 0; i < limit; i++){

        new_array[i] = this->array[i];

    }

    this->clear();

    this->array = new_array;
    this->capacity = space;
    this->_size = limit;

}


template <class T> void Vector <T>::clear(){

    delete[] this->array;

    this->array = NULL;
    this->_size = 0;
    this->capacity = 0;

}


/* PUBLIC */


template <class T> Vector <T>::Vector(){

    this->_size = 0;
    this->capacity = Vector <T>::BASE_CAPACITY;

    this->array = new T[this->capacity];

}


template <class T> Vector <T>::Vector(T* array, int size){

    this->array = new T(2 * size);
    this->capacity = 2 * size;

    this->copy(array, array + size);

}


template <class T> Vector <T>::Vector(const Vector <T> &other){

    T* from = other.array;

    this->array = new T[other._size];

    this->copy(from, from + other._size);

}


template <class T> Vector <T>& Vector <T>::operator=(const Vector <T> &other){

    if(this != &other){

        T* from = other.array;

        this->copy(from, from + other._size);

    }

    return *this;

}


template <class T> Vector <T>::~Vector(){

    this->clear();

}


template <class T> int Vector <T>::size() const {

    return this->_size;

}


template <class T> bool Vector <T>::empty() const {

    return this->_size == 0;

}


template <class T> T& Vector <T>::operator[](int index){

    return this->array[index];

}


template <class T> const T& Vector <T>::operator[](int index) const {

    return this->array[index];

}


template <class T> T& Vector <T>::front() const {

    return this->array[0];

}


template <class T> T& Vector <T>::back() const {

    return this->array[this->_size - 1];

}


template <class T> void Vector <T>::push_back(const T& value){

    if(this->_size == this->capacity){

        this->resize(2 * this->capacity);

    }

    this->array[this->_size] = value;

    this->_size++;

}


template <class T> T Vector <T>::pop_back(){

    return this->array[--this->_size];

}

#endif