#include <iostream>

void fib(int n) {
    int a1 = 0;
    std::cout << a1 << std::endl;

    int a2 = 1;
    std::cout << a2 << std::endl;
    for (int i = 3; i <= n; ++i) {
        std::cout << a1 + a2 << std::endl;
        std::swap(a1, a2);
        a2 = a1 + a2;
    }
}

int main() {
    int n;
    std::cin >> n;

    fib(n);

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
