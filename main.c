#include <stdio.h>
void swap(char *a,char *b){
    char t;
    t=*a;
    *a=*b;
    *b=t;
}
char * insert(char *string, char c){
    char *p=string;
    while (c>=*p&&*p!=0){
        p++;
    }
    while (c!=0){
        swap(&c,p);
        p++;
    }
    *p=0;
    return string;
}
int main() {
    char a[51],c;
    scanf("%s",a);
    getchar();
    scanf("%c",&c);
    printf("%s",insert(a,c));
    return 0;
}
