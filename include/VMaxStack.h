#ifndef VMAXSTACK_H
#define VMAXSTACK_H

#include <Vector.h>
#include <Pair.h>

using namespace std;


/**
  *
  * @brief TDA VMaxStack
  *     TDA Stack implementado mediante el TDA Vector
  * @section Función de abstracción: un VMaxStack representa una pila
  *
  */

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

        VMaxStack(const T &value);

        /**
          *
          * @brief Añade un elemento a la pila
          * @pre El tipo T debe tener sobrecargado el operador <
          * @param value valor que vamos a añadir
          *
          */

        void push(const T &value);

        /**
          *
          * @brief Borra el último elemento añadido a la pila
          * @pre La pila no debe estar vacía
          * @return El valor almacenado en ese elemento
          *
          */

        T pop();

        /**
          *
          * @brief Getter de un valor maximal almacenado en la pila actualmente
          * @pre La pila no debe estar vacía
          * @return Ese valor
          *
          */

        T getMax() const;       

        bool empty() const;

};

#include <VMaxStack.cpp>

#endif