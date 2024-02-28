#include <iostream>
#include <memory>


void method() {
	std::cout << "\n";
	for (int i = 0; i < 100; i++) {
		i += i;
		std::cout << i;
	}
}

int main() {
	printf("Hello World!");
	printf("fuck git");
	{
		int* raw = new int(1);
		std::unique_ptr<int> ptr = std::make_unique<int>(1);
	}
	method();

}