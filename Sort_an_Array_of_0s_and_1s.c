#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int z, o;
    z = o = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) z++;
        else o++;
    }
    
    for (int i = 0; i < z; i++) {
        printf("%d ", 0);
    }
    
    for (int i = 0; i < o; i++) {
        printf("%d ", 1);
    }
    
}