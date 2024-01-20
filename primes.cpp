#include <iostream>
#include <vector>

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number <= 1)
    { // 1 and numbers less than 1 are not prime
        return false;
    }
    if (number <= 3)
    { // 2 and 3 are prime
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0)
    { // Divisible by 2 or 3, not prime
        return false;
    }

    // Check divisors of the form 6k ± 1, where k is an integer
    for (int i = 5; i * i <= number; i += 6)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        { // If divisible by these divisors, not prime
            return false;
        }
    }

    return true; // If none of the above conditions are met, the number is prime
}
int main()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n < 2)
    { // Handle the case where n is less than 2
        std::cout << "There are no prime numbers less than or equal to " << n << std::endl;
        return 0; // Exit the program
    }

    std::vector<int> primes; // Create a vector to store prime numbers

    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i))
        {                        // Check if 'i' is prime using the isPrime function
            primes.push_back(i); // If 'i' is prime, add it to the vector
        }
    }

    std::cout << "Primes to " << n << " are: ";
    for (int prime : primes)
    {                              // Loop through the vector of prime numbers
        std::cout << prime << " "; // Print each prime number
    }
    std::cout << std::endl; // Print a newline character

    return 0;
}
