#include<stdio.h>
#define SIZE 9

int linear_search(int arr[SIZE],int key);
int comparisons;

int main()
{
    int arr[SIZE] = {33,55,88,77,44,11,66,22,99};
    //1. Get the key ffrom the user
    int key;
    printf("Enter the key to Search :");
    scanf("%d",&key);
    int index = linear_search(arr,key);
    if(index == -1)
        printf("Key not found !\n");
    else
        printf("Key Found at index %d\n",index);
        
        printf("Comparisons = %d\n",comparisons);

    return 0;
}

int linear_search(int arr[SIZE],int key)
{
    //2. Start the traversal 
    for(int i = 0; i<SIZE; i++)
    {
        comparisons++; // 3
        // 3. compare the key with each element
        if(key == arr[i])
            return i; // if key found, return the index
    }
    return -1; // return false if the key does not exist
}