#include <iostream>
#include "alocation.h"
void menu() {
    printf("1. Input values\n");
    printf("2. Display values\n");
    printf("3. Delete values\n");
    printf("0. EXIT\n");
    printf("Select option\n");
}

int main() {
    int *array;
    int option = 0;
    int SIZE = 0;
    do {
        menu();
        scanf("%d", &option);
        switch(option){
            case 0 :
                break;
            case 1 :
                printf("How much values?\n");
                scanf("%d",&SIZE);
                array=allocateMemory(SIZE);
                inputValues(array, SIZE);
                break;
            case 2 :
                displayValues(array, SIZE);
                break;
            case 3 :
                int removing;
                int remove_all;
                printf("Do you want delete all?\n1-yes\n0-no\n");
                scanf("%d",&remove_all);
                if(remove_all == 0) {
                    printf("Which value?\n");
                    scanf("%d", &removing);
                    SIZE = removeValue(array, SIZE, removing, remove_all);
                    break;
                }else{
                    removing=0;
                    SIZE= removeValue(array, SIZE, removing, remove_all);
                    break;
                }
            default:
                printf("Chose the right option\n");
        }
    }while(option !=0);
    freeMemory(array);
    printf("THE END");
    return (0);
}