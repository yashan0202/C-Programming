#include <stdio.h>
int myfact(int num);
int main()
{
    int num = 5;
    int result = myfact(5);
    printf("result = %d", result);
    return 0;
}

int myfact(int num)
{

    int result;
    if (num == 0)
        return 1;
    else
        result = num * myfact(num - 1);
    printf("num = %d result = %d\n",result,num); 
    return result;
}
