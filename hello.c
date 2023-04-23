#include <stdio.h>
#include <math.h>
int tong(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++) sum +=i;
    return sum;
    
}
int main(){
    int x = 10;
    int kq = tong(x);
    printf("%d", kq);
    return 0;    

}
