#include"stack.h"

int top = -1;
int data;
int stack[5];
int max = 5;

int push(int data)
{

   if (isFull()==1)
    return 0;
   else
    top = (top+1);
    top = data;

}
int pop()
{
 if (!isFull())
 {

  top = data;
  top = top-1;
  return data;

 }
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



