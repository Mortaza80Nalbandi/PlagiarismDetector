#include <stdio.h>
long int aval(long int a){
    int w=2,z=1;
    if(a==1){
        z=0;
        return z;
    }
    while((w*w)<=a){
        if(a%w==0){
            z=0;
            break;
        }
        w=w+1;
    }
    return z;
}
long int tavandah(long int a){
    long int i=1,x=1;
    while(i<=a){
        x=x*10;
        i=i+1;
    }
    return x;
}
int main(){
    long int a,b,c;
    scanf("%ld",&a);
    a=a+1;
    while (1)
    {
        b=aval(a);
    c=aval(a%tavandah(a%10));
    if(b==1&&c==1){
      break;
    } 
    a=a+1;
    }
    printf("%ld",a);
    return 0;
   

}