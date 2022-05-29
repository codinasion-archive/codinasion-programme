#include <stdio.h>

int main(){
    int N, num;
    scanf("%d", &N);
    printf("Enter %d Numbers\n", N);
    int sum = 0;
    for(int i=0; i<N; i++){
        scanf("%d", &num);
        sum += num;
    }
    printf("Average is : %f\n", (sum * 1.0)/N);
}
