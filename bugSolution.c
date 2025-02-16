int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20;  // Modifies the value of x
    int y = *ptr; // y will be 20

    int z = 20;
    ptr = &z; // ptr now points to z
    *ptr = 30; // Modifies the value of z
    int w = *ptr; // w will be 30

    printf("x = %d\n", x); //Output: x=20
    printf("y = %d\n", y); //Output: y=20
    printf("z = %d\n", z); //Output: z=30
    printf("w = %d\n", w); //Output: w=30
    return 0; 
} 