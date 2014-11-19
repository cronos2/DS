#ifndef SDEQUE_H
#define SDEQUE_H

#include <Stack.h>

using namespace std;


/**
  *
  * @brief TDA SDeque
  *     TDA Deque implementado mediante el TDA Stack
  * @section Función de abstracción: un Deque representa una sucesión lineal de
  *           elementos ordenados que puede crecer y decrecer en ambos sentidos.
  *
  */

template <class T> class SDeque {
    
    private:

        Stack <T> input, output;

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        SDeque();

        /**
          *
          * @brief Constructor de la clase
          * @param value el valor que va a almacenar el primer nodo 
          *
          */

        SDeque(const T &value);

        /**
          *
          * @brief Añade un elemento al final de la cola
          * @param value Valor que va a almacenar ese elemento
          *
          */

        void push_back(const T &value);

        /**
          *
          * @brief Añade un elemento al principio de la cola
          * @param value Valor que va a almacenar ese elemento
          *
          */

        void push_front(const T &value);

        /**
          *
          * @brief Borra (y devuelve) el último elemento de la cola
          * @return El valor del último elemento de la cola
          * @pre La cola no debe estar vacía
          *
          */

        T pop_back();

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
          * @brief Consulta (sin eliminar) el último elemento de la cola
          * @return Valor almacenado en el último nodo de la cola
          *
          */

        T back();

        /**
          *
          * @brief Comprueba si la cola está vacía
          * @return true si está vacía, false si no
          *
          */

        bool empty() const;

};

#include <SDeque.cpp>

#endif