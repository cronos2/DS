#ifndef QUEUE_H
#define QUEUE_H

#include <Node.h>

using namespace std;


/**
  *
  * @brief TDA Queue
  * 
  * Una instancia del TDA Queue representa una colección de elementos ordenados
  * con política FIFO
  *
  */

template <class T> class Queue {
    
    private:

        Node <T> *head, *end;

        void clear(Node <T> *from);

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        Queue();

        /**
          *
          * @brief Constructor de la clase
          * @param value el valor que va a almacenar el primer nodo
          * @return Una cola cuyo único elemento es un nodo de valor value
          *
          */

        Queue(const T &value);

        /**
          *
          * @brief Constructor de copia de la clase
          * @param other instancia de la clase que queremos copiar
          * @return Una copia profunda de other
          *
          */

        Queue(const Queue <T> &other);

        /**
          *
          * @brief Operador de asignación de la clase
          * @param other instancia de la clase a la que queremos asignar this
          * @return *this
          *
          */

        Queue <T>& operator=(const Queue <T> &other);
        
        /**
          *
          * @brief Destructor de la clase
          *
          */

        ~Queue();

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

        T& front();

        const T& front() const;

        /**
          *
          * @brief Comprueba si la cola está vacía
          * @return true si está vacía, false si no
          *
          */

        bool empty() const;
                  
                    
};

#include <Queue.cpp>

#endif