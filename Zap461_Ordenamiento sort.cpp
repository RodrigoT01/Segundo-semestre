// Ordenamiento sort.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Rodrigo Tapia Robles

#include <iostream>
using namespace std;
//Tamano del arreglo
int arr[10];
//Busqueda binaria
int busquedaBinaria(const int[], int);
int busquedaBinaria(const int arr[10], int clave)
{
    int Iarriba = 10 - 1;
    int Iabajo = 0;
    int Icentro;
    while (Iabajo <= Iarriba)
    {
       Icentro = (Iarriba + Iabajo) / 2;
       if (arr[Icentro] == clave)
            return Icentro;
       else
       if (clave < arr[Icentro])
          Iarriba = Icentro - 1;
       else
       Iabajo = Icentro + 1;
    }
    return -1;
}
//Funcion para mostrar la lista
void mostrarLista(int* a) {
    int i;
    for (i = 0; i < 10; i++) printf("\t[%d]", *(a + i));
    printf("\n");
}
//Funcion para intercambiar valore
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Quicksort para usar el ultimo elemento como pivote
int partition(int arr[10], int low, int high)
{
    int pivot = arr[high];    // pivot 
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        
        if (arr[j] <= pivot)
        {
            i++;   
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//Quicksort algoritmo
void quickSort(int arr[10], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}
//Imprimir la lista en el quicksort
void displayArray(int arr[10], int size)
{
    int i;
    for (i = 0; i < 10; i++)
        cout << arr[i] << "\t";

}
//Merge sort
void merge(int*, int, int, int);
void merge_sort(int* arr, int low, int high)
{
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, high, mid);
    }
}
//Merge sort 
void merge(int* arr, int low, int high, int mid)
{
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}
//Heap sort
void heapify(int arr[10], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}
//Heap sort
void heapSort(int arr[10], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      
        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}
int main()
{
    //Pide al usuario los 10 numeros para el arreglo
    cout << "Este arreglo contara con un 10 espacios" << endl;
    cout << "Ingrese los datos que estaran en el arreglo: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    system("CLS");
    //Se pide al usuario que eliga el metodo con el cual quiere ordenar
    cout << "A continuacion eliga el metodo por el cual quiere ordenar los datos anteriores" << endl;
    cout << "1.Buble Sort, 2.Insertation Sort, 3.Quick Sort, 4.Merge Sort, 5.Heap Sort." << endl;
    int res;
    cin >> res;
    //Variables para los metodos
    int n, l = 10, i, temp;
    int clave = 0;
    int o = sizeof(arr) / sizeof(arr[10]);
    switch (res)
    {
    case 1:
        do {
            n = 0;
            //Recorrer la lista
            for (int i = 1; i < l; i++) {
                //Verificar si los dos valores estan ordenados
                if (*(arr + i - 1) > *(arr + i)) {
                    //Ordenar si es necesario
                    temp = *(arr + i - 1);
                    *(arr + i - 1) = *(arr + i);
                    *(arr + i) = temp;
                    n = i;
                    mostrarLista(arr);
                }
            }
            l = n;
        } while (n != 0);
        cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
        cin >> clave;
        cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arr, clave) << "]" << endl;
        cout << "Fin del programa" << endl;
        return 0;

        break;
    case 2:
        cout << "\nLa lista de los numeros ingresados es \n";
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << "\t";
        }
        for (int k = 1; k < 10; k++)
        {
            int temp = arr[k];
            int j = k - 1;
            while (j >= 0 && temp <= arr[j])
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = temp;
        }
        cout << "\nLa lista ya ordenada con insertation \n";
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
        cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
        cin >> clave;
        cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arr, clave) << "]" << endl;
        cout << "Fin del programa" << endl;
        return 0;

        break;
    case 3:
        cout << "Lista de los numeros ingresada" << endl;
        displayArray(arr, o);
        cout << endl;
        quickSort(arr, 0, o - 1);
        cout << "Lista ya ordenada con quick sort" << endl;
        displayArray(arr, o);
        cout << endl;
        cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
        cin >> clave;
        cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arr, clave) << "]" << endl;
        cout << "Fin del programa" << endl;
        return 0;

        break;
    case 4:
        merge_sort(arr, 0, 10 - 1);
        cout << "Lista ya ordenada con merge sort\n";
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << "\t";
        }
        cout << endl;
        cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
        cin >> clave;
        cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arr, clave) << "]" << endl;
        cout << "Fin del programa" << endl;
        return 0;

        break;
    case 5:
        cout << "Lista de los numeros ingresada" << endl;
        displayArray(arr, o);
        cout << endl;
        heapSort(arr, o);
        cout << "Lista ya ordenada con heap sort" << endl;
        displayArray(arr, o);
        cout << endl;
        cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
        cin >> clave;
        cout << "Su valor se encuentra en arreglo[" << busquedaBinaria(arr, clave) << "]" << endl;
        cout << "Fin del programa" << endl;
        return 0;
        break;

    }
  
}
