
#include<stdio.h>

void main (){
	
	int  x,y,*i,*j,o;
	 printf("enter the value of x :=>");
	 scanf("%d",&x);
	printf("enter the value of y:=>");
	 scanf("%d",&y);
	  printf("befor swapping\n");
	  
	  printf("x=%d\n",x);
	  printf("y=%d\n",y);
	
	i= &x;
	j= &y;
	
	o= *j;
	*j=*i;
	*i=o;
	  printf("ante swapping\n");
	  printf("x=%d\n",x);
	  printf("y=%d",y);  
}
