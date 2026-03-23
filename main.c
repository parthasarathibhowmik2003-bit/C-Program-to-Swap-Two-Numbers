#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number:  ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore Swap: a = %d, b = %d\n", a, b);

    // Swap using temp variable
    temp = a;
    a    = b;
    b    = temp;

    printf("After Swap:  a = %d, b = %d\n", a, b);

    return 0;
}
```

**Sample Output:**
```
Enter first number:  10
Enter second number: 20

Before Swap: a = 10, b = 20
After Swap:  a = 20, b = 10
