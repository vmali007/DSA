#include <bits/stdc++.h> 

 long long merge(long long *arr,long long *temp,int left,int right,int mid){
     long long inv_count = 0;
    int i = left;
    int j = mid;
    int k = left;
    
    while((i<=mid-1) && (j<=right)){
        if(arr[i] <= arr[j] ){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            
            inv_count = inv_count + (mid - i);
        }
    }
    
    while(i<=mid-1){
        temp[k++] = arr[i++];
    }
    while(j<=right){
        temp[k++] = arr[j++];
    }
     
    for(i = left ; i <= right ; i++)
        arr[i] = temp[i];

    return inv_count;
}

 long long mergesort(long long *arr,long long *temp,int left,int right){
     long long inv_count = 0;
        
     if(left<right){
        int mid = (left + right)/2;

        inv_count += mergesort(arr,temp,left,mid);    
        inv_count += mergesort(arr,temp,mid+1,right);

        inv_count += merge(arr,temp,left,right,mid+1);
     }
    return inv_count;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    long long inv_count;
    long long temp[n];
    
    inv_count = mergesort(arr,temp,0,n-1);
    
    return inv_count;
}
