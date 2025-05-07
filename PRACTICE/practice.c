#include <stdio.h>

// Function to modify the value
void modify(int x) {
    x = x + 10; // Changes the local copy
    printf("Value inside function1: %d\n", x);
}

int main() {
    int num = 5;
    printf("Value before function call2: %d\n", num);
    modify(num); // Call by value
    printf("Value after function call3: %d\n", num); // Original value remains unchanged
    return 0;
}
