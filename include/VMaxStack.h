#ifndef VMAXSTACK_H
#define VMAXSTACK_H

#include <Vector.h>
#include <Pair.h>

using namespace std;


template <class T> class VMaxStack {
    
    private:

        Vector < Pair <T> > vector;

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        VMaxStack();

        /**
          *
          * @brief Constructor de la clase
          * @param value Valor inicial que va a almacenar la pila
          * @return Una pila con un único valor value
          *
          */

        VMaxStack(T value);

        /**
          *
          * @brief Añade un elemento a la pila
          *
          */

        void push(T value);

        /**
          *
          * @brief Borra el último elemento añadido a la pila
          * @return El valor almacenado en ese elemento
          *
          */

        T pop();

        /**
          *
          * @brief Getter de un valor maximal almacenado en la pila actualmente
          * @return Ese valor
          *
          */

        T getMax();
            

};

#include <VMaxStack.cpp>

#endif