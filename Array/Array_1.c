//Array operations- Insertion, deletion, traversal and searching

#include <stdio.h>

//Traversal
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

//Insertion
int Index_Insertion(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] =  element;
    return 1;
}

int main(){
    int arr[100] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    display(arr, size);
    
    int element = 27, index = 4;
    Index_Insertion(arr, size, element, 100, index);
    size++;
    display(arr, size);

    return 0;
}
