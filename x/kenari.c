#include <stdio.h>
int main(){
    int a,b,i=0,j=0,x;
    scanf("%d %d",&a,&b);
    int c[a][b],n[a][b];
    while(i<a){
        j=0;
        while(j<b){
           scanf("%d",&c[i][j]);
           j++;
        }
        i++;
    }
    i=0;
    while(i<a){
        j=0;
        while(j<b){
            n[i][j]=0;
            x=c[i][j];
            if(x==0){
                n[i][j]++;
            }
           while(x>0){
             n[i][j]++;
             x=x/10;
           }
           j++;
        }
        i++;
    }
    i=0;
    j=0;
    while(j<b){
        while(n[i][j]<3){
             printf("0");
             n[i][j]++;
        }
        printf("%d ",c[i][j]);
        j++;
    }
     printf("\n");
     if(a==1)
     return 0;
    i=1;
    j=0;
    while(i<a-1){
        j=0;
        while(n[i][j]<3){
             printf("0");
             n[i][j]++;
        }
        printf("%d",c[i][j]);
        x=0;
        while(x<(4*(b-2))+1){
            printf(" ");
            x++;
        }
        j=b-1;
        if(b==1){
            i++;
            printf("\n");
            continue;
        }
        while(n[i][j]<3){
             printf("0");
             n[i][j]++;
        }
        printf("%d",c[i][j]);
        printf("\n");
        i++;
    }
    i=a-1;
    j=0;
    while(j<b){
        while(n[i][j]<3){
             printf("0");
             n[i][j]++;
        }
        printf("%d ",c[i][j]);
        j++;
    }
    return 0;
}