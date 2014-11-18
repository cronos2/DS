#ifndef LMAXSTACK_H
#define LMAXSTACK_H

#include <List.h>
#include <Pair.h>

using namespace std;


/**
  *
  * @brief TDA LMaxStack
  *     TDA Stack implementado mediante el TDA List
  * @section Función de abstracción: un LMaxStack representa una pila
  *
  */

template <class T> class LMaxStack {
    
    private:

        List < Pair <T> > list;

    public:

        /**
          *
          * @brief Constructor vacío de la clase
          *
          */

        LMaxStack();

        /**
          *
          * @brief Constructor de la clase
          * @param value Valor inicial que va a almacenar la pila
          * @return Una pila con un único valor value
          *
          */

        LMaxStack(const T &value);

        /**
          *
          * @pre El tipo T debe tener sobrecargado el operador <
          * @brief Añade un elemento a la pila
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

        /**
          *
          * @brief Comprueba si la pila está vacía
          * @return true si está vacía, false si no
          *
          */

        bool empty() const;

};

#include <LMaxStack.cpp>

#endif