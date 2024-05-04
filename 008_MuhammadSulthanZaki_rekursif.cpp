#include <iostream>
using namespace std;

int EuclideanGCD(int m, int n) {

    if (n == 0)
        return m;
    

    return EuclideanGCD(n, m % n);
}

int main() {
    int m, n;
    cout << "Masukkan dua bilangan bulat positif: ";
    cin >> m >> n;


    if (m <= 0 || n <= 0) {
        cout << "Bilangan harus positif." << endl;
        return 1;
    }


    int gcd = EuclideanGCD(m, n);
    cout << "Faktor Persekutuan Terbesar dari " << m << " dan " << n << " adalah: " << gcd << endl;

    return 0;
}
