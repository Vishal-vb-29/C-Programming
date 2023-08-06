#include<stdio.h>
#include<String.h>
int main(){
char a[22];
printf("Enter a 1st string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
char b[22];
printf("Enter a 2nd string :");
fgets(b,22,stdin);
fflush(stdin);
b[strlen(b)-1]='\0';
int x=0;
if(strlen(a)!=strlen(b)){
printf("Not Same\n");
return 0;
}
else{
while(a[x]!='\0' && b[x]!='\0')
{
if(a[x]==b[x]) x++;
else return 0;
}
}
printf("String is same\n");
return 0;
}
