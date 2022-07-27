#include <stdio.h>  
//Insertion Sort
void insert(int a[], int n)  
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])  
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
// Selection sort
void selection(int arr[], int n)  
{  
    int small;  
    for (int i = 0; i < n-1; i++) 
    {  
        small = i; 
          
        for (int j = i+1; j < n; j++)  
         {
            if (arr[j] < arr[small])  
            small = j;  // storing minimum elment in a segment
         }
  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
int main()  
{  
     int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }     
    insert(a, n);  
    printf("Sorted array : \n");    
   for (int i = 0; i < n; i++)  
        {
            printf("%d ", a[i]); 
        } 
    printf("\n");
    selection(a, n);  
    printf("Sorted Array :\n");    
    for (int i = 0; i < n; i++)  
       { 
        printf("%d ", a[i]);  
       }
    return 0;  
}    