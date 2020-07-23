#include <iostream>

using namespace std;

int main() {
    unsigned int sum{0};

    cout << "Summing odd integers between 1 and 99" << endl;

    for (unsigned int count{1}; count <= 99 ; count++) {
        if(count % 2 != 0) {
            sum += count;
        }
    }

    cout << "\nSum = " << sum << endl; 
}
