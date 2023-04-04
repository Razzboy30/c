// linear search

#include<stdio.h>
int Lsearch(int arr[], int n, int key){
    int loc =-1;
    int i = 0;
    do
    {   i = i+1;
        if(key == arr[i]){
            loc = i;
        }
    } while (i <n && key != arr[i]);
    return loc;
    
}
int main(){


    int arr[4] = {1,5,12,4};
    int res = Lsearch(arr,4,12);
    if(res == -1){
        printf("element is not found ");
    }
    else{
        printf("element is found ");
    }

     printf("\n Ritkaar Singh AI-DS 00213211921 \n ");
}
