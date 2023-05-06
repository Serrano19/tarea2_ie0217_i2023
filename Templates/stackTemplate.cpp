/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

/**
 * @file stackTemplate.cpp
 * El archivo tiene una implementación de una estructura de datos de pilas usando plantillas.
 * Esta clase pila contiene operaciones básicas como push, pop, clear, empty, size y foreach.
*/
#include <iostream> /** Necesario para entrada/salida estándar.*/
#include <vector> /** Necesario para implementar la estructura de datos de tipo vector (se utiliza para implementar la pila).*/
#include <algorithm> /** Necesario para utilizar la función std::for_each.*/
#include <stdexcept>  /** Necesario para lanzar excepciones como std::out_of_range de la función pop.*/
#include <functional> /** Necesario para utilizar std::function de la función foreach.*/

/**
 * @brief La clase se implementa utilizando un vector para almacenar los datos.
 * La clase tiene una plantilla para admitir elementos de cualquier tipo de datos.
*/
template<typename T>
class Stack {
private:
  std::vector<T> data_;

public:

/**
 * @brief Agrega un elemento en la parte superior de la pila.
 * @param value El valor del elemento que se agrega en la pila.
*/
  void push(T value) {
    data_.push_back(value);
  }

/**
 * @brief Elimina y retorna el elemento superior de la pila.
 * Si la pila se encuentra vacía, la función lanza la excepción out_of_range.
 * @return El elemento superior de la pila.
 * @throw out_of_range si la pila se encuentra vacía.
*/
  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back();
    return value;
  }

/**
 * @brief Elimina todos los elementos de la pila.
*/
  void clear() {
    data_.clear();
  }

/**
 * @brief Retorna true si la pila se encuentra vacía.
 * @return true si la pila se encuentra vacía y false si no está vacía.
*/
  bool empty() const {
    return data_.empty();
  }

/**
 * @brief Retorna la cantidad de elementos que contiene la pila.
 * @return Número de elementos que hay en la pila.
*/
  std::size_t size() const {
    return data_.size();
  }

/**
 * @brief Se aplica una función a cada elemento de la pila.
 * Aplica la función dada a cada elemento de la pila usando for_each.
 * @param func La función que se aplicará a cada elemento de la pila.
*/
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

/**
 * @brief El programa crea una pila de enteros, inserta tres valores en la pila, imprime el
 * tamaño de la pila y luego usa una función foreach para imprimir cada valor en la pila.
 * Luego procede a extraer todos los valores de la pila usando un bucle while,
 * imprimiendo cada valor emergente. Finalmente, imprime el tamaño de la pila después
 * de que se hayan extraído todos los valores.
 * @return int Devuelve 0 al completar con éxito el programa.
*/
int main() {
  Stack<int> s; /** Crea un objeto pila de tipo entero.*/
  s.push(2021); /** Se inserta el primer valor en la pila.*/
  s.push(2054); /** Se inserta el segundo valor en la pila.*/
  s.push(6524); /** Se inserta el tercer valor en la pila.*/

  std::cout << "Stack size: " << s.size() << std::endl; /** Imprime en pantalla la cantidad de elementos en la pila.*/

  s.foreach([](int& value) { /** Aplica la función a cada elemento de la pila, imprimiendo cada valor en pantalla.*/
    std::cout << "Value: " << value << std::endl;
  });

  try {/** Con un bloque try-catch se captura cualquier excepción que pueda generar la función pop().*/
    while (!s.empty()) { /** Se extraen todos los elementos de la pila hasta que quede vacía.*/
      int value = s.pop(); /** Extrae el elemento superior de la pila y lo almacena en la variable value.*/
      std::cout << "Popped value: " << value << std::endl; /** Imprime el valor almacenado en value.*/
    }
    std::cout << "Stack size: " << s.size() << std::endl; /** Imprime el tamaño de la pila despues de eliminar los valores de la misma.*/
  } catch (const std::exception& e) { /** Captura cualquier excepción lanzada por la función pop().*/
    std::cerr << "Exception: " << e.what() << std::endl; /** Imprime el mensaje de error de la excepción capturada en pantalla.*/
  }

  return 0;
}
