#include "dynamicArray2.h"
#include <cstdio>
#include <cstring>
#include <cctype>
#include <stdlib.h>

int opSize;
int opCurrent;
char opTop;
char* opOperatorStack;

dynamicArray2::dynamicArray2()
{
    opSize = 2;
    opCurrent = -1;
    opOperatorStack = (char*)malloc(opSize * sizeof(char));
    opTop = 0;
}

void dynamicArray2::initializeOP()
{
    opSize = 2;
    opCurrent = -1;
    opOperatorStack = (char*)malloc(opSize * sizeof(char));
    opTop = 0;
}

bool dynamicArray2::isOPEmpty()
{

    if(opCurrent == -1) {

        return true;
    }
    return false;
}

void dynamicArray2::increaseOPSize()
{
    opSize += 2;
    char* temp;
    temp = (char*)malloc(sizeof(char) * opSize);
    int i;
    for(i = 0; i < opSize; i++) {
        temp[i] = opOperatorStack[i];
    }
    free(opOperatorStack);
    opOperatorStack = temp;
}

bool dynamicArray2::isOPFull()
{
    if( (opCurrent + 1) == opSize) {
        return true;
    }
    return false;
}

void dynamicArray2::opPush(char val)
{
    if(isOPFull() == true) {
        increaseOPSize();
    }
    
    opCurrent++;
    opOperatorStack[opCurrent] = val;
    
}

char dynamicArray2::getOPTop()
{
    
    return opOperatorStack[opCurrent];
}

void dynamicArray2::opPop()
{
    opOperatorStack[opCurrent] = 0;
    opCurrent--;
}

void dynamicArray2::resetOP()
{
    free(opOperatorStack);
    initializeOP();
}

dynamicArray2::~dynamicArray2()
{
}
