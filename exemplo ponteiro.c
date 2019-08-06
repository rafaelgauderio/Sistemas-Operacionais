#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
int x,*px,y,z;
px=&x;
scanf("%d",&x);
y=x;
z=*px/2;
printf("%d/2= %d, end.x=%u",y,z,&x);
}

