//sorts numbers in ascending order using the quicksort algorithm
#include <stdio.h>

void quick_sort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
    int len, i;

    printf("How many numbers do you want to sort in ascending order? ");
    scanf("%d", &len);
    
    int a[len];
    
    printf("Enter numbers to sort in ascending order: ");
    for (i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }
    quick_sort(a, 0, len - 1);

   printf("in sorted order: ");
   for (i = 0; i < len; i++){
    printf(" %2d ", a[i]);
   }
   
   printf("\n");
   return 0;
}

void quick_sort(int a[], int low, int high) {
     int middle;

     if ( low >= high) return;

     middle = split(a, low, high);
     quick_sort(a, low, middle - 1);
     quick_sort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
    int part_element = a[low];

    for (; ;) {
       while (low < high && part_element <= a[high])
          high--;
        if (low >= high) break;
        else
        a[low++] = a[high];

        while (low < high && part_element >= a[low])
          low++;
        if (low >= high) break;
        else
        a[high--] = a[low];
    }
    a[high] = part_element;
    
    return high;
}