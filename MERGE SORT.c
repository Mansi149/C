
// Program created by Mansi Pareek

#include <stdio.h>
 
// function for sorting using merge sort
void merge(int x, int y, int a[], int aux[]) {
    if (y <= x) {
        return;    
    }
    int mid = (x + y) / 2;

    merge(x, mid, a, aux);     
    merge(mid + 1, y, a, aux); 

    int left_pointer = x;
    int right_pointer = mid + 1;    
    int z;     // using z as loop counter

    
    for (z = x; z <= y; z++) {
        if (left_pointer == mid + 1) {      
            aux[z] = a[right_pointer];
            right_pointer++;
        } else if (right_pointer == y + 1) {        
            aux[z] = a[left_pointer];
            left_pointer++;
        } else if (a[left_pointer] < a[right_pointer]) {       
            aux[z] = a[left_pointer];
            left_pointer++;
        } else {        
            aux[z] = a[right_pointer];
            right_pointer++;
        }
    }

    for (z = x; z <= y; z++) {      
        a[z] = aux[z];
    }
}


int main() {
  int a[100], aux[100], n, i, d, swap;
 
  printf("Enter number of elements in the array : ");
  scanf("%d", &n);
 
  printf("\nEnter %d integers : ", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
  merge(0, n - 1, a, aux);
 
  printf("\nThe sorted array is : ");
 
  for (i = 0; i < n; i++)
     printf("%d ", a[i]);
 
  return 0;
}

