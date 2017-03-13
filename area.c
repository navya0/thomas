#include<stdio.h>
#include<math.h>
 main()
{
 int a,b,b1,a1,c1,c,r,h,l;
 float area;
 printf("enter the choice:1-circle,2-rectangle,3-triangle,4-square,5-exit);
 scanf("%d",&a);
 switch(a)
}
{
 case 1:printf("enter the radius=");
        scanf("&f",&r);
        area=3.14*r**r;
        printf("area=%f",&area);
 case 2:printf("enter the length and breadth=");
        scanf("%d",&l&b);
        area=2*(l+b);
        printf("area=%d",&area);
 case 3:printf("enter breadth and height=");
        scanf("%d",&b1&h);
        s=(float)(b*h)/2
        area=sqrt(s*(s-a)*(s-b)*(s-c));
 case 4:printf("enter the side=");
        scanf("%d",&a);
        area=s*s;
        printf("area=%d",&area);
 case 5:printf("invalid");
        break;
}         
