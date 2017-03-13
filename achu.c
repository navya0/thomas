#include<stdio.h>
#define max 5
void push();
void pop();
void display();
int i,stack[max],top=-1,k,value;
int main()
{   
  do
{ 
  printf("\n stack menu operation\n");
  printf("\n1.PUSH\n2.POP\n3.DISPLAY"); 
  printf("enter your choice");   
  scanf("%d",&k);
  switch(k)
   { 
     case 1:push();
     break;
     case 2:pop();
     break;
     case 3:display();
     break;
     case 4:("invalid choice");
     break;
   }
   }
   while(k!=4);
}
   void push()
  {
   if(top==max-1)
   {
   printf("the stark is overflow\n");
   }
   else
  {
   printf("enter the values to inserted"); 
   scanf("%d",&value);
   top++;   
   stack[top]=value;   
   printf("%d to be inserted",value);
 } 
 }
   void pop()
{
   if(top==-1)
   {
   printf("the stark is underflow");
  }
   else
{ 
  value=stack[top];
  top--;
}
}
   void display()
{
   if(top==-1)
    printf("the stack is empty\n");
   else
{
   for(i=top;i>=0;i--)
   printf("%d",stack[i]);
  }
 }   

