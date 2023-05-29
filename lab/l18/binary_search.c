// To implement binary using recursion


#include <stdio.h>
int binary(int arr[],int target,int s,int e);
int main() 
{ 
  int n;
  printf("Enter length of the array:");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int target;
  printf("Enter element to search :\n");
  scanf("%d",&target);
  
  printf("If element found you will get the index else you will get -1== %d\n",binary(arr,target,0,n-1));
  return 0;
}

int binary(int arr[],int target,int s,int e){
   if(s>e){
     return -1;}
     
     int mid=s+(e-s)/2;
     
     if(arr[mid]==target){ 
              return mid;}
     if(arr[mid]>target){
     
       return binary(arr,target,s,mid-1);
  }

       return binary(arr,target,mid+1,e);
 
}