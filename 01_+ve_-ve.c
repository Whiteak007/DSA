#include <stdio.h>
void positive_or_negative(int num);
int main()
{

    // printf("+\n");
    // int a  = 5;
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    printf("Size of num in your ram is :%d\n", sizeof(num));
    positive_or_negative(num);
    return 0;
}
void positive_or_negative(int num){
     if (num < 0)
    {
        printf("%d is a negative number.", num);
    }
    else if (num > 0)
    {
        printf("%d is a positive number.", num);
    }
    // else if(num == -0){
    //     printf("I am 0, be a hero +ve or -ve both are same for me");

    // }
    else
    {
        printf("I am 0, be a hero +ve or -ve both are same for me");
        // printf("I am 0, be a hero not -ve but +ve");
    }

}