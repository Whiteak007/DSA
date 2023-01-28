// #include<stdio.h>
// struct prime
// {
//         int a;
// }easy;
// void pr(int *num){
//     if (*num % 2  == 0)
//     {
//         printf("evne");
//     }

// }

//     int main(){

//     printf("Enter a number :");
//     scanf("%d", &easy.a);
//     pr(&easy.a);
// return 0;
// }
#include <stdio.h>
void prime(int *a);
int main()
{

    int num;
    printf("Enter a number , here :");
    scanf("%d", &num);
    prime(&num);
    return 0;
}
void prime(int *a)
{
    int fact = 0;
    int i;
    for (i = 2; i <= *a / 2; i++)
    {
        if (*a % i == 0)
        {
            fact++;
            break;
        }
    }
    if (fact == 0)
    {
        printf("%d is prime number ", *a);
    }
    else
    {
        printf("%d is not a prime number ", *a);

    }
}
