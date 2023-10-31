#include <stdio.h>
double pw(double x,double i){
    double c=1;
    double m=1;   
    while(m<=i){
        c=c*x;
        m=m+1;
    }
    return c;
}
double fact(double j){
    double d=1,n=1;
    double z=1;    
    while (z<=j)
    {
        d=d*n;
        z=z+1;
        n=n+1;
    }
    return d;  
}
int main(){
    double a,b,q,g=0,h=1,x,u,r=0,y=1,t=1,k;
    double i=1,j=1,w=1;
    scanf("%lf %lf",&a,&k);
      u=(k-a)/1000;
      while(i<=15)      
    {
    b=pw(a,i)/fact(i);
    g=g+b;
    i=i+2;      
    }
    x=g;
    while(j<=24)
    {   
    q=pw(x,j)/fact(j);
    y=y+q;
    j=j+1;
    }
    i=1;
    j=1;
    g=0;
    while(i<=15)      
    {
    b=pw(k,i)/fact(i);
    g=g+b;
    i=i+2;      
    }
    x=g;
    while(j<=24)
    {   
    q=pw(x,j)/fact(j);
    t=t+q;
    j=j+1;
    }
      while(w<=999){
          g=0;
          h=1;
          i=1;
          j=1;
          x=a+w*u;
    while (i<=15)      
    {b=pw(x,i)/fact(i);
    g=g+b;
    i=i+2;      
    }
    x=g;
    while (j<=24)
    {   q=pw(x,j)/fact(j);
        h=h+q;
        j=j+1;
    }
    r=r+h;
    w=w+1;
    }
    r=((k-a)/2000)*((2*r)+y+t);
    printf("%.6lf",r);
    return 0;   
}