#include <iostream>
#include <cmath>

double sigma(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        double x = pow(-1, n + 1) / n;
        return x + sigma(n - 1);
    }
}

//int main() {
    //int n;
    //std::cout << "Please choose n: ";
    //std::cin >> n;

    //double sum = sigma(n);
    //std::cout << "Sum: " << sum << std::endl;

    //return 0;
//}

double sigma() {
    int n;
    std::cout << "Please choose n: ";
    std::cin >> n;
    if (n == 0) {
        return 0;
    }
    else {
        double x = pow(-1, n + 1) / n;
        return x + sigma(n - 1);
    }
}

int main() {
    double sum = sigma();
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

