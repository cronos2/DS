#ifndef NODE_H
#define NODE_H

using namespace std;


/**
  *
  * @brief TDA Node
  *     Nodo de una lista enlazada simple.
  * @section Función de abstracción: un nodo representa un elemento de 
  *             lista enlazada simple.
  *
  */

template <class T> class Node {

    private:

        T value;
        Node <T>* next;

    public:

        /**
          *
          * @brief Constructor de la clase
          * @param value Valor que va a almacenar el nodo
          * @param next Puntero al siguiente nodo de la lista (NULL por defecto)
          * @return Un nodo almacenando el valor value.
          *
          */

        Node(const T &value, Node <T> *next);

        /**
          *
          * @brief Getter del siguiente nodo de la lista
          * @return Puntero al siguiente nodo
          *
          */

        Node <T>* getNext() const {

            return this->next;

        }

        /**
          *
          * @brief Setter del siguiente nodo de la lista
          * @param next Puntero al siguiente nodo
          *
          */

        void setNext(Node <T> *next){

            this->next = next;

        }

        /**
          *
          * @brief Getter del valor almacenado
          * @return Valor almacenado por el nodo
          *
          */

        const T& getValue() const {

            return this->value;

        }

        /**
          *
          * @brief Setter del valor del nodo
          * @param value Valor del nodo
          *
          */

        void setValue(T value){

            this->value = value;

        }

};

#include <Node.cpp>

#endif