#include<stdio.h>

void main();
void main(){
    pecahan();
}

void pecahan (){
    int a,b,l,t;
    printf("program menyederhanakan bilangan pecahan\n\n");
    printf("masukkan pembilangan : ");
    scanf("%d",&a);
    printf("masukan penyebut : ");
    scanf("%d",&b);
t =a/b;
l =a%b;
    if (a%b== 0)
    printf("bilangan (%d/%d) \ndi sederhanakan menjadi %d ",a,b,t);
    else if (a%b != 0)
        printf("bilangan(%d/%d) \ndi sederhanakan menjadi (%d %d %d)",a,b,t,l,b);
    }
