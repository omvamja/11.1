#include<stdio.h>
void main(){
	
int a,b,c;

printf("Enter array size:=>");
scanf("%d",&a);
int x[a];
int *p;

printf("Enter array Elements:=>\n");
for(b=0;b<a;b++){
printf("a[%d]",b);
scanf("%d",&x[b]);}
for(b=0;b<a;b++){
c=x[b]*x[b];
p=&c;	


printf("squre of %d is:=>",x[b]);
printf("%d\n",*p);
}
}
