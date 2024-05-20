#include <stdio.h>

void function() {
    static int previous_value = 0; // Static variable to hold previous value

    // Use the previous value
    printf("Previous value: %d\n", previous_value);

    // Update the previous value
    previous_value++;
}

int main() {
    function(); // Call function
    function(); // Call function again
    function(); // Call function again
    return 0;
}
