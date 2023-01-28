#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{

    int arr[100] = {2, 65, 98, 35};
    display(arr, 2);
    return 0;
}