#include <iostream>
using namespace std;
int EuclideanGCD(int m, int n) {

    int r = m % n;
    

    while (r != 0) {

        m = n;
        n = r;
        r = m % n;
    }
    

    return n;
}

int main() {
    int m, n;
    cout << "Masukkan dua bilangan bulat positif: ";
    cin >> m >> n;
    
    cout << "Faktor Persekutuan Terbesar dari " << m << " dan " << n << " adalah: " << EuclideanGCD(m, n) << endl;
    
    return 0;
}
