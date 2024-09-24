#include <iostream>
using namespace std;

// Function to convert decimal to binary
int dectob(int dec){
    int ans = 0, pow = 1;

    // Loop until the decimal number becomes 0
    while(dec > 0){
        int rem = dec % 2;  // Get the remainder when divided by 2 (binary digit)
        dec = dec / 2;      // Update decimal value by dividing by 2

        ans += (rem * pow); // Add the remainder multiplied by the power of 10 to the answer
        pow *= 10;          // Update the power of 10 for the next binary digit
    }

    return ans;
}

int main(){
   cout << dectob(18) << endl; // Convert decimal 18 to binary
   return 0;
}

int main(){
   cout<<dectob(18)<<endl;
    return 0;
}
// binary to decimal 


#include <iostream>
using namespace std;

// Function to convert binary to decimal
int bintodec(int bin){
    int ans = 0, pow = 1;

    // Loop until the binary number becomes 0
    while(bin > 0){
        int rem = bin % 10;   // Get the remainder when divided by 10 (binary digit)
        ans += (rem * pow);   // Add the remainder multiplied by the power of 2 to the answer
        bin /= 10;            // Update binary value by dividing by 10
        pow *= 2;             // Update the power of 2 for the next digit
    }

    return ans;
}

int main(){
    cout << bintodec(1010) << endl; // Convert binary 1010 to decimal
    return 0;
}