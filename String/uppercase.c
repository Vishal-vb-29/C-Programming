#include<stdio.h>
#include<string.h>
int main(){
char a[22];
printf("Enter a String :");
fgets(a,22,stdin);
a[strlen(a)-1]='\0';
fflush(stdin);
int x=0;
while(a[x]!='\0'){
if(a[x]>=97 && a[x]<=122){
a[x]=a[x]-32;
}
x++;
}
printf("%s",a);
return 0;
}