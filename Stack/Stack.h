#ifndef STACK_H
#define STACK_H

template <class Type>
class Stack
{
public:
    const Stack<Type>& operator=(const Stack<Type>&);

    void initializeStack();

    bool isEmptyStack() const;
    bool isFullStack() const;
    void push(const Type& newItem);
    Type top() const;
    void pop();
    Stack(int stackSize = 100);
    Stack(const Stack<Type>& otherStack);
    void destroyStack();
    ~Stack();
private:
    int maxStackSize;
    int stackTop;
    Type *list;
    void copyStack(const Stack<Type>& otherStack);
};

#endif // STACK_H
