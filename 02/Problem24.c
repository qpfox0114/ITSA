#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int x, y, sum = 0;
        scanf("%d %d", &x, &y);
        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }
        for(int j = x; j <= y; j++){
            sum += j;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}