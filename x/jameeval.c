#include <stdio.h>
int main(){
int a,b,c=2,x,y,z=1;
scanf("%d",&a);
if(a<=0){
    printf("NOT POSSIBLE");
        return 0;
}
if(a==1){
     printf("NOT POSSIBLE");
        return 0;
}
if(a%2!=0){
    b=a-2;
    if(b==1){
        printf("NOT POSSIBLE");
        return 0;
    }
    while(c<b)
    {if(b%c==0){
    printf("NOT POSSIBLE");
    return 0;
    }

    
     c=c+1;

    
    }
     printf("2 + %d",b);
      return 0; 
    
}
b=2;
a=a-b;
if(a==0){
    printf("NOT POSSIBLE");
    return 0;
}
else if(a==b)
{
    printf("2 + 2");
    return 0;
} 
c=2;
b=b+1;
a=a-1;
while(a>=b){ 
    z=1;
    c=2;
while(c<a){

    if(a%c==0){
        b=b+2;
        a=a-2;
        c=2;
        continue;
    }
    c=c+1;
}
if(a<b){

    break;
}

c=2;
while (c<b)
{ 
    if(b%c==0){
        z=0;
        a=a-2;
        b=b+2;        
        break;
    }
    c=c+1;
    }
    
    if(z==0){
        continue;
    }
    printf("%d + %d\n",b,a);
    a=a-2;
    b=b+2;
}
return 0;
}