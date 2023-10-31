#include <stdio.h>
int fact(int a)
{
    int i=1,w=1;
    while (i<=a)
    {
        w=w*i;
        i=i+1;
        
    }
    return w;
}
int kazn(int a, int b){
    int w=1;
    if(a==0){
       w=1;
       return w;
    }
    w=fact(b)/(fact(a)*fact(b-a));
    return w;
}
int main(){
    int a,b,i=0,m=0;
    scanf("%d",&a);
    while(i<a)
    {m=0;
        while(m<=i){
            b=kazn(m,i);
            printf("%d ",b);
            m=m+1;
        }
      i=i+1;
      printf("\n");
    }
    return 0;
}