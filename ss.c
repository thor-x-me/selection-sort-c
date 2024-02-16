// SELECTION SORT
#include <stdio.h>

void ss(int A[], int n);

int main() {
    int i, n, A[] = {9,2,3,4,5,7,1,6,8,0};
    n = 10;
    ss(A,n);
    for(i=0; i<n; i++)
    {
        printf("%d", A[i]);
    }
}

void ss(int A[], int n)
{
    int i, j, min, temp;
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
                //printf("%d \n", min);
            }
        }
        temp = A[min];
        //printf("temp is %d \n", temp);
        A[min] = A[i];
        A[i] = temp;
    }
}
