//linked list using operations insertion,delection...
#include<stdio.h>
void creation();
void insertion();
void delection();
struct node;
{ 
  int num;
  struct node*ptr;
}
  typedef struct node NODE;
  node*start;
  start=(NODE*)malloc(sizeof (NODE));
  start->num=20;
  start->ptr='/o';
  void main()
{
  int item;
  do
}
  printf("MENU\n1:creation\n2:insertion\n3:delection\n4:exit");
  printf("enter any operation from the menu");
  scanf("%d",&item);
  switch(item)
{
  case 1:creation();
  break;
  case 2:insertion();
  break;
  case 3:delection();
  break;
  default:printf("enter any other operations");
  break;
}
}
  while(item!=4);
}
  void creation()
{
  start->ptr=(NODE*)malloc(sizeof (NODE));
  start->ptr,num=10;
  start->ptr,ptr='/o';
}
  void insertion()
{
  int value;
  printf("eneterny number");
  scanf("%d",value);
  NODE*ptr;
  ptr=(NODE*)malloc(sizeof (NODE);
  ptr->INFO=item;
  if(start==NULL)
  ptr->Next=NULL;
  else
  ptr->next=start
  start=ptr;
}
  void delection()
  {
  NODE*PTR;
  if(start==NUL)
{
  printf("the link is empty");
}
  else
{
  ptr=start;
  start=start









