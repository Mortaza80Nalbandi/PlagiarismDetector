#include <stdio.h>
int main()
{
   int a,b,c,i=1,p,q,z,n=0,m;
   scanf("%d",&a);
   b=a;
while(b>0){
c=b%10;
b=b-c;
b=b/10;
n=n+1;
}
while((2*i)<=n){
p=1;
q=1;
z=n-i;
m=1;
while(m<=i-1){
    p=p*10;
    m=m+1;
}
m=1;
while(m<=z){
    q=q*10;
    m=m+1;
}
b=a/p;
b=b%10;
c=a/q;
c=c%10;
if(b!=c){
    printf("Not Palindrome!");
    return 0;
}
i=i+1;
}
printf("Palindrome!");
    return 0;
}