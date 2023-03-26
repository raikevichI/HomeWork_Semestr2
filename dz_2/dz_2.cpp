// dz_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stack.hpp"
#include <string>

int main()
{
    StackArray<int> stack1(6);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.pop();
    stack1.pop();
    stack1.pop();
    StackArray<int> stack2(stack1); // конструктор копирования
 
    return 0;
}

