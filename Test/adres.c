#include <stdio.h>
struct fard{
 char shahr[1000];
 char addres[1000];
 int cod;
 int phone;
};
int barabar(char *v1,char *v2){
     while(*v1!=0&&&*v2!=0){
        if(*v1==*v2){
            v1++;
            v2++;
        }
        else if(*v1>*v2){
            return 1;
        }
        else if(*v1<*v2){
            return -1;
        }
    }
    int w=0;
    return w;
}
int main(){
    int a,i=0;
    char x[1000];
    scanf("%d",&a);
    struct fard b[a],c[a],d[a],e[a];
    while(i<a){
    scanf("%s\n%s",&b[i].shahr,&c[i].addres);
    scanf("%d",&d[i].cod);
    scanf("%d",&e[i].phone);
    i++;
    }
    int z;
    i=0;
    char *r=b[i].shahr;
    scanf("%s",&x);
    char *p=x;
    while(i<a){
    p=x;
    r=b[i].shahr;
    z=barabar(p,r);
    if(z==0){
        printf("%d\n",d[i].cod);
    }
  i++;
    }
    return 0;
}