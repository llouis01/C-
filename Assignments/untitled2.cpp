// Loubens Louis, Q1_HW4
#include <iostream>
using namespace std;

int digit(int n, int k) {
for (int i = 0; i < k; i++) {
n /= 10;
}
return n % 10;
}

int main() {
int n = 29415;
cout << "digit(n, 0): " << digit(n, 0) << endl;
cout << "digit(n, 2): " << digit(n, 2);
return 0;
}

	
