#include<stdio.h>
#include<string.h>
int main(){
char a[22];
int e,f;
e=f=0;
printf("Enter a String :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("String before applying left trim (%s)\n",a);
while(a[f]==' ')
{
f++;
} 
if(f>0)
{
while(a[f]!='\0')
{
a[e]=a[f];
e++,f++;
}
a[e]='\0';
}
printf("string after applying left trim (%s)\n",a);
return 0;
}