#include <iostream>

int perfect()
{
    int num, sum = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        std::cout << num << " is a perfect number." << std::endl;
    }
    else
    {
        std::cout << num << " is not a perfect number." << std::endl;
    }
}

int main()
{
    int a;
    perfect();
    return 0;
}