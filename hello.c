#include <stdio.h>
int main(){
    int a;
    printf("nhap vao a:");
    scanf("%d", &a);
    if((a>10 && a%2==0)){
        printf("dung");
        
    }
    else{
        printf("sai! vui long nhap lai!");
    }
    return 0;

}