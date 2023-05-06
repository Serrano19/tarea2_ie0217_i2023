## Analisis de complejidad de los algoritmos de ordenamiento Bubble Sort, Selection Sort, Insertion Sort y Quick Sort:

## 1. Bubble Sort:

El algoritmo de ordenamiento Bubble Sort tiene una complejidad O(n^2) en el peor de los casos, donde n es el número de elementos a ordenar.

Esto se debe a que el algoritmo compara cada elemento con todos los demás elementos del arreglo, intercambiando los elementos si están en el orden incorrecto. En el peor de los casos, donde el arreglo ya está ordenado en orden inverso, el algoritmo realizará n comparaciones para el primer elemento, n-1 comparaciones para el segundo elemento, n-2 comparaciones para el tercer elemento, y así sucesivamente hasta el último elemento, lo que resulta en un total de n*(n-1)/2 comparaciones.

Por lo tanto, la complejidad del algoritmo de ordenamiento Bubble Sort es O(n^2).

## 2. Selection Sort:

El algoritmo de ordenamiento Selection Sort tiene una complejidad O(n^2) en el peor de los casos, donde n es el número de elementos a ordenar.

Esto se debe a que el algoritmo recorre todo el arreglo en busca del elemento más pequeño, lo intercambia con el primer elemento del arreglo, y luego repite este proceso para el resto del arreglo. En el peor de los casos, donde el arreglo está ordenado en orden inverso, el algoritmo realizará n-1 comparaciones para encontrar el elemento más pequeño en la primera iteración, n-2 comparaciones para encontrar el segundo elemento más pequeño en la segunda iteración, y así sucesivamente hasta la última iteración, que requerirá 1 comparación final. Por lo tanto, el número total de comparaciones es (n-1) + (n-2) + ... + 1, lo que es equivalente a (n*(n-1))/2.

Por lo tanto, la complejidad del algoritmo de ordenamiento Selection Sort es O(n^2).

## 3. Insertion Sort:

El algoritmo de ordenamiento Insertion Sort tiene una complejidad O(n^2) en el peor de los casos, donde n es el número de elementos a ordenar.

Esto se debe a que el algoritmo recorre todo el arreglo y compara cada elemento con los elementos anteriores, desplazando los elementos mayores hacia la derecha hasta encontrar la posición correcta para el elemento actual. En el peor de los casos, donde el arreglo está ordenado en orden inverso, cada elemento tendrá que desplazarse hasta la primera posición, lo que requerirá n-1 comparaciones para el primer elemento, n-2 comparaciones para el segundo elemento, y así sucesivamente hasta el último elemento, lo que resulta en un total de (n*(n-1))/2 comparaciones.

Por lo tanto, la complejidad del algoritmo de ordenamiento Insertion Sort es O(n^2).

## 4. Quick Sort:

El algoritmo de ordenamiento Quick Sort tiene una complejidad O(n^2) en el peor de los casos, donde n es el número de elementos a ordenar.

En cada paso, se comparan todos los elementos del arreglo con un pivote y se divide el arreglo en dos subarreglos: uno con elementos menores que el pivote y otro con elementos mayores que el pivote. Luego, el algoritmo repite el proceso de manera recursiva para cada uno de los subarreglos.

En el peor de los casos, donde el pivote elegido siempre es el elemento más grande o más pequeño, el algoritmo realizará n comparaciones en cada una de las n-1 divisiones, lo que resulta en un total de n^2 comparaciones. Sin embargo, este peor caso es poco común y se puede evitar utilizando diferentes estrategias para elegir el pivote.

Por lo tanto, la complejidad del algoritmo de ordenamiento Quick Sort es O(n^2).

## 5. Como usar los códigos:

Se realizan las cuatro implementaciones de los algoritmos de ordenamiento: Bubble Sort, Selection Sort, Insertion Sort y Quick Sort.

# 1. Para probar el algoritmo de control Bubble Sort:

Ubicado en la carpeta de Algoritmos, ejecute el siguiente comando:

```bash
make TestBubbleSort
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make TestBubbleSort
```

Con este comando se compilan los archivos necesarios para ver la implementacion del algoritmo de control Bubble Sort y seguidamente ejecuta el archivo creado en la carpeta build.

En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ sourceSort.cpp TestBubbleSort.cpp -o .\build\TestBubbleSort
```

```bash
.\build\TestBubbleSort
```

# 2. Para probar el algoritmo de control Selection Sort:

Ubicado en la carpeta de Algoritmos, ejecute el siguiente comando:

```bash
make TestSelectionSort
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make TestSelectionSort
```

Con este comando se compilan los archivos necesarios para ver la implementacion del algoritmo de control Selection Sort y seguidamente ejecuta el archivo creado en la carpeta build.

En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ sourceSort.cpp TestSelectionSort.cpp -o .\build\TestSelectionSort
```

```bash
.\build\TestSelectionSort
```

# 3. Para probar el algoritmo de control Insertion Sort:

Ubicado en la carpeta de Algoritmos, ejecute el siguiente comando:

```bash
make TestInsertionSort
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make TestInsertionSort
```

Con este comando se compilan los archivos necesarios para ver la implementacion del algoritmo de control Insertion Sort y seguidamente ejecuta el archivo creado en la carpeta build.

En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ sourceSort.cpp TestInsertionSort.cpp -o .\build\TestInsertionSort
```

```bash
.\build\TestInsertionSort
```

# 4. Para probar el algoritmo de control Quick Sort:

Ubicado en la carpeta de Algoritmos, ejecute el siguiente comando:

```bash
make TestQuickSort
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make TestQuickSort
```

Con este comando se compilan los archivos necesarios para ver la implementacion del algoritmo de control Quick Sort y seguidamente ejecuta el archivo creado en la carpeta build.

En caso de fallar en Makefile creado, ejecutar los siguientes comandos:

```bash
g++ sourceSort.cpp TestQuickSort.cpp -o .\build\TestQuickSort
```

```bash
.\build\TestQuickSort
```

# 5. Eliminar los ejecutables de la carpeta build:

Para eliminar los ejecutables creados durante la compilacion y ejecucion de los programas, debe estar ubicado en la carpeta Algoritmos y ejecutar el sigiente comando:

```bash
make clean
```

En caso de utilizar windows, ingrese el siguiente comando:

```bash
mingw32-make clean
```

En caso de fallar en Makefile creado, ejecutar el siguiente comando:

```bash
rm .\build\*
```

Con esto se eliminan los archivos ejecutables de la carpeta build.