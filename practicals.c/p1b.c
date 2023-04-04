//binary search
#include<stdio.h>
#include<math.h>
int Bsearch(int arr[], int n, int key){
    int loc =-1;
    int beg =0, end =n-1;
    while(beg <= end){
        int mid =floor((beg+end)/2);
        if(key == arr[mid]){
            loc = mid;
            break;
        }
        else if(key > arr[mid]){
            beg = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return loc;
}
int main(){

    int arr[5] = {1,3,5,7,9};
    int res =Bsearch(arr,5,7);
    if(res == -1){
        printf("element not found ");
    }
    else{
        printf("element is found ");
    }

     printf("\n Ritkaar Singh AI-DS 00213211921 \n ");
}