#include<stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

//ascending order
void BubbleSortIter(int arr[],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
            swap(&arr[j+1],&arr[j]);
}

void BubbleSortRec(int arr[],int n){
    if(n==1)
    return;
    else{
        for(int i=0;i<n;i++)
        //After first step, largest element is pushed to end
        if(arr[i]>arr[i+1])
        swap(&arr[i+1],&arr[i]);
        //Now excluding last element
        BubbleSortRec(arr,n-1);
    }
}

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        //Stores position for minimum element
        int iMin = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[iMin])
            j = iMin;
        }
        swap(&arr[i],&arr[iMin]);
    }
}