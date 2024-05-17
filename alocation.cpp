#include "alocation.h"
#include <iostream>
int* allocateMemory(int n){
    int* array= (int *)malloc(n * sizeof(int));
    if (array==NULL){
        printf("ERROR!\n");
        exit(1);
    }
    return array;
}
void inputValues(int* array, int n){
    for(int i = 0; i<n; i++){
        printf("Value %d: ",i+1);
        scanf("%d",&array[i]);
    }
}
void displayValues(int* array,int n){
    printf("Values in memory:\n");
    for(int i=0;i<n;i++){
        printf("%d",array[i]);
        printf("\n");
    }
}
void freeMemory(int* array){
    free(array);
}
int removeValue(int* array, int n, int value, int remove_all){
    int new_size = n;
    for(int i= 0;i < new_size; ){
        if(array[i] == value){
            for(int j = i; j< new_size; j++){
                array[j] = array[j+1];
            }
            new_size--;
            if (!remove_all){
                break;
            }
        }else{
            i++;
        }
    }
    return new_size;
}