#include"stack.h"

int top = -1;
int data;
int stack[];


int push(int data)
{

    top = top+1;
    stack[top] = data;



}
int pop()
{


  data = stack[top];
  top = top-1;
  return data;



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



