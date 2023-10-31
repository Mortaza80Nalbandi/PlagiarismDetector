#include <stdio.h>
#include <string.h>
int main(){
    char s[100];
    int i=0;
    gets(s);
    char *c=s;
     while(*c){
         *c=*c+32;
         c++;
     }
    puts(s);
}