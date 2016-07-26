#include"stack.h"

int top = -1;
int data;
int stack[8];
int max = 8;

int push(int data)
{

   if (!isFull())


   {
    top = (top+1);
    stack[top] = data;

   }
   else
       printf("error::stack is full");

}
int pop()
{
 if (!isFull())
 {

  data = stack[top];
  top = top-1;
  return data;

 }
 else
     printf("Stack is empty nothing to pop");
}
 int isFull()
 {

     if (top == max)
        return 1;
     else
        return 0;

}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;

}
int peek()
{
    return stack[top];
}



