#include <iostream>
#include <vector>

std::vector<std::uint32_t> factorize(std::uint64_t num)
{
    std::vector<std::uint32_t> res;

    while (num % 2 == 0 && num > 1)
    {
        res.push_back(2);
        num /= 2;
    }

    std::uint32_t possible_factor = 3;
    while (num > 1)
    {
        if (num % possible_factor == 0)
        {
            res.push_back(possible_factor);
            num /= possible_factor;
        }
        else
            possible_factor += 2;
    }

    return res;
}

void main()
{
    //auto number = 13'195;
    auto number = 600'851'475'143;

    auto factors = factorize(number);

    std::cout << factors.back() << std::endl;
}