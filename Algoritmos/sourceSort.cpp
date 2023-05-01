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
 * @file main.cpp
 * @brief El programa contiene la imolementacion de distintos algoritmos de ordenamiento.
 * El programa ordena un arreglo de numeros enteros utilizando:
 * Bubble Sort
 * Selection Sort
 * Insertion Sort
 * Quick Sort
*/

#include "headerSort.hpp"
#include <iostream>

/**
 * @brief Ordena un arreglo de enteros usando el algoritmo Bubble Sort.
 * @param arr El arreglo de enteros que se desea ordenar.
 * @param n El tamano del arreglo a ordenar.
*/
void bubbleSort(int arr[], int n) {
    bool swapped = true;
    int i = 0;
    while (swapped) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        i++;
    }
}

/**
 * @brief Ordena un arreglo de enteros usando el algoritmo Selection Sort.
 * @param arr El arreglo de enteros que se desea ordenar.
 * @param n El tamano del arreglo a ordenar.
*/
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }
}

/**
 * @brief Ordena un arreglo de enteros usando el algoritmo Insertion Sort.
 * @param arr El arreglo de enteros que se desea ordenar.
 * @param n El tamano del arreglo a ordenar.
*/
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

/**
 * @brief Divite el arreglo de enteros para el algoritmo Quick Sort.
 * @param arr El arreglo de enteros que se desea ordenar.
 * @param low Representa el indice mas bajo del arreglo.
 * @param high Representa el indice mas alto del arreglo.
 * @return int El indice del elemento utilizado como pivote.
*/
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high-1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i+1], arr[high]);
    return i+1;
}

/**
 * @brief Ordena un arreglo de enteros usando el algoritmo Quick Sort.
 * @param arr El arreglo de enteros que se desea ordenar.
 * @param low Representa el indice mas bajo del arreglo.
 * @param high Representa el indice mas alto del arreglo.
*/
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

/**
 * @brief La funcion main llama los los algoritmos de ordenamiento e imprime el arreglo ordenado.
 * @return 0 si el programa es ejecutado correctamente.
*/
int main() {
    int arr[] = {112, 791, 635, 995, 113, 228, 213, 663, 485, 904, 133, 337, 533, 895, 534, 270, 212,
    345, 622, 382, 955, 539, 67, 453, 519, 193, 226, 405, 854, 612, 53, 570, 467, 42}; /** El arreglo que se desea ordenar. */
    int n = sizeof(arr)/sizeof(arr[0]); /** Se calcula la cantidad de elementos en el arreglo. */
    bubbleSort(arr, n); /** Se llama la funcion bubbleSort para ordenar el arreglo. */
    selectionSort(arr, n); /** Se llama la funcion selectionSort para ordenar el arreglo. */
    insertionSort(arr, n); /** Se llama la funcion insertionSort para ordenar el arreglo. */
    quickSort(arr, 0, n-1); /** Se llama la funcion quickSort para ordenar el arreglo. */
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++) { /** Bucle for para imprimir en pantalla el arreglo rodenado. */
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
