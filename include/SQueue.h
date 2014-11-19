#ifndef SQUEUE_H
#define SQUEUE_H

#include <Stack.h>
#include <Pair.h>

using namespace std;


/**
  *
  * @brief TDA SQueue
  *     TDA Queue implementado mediante el TDA Stack
  * @section Función de abstracción: una Queue representa una sucesión lineal de
  *           elementos ordenados que crece por un extremo y decrece por el otro.
  *
  */

template <class T> class SQueue {
    
    private:

        Stack <T> input, output;

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        SQueue();

        /**
          *
          * @brief Constructor de la clase
          * @param value el valor que va a almacenar el primer nodo 
          *
          */

        SQueue(const T &value);

        /**
          *
          * @brief Añade un elemento al final de la cola
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

};

#include <SQueue.cpp>

#endif