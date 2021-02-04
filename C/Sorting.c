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

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(key>arr[j]&&j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void Merge(int arr[],int l, int r, int m){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
 
        // Sort first and second halves
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
 
        Merge(arr, l, r, m);
    }
}

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void QuickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        QuickSort(arr, low, pi - 1);  
        QuickSort(arr, pi + 1, high);  
    }  
}  


void main(){
    int arr[] = {10,4,8,2,7,11};
    QuickSort(arr,0,5);
    for(int i = 0 ;i<6;i++)
    printf("%d ",arr[i]);
}