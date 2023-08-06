#include<stdio.h>
#include<string.h>
int main(){
char a[21],b[21];
printf("Enter a String :");
fgets(a,21,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
int x=0;
while(a[x]!='\0')
{
b[x]=a[x];
x++;
}
b[x]='\0';
printf("%s",b);
return 0;
}
