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
 * @file TestInsertionSort.cpp
 * @brief El programa contiene la funcion main para realizar la la prueba del algoritmo
 * de ordenamiento Insertion Sort.
*/

#include "headerSort.hpp"
#include <iostream>

/**
 * @brief La funcion main llama los los algoritmos de ordenamiento e imprime el arreglo ordenado.
 * @return 0 si el programa es ejecutado correctamente.
*/
int main() {

    std::cout << "Algoritmo de ordenamiento Insertion Sort: " << std::endl << std::endl;

    int arr[] = {112, 791, 635, 995, 113, 228, 213, 663, 485, 904, 133, 337, 533, 895, 534, 270, 212,
    345, 622, 382, 955, 539, 67, 453, 519, 193, 226, 405, 854, 612, 53, 570, 467, 42}; /** El arreglo que se desea ordenar. */

    int n = sizeof(arr)/sizeof(arr[0]); /** Se calcula la cantidad de elementos en el arreglo. */

    std::cout << "Arreglo inicial: ";
    for (int i = 0; i < n; i++) { /** Bucle for para imprimir en pantalla el arreglo rodenado. */
        std::cout << arr[i] << " ";
    }

    insertionSort(arr, n); /** Se llama la funcion insertionSort para ordenar el arreglo. */

    std::cout << std::endl << std::endl << "Arreglo ordenado: ";

    for (int i = 0; i < n; i++) { /** Bucle for para imprimir en pantalla el arreglo rodenado. */
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}