// #include<stdio.h>
// void even_odd(int num);
//     int main(){

//     int a;
//     printf("Enter a number, here: ");
//     scanf("%d", &a);
//     even_odd(a);
// return 0;
// }
// void even_odd(int num){
//     if(num % 2 == 0)
//     {
//         printf("%d is even", num);
//     }
//     else if(num % 2 == 1)
//     {
//         printf("%d is odd", num);
//     }
//     else if(num == 0)
//     {
//         printf("%d is natural number not even not ", num);
//     }
// }

#include <stdio.h>
void even_odd(int *a);
int main()
{

    int num;
    printf("Enter a number, here :");
    scanf("%d", &num);
    even_odd(&num);
    return 0;
}
void even_odd(int *a)
{
    if (*a % 2 == 0)
    {
        printf("Even");
    }
    else if (*a % 2 == 1)
    {
        printf("%d is odd", *a);
    }
}