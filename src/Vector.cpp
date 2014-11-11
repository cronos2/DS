#include <Vector.h>

using namespace std;


/* PRIVATE */


typename <class T> void Vector::copy(T* from, T* to){

    int delta = to - from;

    if(delta > this->capacity){

        this->resize(2 * delta);

    }

    for(int i = 0; i < delta; i++){

        this->array[i] = *(from + i);

    }

    this->size = delta;

}


typename <class T> void Vector::resize(int space){

    T* new_array = new T(space);

    int limit = min(this->size, space);

    for(int i = 0; i < limit; i++){

        new_array = this->array[i];

    }

    this->clear();

    this->array = new_array;

    this->capacity = space;

    this->size = limit;

}


typename <class T> void Vector::clear(){

    delete[] this->array;

    this->array = NULL;
    this->size = 0;
    this->capacity = 0;

}


/* PUBLIC */


typename <class T> Vector::Vector(){

    this->size = 0;
    this->capacity = Vector::BASE_CAPACITY;

    this->array = NULL;

}


typename <class T> Vector::Vector(T* array, int size){

    this->array = new T(2 * size);
    this->capacity = 2 * size;

    this->copy(array, array + size);

}


typename <class T> Vector::Vector(const Vector <T> &other){

    T* from = other.array;

    this->copy(from, from + other.size);

}


typename <class T> Vector <T>& Vector::operator=(const Vector <T> &other){

    if(this != &other){

        T* from = other.array;

        this->copy(from, from + other.size);

    }

    return *this;

}


typename <class T> Vector::~Vector(){

    this->clear();

}


typename <class T> int Vector::size(){

    return this->size;

}


typename <class T> bool Vector::empty(){

    return this->size == 0;

}


typename <class T> T& Vector::operator[](int index){

    return this->array[index];

}


typename <class T> const T& Vector::operator[](int index) const {

    return this->array[index];

}


typename <class T> T& Vector::front(){

    return this->array[0];

}


typename <class T> T& Vector::back(){

    return this->array[this->size - 1];

}


typename <class T> void Vector::push_back(const T& value){

    if(this->size == this->capacity){

        this->resize(2 * this->capacity);

    }

    this->array[this->size] = value;

    this->size++;

}


typename <class T> T& Vector::pop_back(){

    return this->array[--this->size];

}