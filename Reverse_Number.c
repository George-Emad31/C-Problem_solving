#include <stdio.h>
int main()
{
    int n;
    printf("please enter N.o of elements\n");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        printf("Enter the number a[%d]: \n",i);

        scanf("%d",&a[i]);
    }
    printf("Reverse of digits Number = ");

    for (int i= n-1  ; i>=0 ; --i)
    {
        printf("%d",a[i]);
    }
    return 0;
}
