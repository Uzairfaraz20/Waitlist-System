#include "dynamicArray.h"
#include <cstdio>
#include <cstring>
#include <cctype>
#include <stdlib.h>

int size;
int top;
int current;
int* numberStack;

dynamicArray::dynamicArray()
{
	size = 2;
    current=-1;
    numberStack = (int*)malloc(size * sizeof(int));
    top = 0;
}

void dynamicArray::initialize()
{
	size = 2;
    current=-1;
    numberStack = (int*)malloc(size * sizeof(int));
    top = 0;
}

bool dynamicArray::isEmpty()
{
    if(current == -1) {
        return true;
    }
    return false;
}

void dynamicArray::increaseSize()
{
    size += 2;
    int* temp;
    temp = (int*)malloc(sizeof(int) * size);
    int i;
    for(i = 0; i < size; i++) {
        temp[i] = numberStack[i];
    }
    free(numberStack);
    numberStack = temp;
}

bool dynamicArray::isFull()
{
    if( (current+1) == size) {
        return true;
    }
    return false;
}

void dynamicArray::push(int val)
{
    if(isFull() == true) {
        increaseSize();
    }
    
    current++;
    numberStack[current] = val;
    
}

int dynamicArray::getTop()
{
    return numberStack[current];
}

void dynamicArray::pop()
{
    numberStack[current] = 0;
    current--;
}

void dynamicArray::reset()
{
    free(numberStack);
    initialize();
}

dynamicArray::~dynamicArray()
{
}


