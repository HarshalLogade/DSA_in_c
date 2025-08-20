//Array implemented as an abstract data type

#include <stdio.h>
#include <stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a, int tsize, int uSize){
    //a->total_size = tsize;

    (*a).total_size = tsize;
    (*a).used_size = uSize;
    (*a).ptr = (int *)malloc(tsize * sizeof(int));
}

void showArray(struct myArray * a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}   

void setArray(struct myArray * a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d = ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
    
}

int main(){
    struct myArray arr;
    createArray(&arr, 10, 2);

    printf("Enter elements: \n");
    setArray(&arr);

    printf("Show elements: \n");
    showArray(&arr);
    return 0;
}