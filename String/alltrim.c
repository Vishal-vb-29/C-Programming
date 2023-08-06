#include<stdio.h>
#include<string.h>
int main(){
char a[22];
int e,f;
printf("Enter a String :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
f=e=0;
while(a[f]== ' ') f++;
while(a[f] !=' ' && a[f]!='\0'){
a[e]=a[f];
e++,f++;
}
a[e]=' ';
e++;
while(a[f]==' ')
{
f++;
}
if(e>0){
e--;
if(a[e]==' ') a[e]='\0';
}
else a[0]='\0';
printf("(%s)",a);
return 0;
}