#include <stdio.h>

int main() {
    int num,i;
    
    printf("Enter the number : ");

    scanf("%d",&num);
    if(num == 0,1){
        printf("0 and 1 are neither a prime or a composite number");
    }
    else{
        for(i = 2; i <= num/2; ++i){
            if(num%i == 0) {
                printf("The number is not prime: %d", num);
                return 0;
            }
        }

    }
    {
        printf("The number is prime : %d",num);
    }
    return 0;
}
