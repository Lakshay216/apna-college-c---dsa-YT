#include <iostream>
using namespace std;

void prime(int total)
{
    for (int j = 2; j <= total; j++) // Loop from 2 to total
    {
        bool isprime = true;
        for (int i = 2; i * i <= j; i++) // Check if j is divisible by i
        {
            if (j % i == 0)
            {
                isprime = false;
                break; // j is not prime, exit inner loop
            }
        }

        if (isprime) // If j is prime, print it
        {
            cout << j << endl;
        }
    }
}

int main(){
    prime(15);
    return 0;
}