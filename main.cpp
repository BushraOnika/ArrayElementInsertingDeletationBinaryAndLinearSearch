#include <iostream>

#include <iostream>
using namespace std;
void display(int arr[], int n){
    // Code for Traversal : Visiting every element of an array once is known as traversing the array.
    for (int i = 0; i < n; i++)
    {
        //  printf("%d ", arr[i]);
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    // code for Insertion : An element can be inserted in an array at a specific position.
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
void indDeletion(int arr[], int size, int index)
{
    // code for Deletion : An element at a specified position can be deleted,
    // creating a void that needs to be fixed by shifting all the elements to their adjacent left, as illustrated in the figure below.
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main() {
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=1;
    display(arr, size);

    indInsertion(arr, size, element, 100, index);
    size +=1;
    display(arr, size);

    int arr2[100] = {7, 8, 12, 27, 88};
    int size2 = 5, element2 = 45, index2=0;
    display(arr2,size2);
    indDeletion(arr2, size2, index2);
    size2 -= 1;
    display(arr2, size2);
    return 0;
}
