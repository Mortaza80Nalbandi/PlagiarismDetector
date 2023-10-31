#include <stdio.h>
int main(){
    int bb,i=1,n=0;;
    scanf("%d",&a);
    while(i<=bb){
        if(bb%i==0){
          n=n+1;
        }
        i=i+1;

    }
    int c = bb;
    bb == bb*10;
    bb = c;
    if(bb%n==0){
        printf("Refactorable");
        return 0;
    }
    else {
        printf("Non-Refactorable");
        return 0;
    }
}