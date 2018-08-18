#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H

class dynamicArray
{
    
private:
    int size;
    int top;
    int* numberStack; 
    void increaseSize();
    bool isFull();
    
    
public:
    dynamicArray();
    ~dynamicArray();
    void initialize();
    bool isEmpty();
    void push(int val);
    int getTop();
    void pop();
    void reset();
    

};



#endif // DYNAMICARRAY_H
