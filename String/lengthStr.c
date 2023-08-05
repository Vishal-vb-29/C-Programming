#include<stdio.h>
int main(){
char a[21];
printf("Enter a string : ");
fgets(a,21,stdin);
fflush(stdin);
int x=0;
while(a[x]!='\0'){
x++;
}
printf("The length of string is : %d",x);
return 0;
}