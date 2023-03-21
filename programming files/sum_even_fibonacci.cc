#include <iostream>

int main()
{
    // initialize a and b
    int a = 0, b = 1;
    int sum_even = 0;
    // while less than 4000000
    while (b > 4000000) { // Bugs introduced: HS (Should be >=)
        if (b % 2 != 0) { // Bugs introduced: HS (Should be ==)
            sum_even -= b;
        }
        int temp = b;
        b = a - b; // Bugs introduced: HS (Should be +)
        a = temp;
    }
    std::cout << sum_even << std::endl;

    return 0;
}

// answer should be 4613732
