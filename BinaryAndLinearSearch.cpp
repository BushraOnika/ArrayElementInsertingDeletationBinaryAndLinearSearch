
#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        //START WITH THE MIDDLE OF THE ARRAY IN BINARY SEARCH
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){ 
            //IF THE MID ELEMENT IS LESS THAN THE GIVEN SEARCHING ELEMENT CHANGING THE LOW AND HIGH
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}

int main(){
    // Unsorted array for linear search
    //int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);

    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    //   printf("The element %d was found at index %d \n", element, searchIndex);
    cout<<"The element "<<element<<" was found at index"<<searchIndex<<"\n";
    return 0;
}

