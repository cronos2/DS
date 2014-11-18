#ifndef QMAXSTACK_H
#define QMAXSTACK_H

#include <Queue.h>
#include <Pair.h>

using namespace std;


/**
  *
  * @brief TDA QMaxStack
  *         TDA Stack implementado mediante el TDA Queue
  * @section Función de abstracción: un LMaxStack representa una pila
  *
  */
    


template <class T> class QMaxStack {
    
    private:

        Queue < Pair <T> > queue;

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        QMaxStack();

        /**
          *
          * @brief Constructor de la clase
          * @param value Valor inicial que va a almacenar la pila
          * @return Una pila con un único valor value
          *
          */

        QMaxStack(const T &value);

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

        T getMax();

        /**
          *
          * @brief Comprueba si la pila está vacía
          * @return true si está vacía, false si no
          *
          */

        bool empty() const;

};

#include <QMaxStack.cpp>

#endif