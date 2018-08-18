#ifndef DYNAMICARRAY2_H
#define DYNAMICARRAY2_H

class dynamicArray2
{
    
private:
    int opSize;
    char opTop;
    char* opOperatorStack; 
    void increaseOPSize();
    bool isOPFull();
    
    
public:
    dynamicArray2();
    ~dynamicArray2();
    void initializeOP();
    bool isOPEmpty();
    void opPush(char val);
    char getOPTop();
    void opPop();
    void  resetOP();
    

};

#endif // DYNAMICARRAY2_H
