#include<stdio.h>
#include<string.h>
int main()
{
int e,f;
char a[22],b;
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
f=0;
while(a[f]!='\0'){
f++;
}
f--;
e=0;
while(e<f){
b=a[e];
a[e]=a[f];
a[f]=b;
e++,f--;
}
printf("%s",a);
return 0;
}