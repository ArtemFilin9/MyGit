#include <iostream>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
	int n;
	std::cin >> n;

	std::cout << "Число Фибоначчи для n = " << n << ": " << fib(n) << std::endl;

	std::cout << "Hello, World!" << std::endl;

	return 0;
}
