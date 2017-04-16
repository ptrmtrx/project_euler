#include <iostream>

void main()
{
    int sum = 0;

    // Generate fibonacci and count even lower than 4M.
    int fib_num_prev = 1;
    int fib_num_last = 2;
    while (fib_num_last < 4'000'000)
    {
        // Add to the sum if the last number is even.
        if (fib_num_last % 2 == 0)
            sum += fib_num_last;

        // Generate new fibonacci numbers.
        auto new_fib = fib_num_prev + fib_num_last;
        fib_num_prev = fib_num_last;
        fib_num_last = new_fib;
    }

    std::cout << sum << std::endl;
}