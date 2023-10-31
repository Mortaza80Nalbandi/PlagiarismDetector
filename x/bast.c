#include <stdio.h>
int main()
{
    float a,b,c,s,x=0,n=1,m,d;
    scanf("%f",&a);
    while(n<9)
    {   d=2*n;
        b=1;
        c=1;
        s=1;
        m=1;
        while(m<d){
            s=s*m;
            m=m+1;
        }
        m=1;
        while (m<d)
        {
            b=b*a;
            m=m+1;
        }
        m=1;
        while (m<n+2)
        {
           c=c*(-1);
           m=m+1;

        }
        
        x=x+((b*c)/s);
        n=n+1;
    }
    printf("%.6f",x);
    return 0;
    
    
}
