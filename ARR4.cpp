#include <iostream>
using namespace std;

struct Array
{
    int* A;
    int length;
    int size;
};
// To merge two arrays.
/*
struct Array* Merge(struct Array* arr1, struct Array* arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array* arr3 = new Array;
    arr3->A = new int[arr1->length + arr2->length];
    arr3->length = arr1->length + arr2->length;
    arr3->size = arr1->size + arr2->size;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else
        {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    for (; i < arr1->length; i++)   // To enter other values from arr1 in arr3.
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (; j < arr2->length; j++)   // To enter other values from arr2 in arr3.
    {
        arr3->A[k++] = arr2->A[j];
    }

    return arr3;
}
*/

// Union of two sets.
/*
struct Array* Union(struct Array* arr1, struct Array* arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array* arr3 = new Array;
    arr3->A = new int[arr1->length + arr2->length]; // Allocate enough space
    arr3->size = arr1->size + arr2->size;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    for (; i < arr1->length; i++)   // To enter other values from arr1 in arr3
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (; j < arr2->length; j++)   // To enter other values from arr2 in arr3
    {
        arr3->A[k++] = arr2->A[j];
    }

    arr3->length = k; // Set the correct length

    return arr3;
}
*/

// To Find Intersection between two arrays.
/*
struct Array* Intersection(struct Array* arr1, struct Array* arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array* arr3 = new Array;
    arr3->A = new int[arr1->length + arr2->length]; // Allocate enough space
    arr3->size = arr1->size + arr2->size;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            j++;
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k; // Set the correct length

    return arr3;
}
*/

// To find difference between two arrys.
/*
struct Array* Difference(struct Array* arr1, struct Array* arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array* arr3 = new Array;
    arr3->A = new int[arr1->length + arr2->length]; // Allocate enough space
    arr3->size = arr1->size + arr2->size;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr1->A[i] > arr2->A[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }

    for (; i < arr1->length; i++)   // To enter other values from arr1 in arr3
    {
        arr3->A[k++] = arr1->A[i];
    }

    arr3->length = k; // Set the correct length

    return arr3;
}
*/
void Display(struct Array arr)
{
    cout << "The Elements Are: ";
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Array arr1 = { new int[5]{1, 2, 4, 6, 13}, 5, 10 };
    struct Array arr2 = { new int[5]{3, 4, 5, 9, 13}, 5, 10 };
    struct Array* arr3;
    
    // arr3 = Merge(&arr1, &arr2);
    // arr3 = Union(&arr1, &arr2);
    // arr3 = Intersection(&arr1, &arr2);
    // arr3= Difference(&arr1,&arr2);
    Display(*arr3);

    // Clean up dynamically allocated memory
    delete[] arr1.A;
    delete[] arr2.A;
    delete[] arr3->A;
    delete arr3;

    return 0;
}