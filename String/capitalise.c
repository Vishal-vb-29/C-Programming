#include<stdio.h>
#include<string.h>
int main(){
char a[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
int x=0;
if(a[x]>=97 && a[x]<=122)
{
a[x]-=32;
x++;
}
while(a[x]!='\0')
{
if(a[x]>=65 && a[x]<=90) a[x]+=32;
x++;
}
printf("%s",a);
return 0;
}
