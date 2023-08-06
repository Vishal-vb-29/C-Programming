#include<stdio.h>
#include<string.h>
int main(){
char a[22];
int f;
printf("Enter a String :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
f=0;
while(a[f]!='\0') f++;
f--;
while(f>=0 && a[f]==' '){
f--;
}
a[f+1]='\0';
printf("%s",a);
return 0;
}