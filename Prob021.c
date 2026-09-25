#include 

int add_int(int a, int b) {
    return a + b;
}

float add_float(float a, float b) {
    return a + b;
}

int main() {
    printf("%d\n", add_int(5, 10));          // Output: 15
    printf("%.2f\n", add_float(5.5, 10.5));  // Output: 16.00
    return 0;
}
