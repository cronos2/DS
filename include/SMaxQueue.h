#ifndef SMAXQUEUE_H
#define SMAXQUEUE_H

#include <SQueue.h>
#include <SDeque.h>

using namespace std;


/**
  *
  * @brief TDA SMaxQueue
  *     TDA Queue implementado mediante el TDA Stack (una SQueue y una SDeque)
  * @section Función de abstracción: una SMaxQueue representa una cola
  *
  */

template <class T> class SMaxQueue {
    
    private:

        SQueue <T> queue;
        SDeque <T> maxs;

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        SMaxQueue();

        /**
          *
          * @brief Constructor de la clase
          * @param value el valor que va a almacenar el primer nodo 
          *
          */

        SMaxQueue(const T &value);

        /**
          *
          * @brief Añade un elemento al final de la cola
          * @pre El tipo T debe tener sobrecargado el operador <
          * @param value Valor que va a almacenar ese elemento
          *
          */

        void push_back(const T &value);

        /**
          *
          * @brief Borra (y devuelve) el primer elemento de la cola
          * @return El valor del primer elemento de la cola
          * @pre La cola no debe estar vacía
          *
          */

        T pop_front();

        /**
          *
          * @brief Consulta (sin eliminar) el primer elemento de la cola
          * @return Valor almacenado en el primer nodo de la cola
          *
          */

        T front();

        /**
          *
          * @brief Comprueba si la cola está vacía
          * @return true si está vacía, false si no
          *
          */

        bool empty() const;

        /**
          *
          * @brief Getter de un valor maximal almacenado en la pila actualmente
          * @pre La pila no debe estar vacía
          * @return Ese valor
          *
          */

        T getMax();

};

#include <SMaxQueue.cpp>

#endif