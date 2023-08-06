#include<stdio.h>
#include<string.h>
int main(){
int e,f;
char a[22];
printf("Enter a String :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
f=0;
while(a[f]!='\0'){
f++;
}
f--;
e=0;
while(e<f && a[e]==a[f]){
e++,f--;
}
if(e<f)
printf("%s is a pallindrome",a);
else printf("%s is not a pallindorme");
return 0;
} 
 