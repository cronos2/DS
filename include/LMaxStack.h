#ifndef LMAXSTACK_H
#define LMAXSTACK_H

#include <List.h>
#include <Pair.h>


/**
  *
  * @brief TDA LMaxStack
  *     TDA Stack implementado mediante el TDA List
  * @section Función de abstracción: un LMaxStack representa una pila
  *
  */

template <class T> class LMaxStack {
    
    private:

        List <Pair <T> > list;

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

        LMaxStack(T value);

        /**
          *
          * @brief Constructor de copia de la clase
          * @param other instancia de la clase que queremos copiar
          * @return Una copia profunda de other
          *
          */

        // LMaxStack(const LMaxStack &other);

        /**
          *
          * @brief Operador de asignación de la clase
          * @param other instancia de la clase a la que queremos asignar this
          * @return *this
          *
          */

        // List <T>& operator=(const LMaxStack &other);

        /**
          *
          * @brief Destructor de la clase
          *
          */

        // ~LMaxStack();

        /**
          *
          * @pre El tipo T debe tener sobrecargado el operador <
          * @brief Añade un elemento a la pila
          * @param value valor que vamos a añadir
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

#include <LMaxStack.cpp>

#endif