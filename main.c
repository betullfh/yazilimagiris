#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int counter = 0;
    int u;
    int result =1;
    printf("enter a and u\n");
    scanf("%d %d", &a , &u);

    while(counter<u)

    {
        result= result*a;
        counter= counter + 1;
    }

    printf("result is %d", result);
    return 0;
}
