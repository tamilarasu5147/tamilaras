//binary search
#include<stdio.h>
int main(){
    int n,i,key;
    scanf("%d",&n);
    int l=0,r=n-1,mid;
    int arr[n];
    for(i =0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
  
    while(l<=r){
        mid=l+(r -l)/2;
        if(arr[mid]==key){
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid]<key) {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
  
    printf("Element not found\n");

}
