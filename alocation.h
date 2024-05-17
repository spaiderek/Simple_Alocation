#ifndef SIMPLEALOCATION_ALOCATION_H
#define SIMPLEALOCATION_ALOCATION_H

int* allocateMemory(int n);
void inputValues(int* array, int n);
void displayValues(int* array,int n);
int removeValue(int* array, int n, int value, int remove_all);
void freeMemory(int* array);
#endif