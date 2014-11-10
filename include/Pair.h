#ifndef PAIR_H
#define PAIR_H

/**
  *
  * @brief TDA Pair: Una pareja de valores de tipo T
  *
  */

template <class T> class Pair {
    
    private:

        T first, second;

    public:

        /**
          *
          * @brief Constructor vacío de la clase
          *
          */

        Pair();

        /**
          *
          * @brief Constructor de la clase
          * @param first, second Valores a almacenar
          * @return Una pareja que contiene ambos valores
          *
          */

        Pair(T first, T second);

        /**
          *
          * @brief Getter del primer valor de la pareja
          * @return Valor almacenado en la primera componente
          *
          */

        T fst(){

          return this->first;

        }

        /**
          *
          * @brief Getter del segundo valor de la pareja
          * @return Valor almacenado en la segunda componente
          *
          */

        T snd(){

          return this->second;

        }

};

#include <Pair.cpp>

#endif