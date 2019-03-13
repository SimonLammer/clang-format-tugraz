int original = 0;
int* first_original_pointer = &original;  // Correct
int* second_original_pointer = &original; // Also correct, but not unified
int* third_original_pointer = &original;
