#ifndef VECTOR_H
#define VECTOR_H

using namespace std;


/**
  *
  * @brief TDA Vector: Vector dinámico
  * @section Función de abstracción: un vector representa una colección
  *           de objetos de tamaño desconocido y variable.
  *
  */
  

template <class T> class Vector {

    private:

        static const int BASE_CAPACITY = 20;

        int _size, capacity;

        T* array;

        /**
          *
          * @brief Copia desde @e from hasta @e to a @e array
          * @param from Desde dónde empieza a copiar
          * @param to Hasta dónde sigue copiando
          * @pre from < to
          *
          */

        void copy(T* from, T* to);

        /**
          *
          * @brief Reserva espacio para el vector
          * @param space Cuántas posiciones reservar
          *
          */

        void resize(int space);

        /**
          *
          * @brief Libera la memoria reservada por el vector
          *
          */

        void clear();

    public:

        /**
          *
          * @brief Constructor por defecto de la clase
          *
          */

        Vector();

        /**
          *
          * @brief Constructor de la clase
          * @param array puntero a un array de elementos T
          * @param size Tamaño de @e array
          *
          */

        Vector(T* array, int size);

        /**
          *
          * @brief Constructor de copia de la clase
          * @param other instancia de la clase que queremos copiar
          * @return Una copia profunda de other
          *
          */

        Vector(const Vector <T> &other);

        /**
          *
          * @brief Operador de asignación de la clase
          * @param other instancia de la clase a la que queremos asignar this
          * @return *this
          *
          */

        Vector <T>& operator=(const Vector <T> &other);
        
        /**
          *
          * @brief Destructor de la clase
          *
          */

        ~Vector();

        /**
          *
          * @brief Getter del número de elementos que contiene el vector
          * @return Total de elementos contenidos
          *
          */

        int size();

        /**
          *
          * @brief Comprueba si el vector está vacío
          * @return true si está vacío, false si no
          *
          */

        bool empty();

        /**
          *
          * @brief Sobrecarga del operador de acceso de la clase
          * @param index Índice del elemento al que queremos acceder [0, size[
          * @return El valor almacenado en ese índice
          *
          */

        T& operator[](int index);

        const T& operator[](int index) const;

        /**
          *
          * @brief Devuelve el primer elemento del vector
          * @pre El vector no debe estar vacío
          * @return El primer elemento del vector
          *
          */

        T& front();

        /**
          *
          * @brief Devuelve el último elemento del vector
          * @pre El vector no debe estar vacío
          * @return El último elemento del vector
          *
          */

        T& back();

        /**
          *
          * @brief Añade un elemento al final del vector
          * @param value Elemento a añadir
          *
          */

        void push_back(const T& value);

        /**
          *
          * @brief Borra y devuelve el último elemento del vector
          * @return Último elemento del vector
          *
          */

        T& pop_back();

};

#include <Vector.cpp>

#endif