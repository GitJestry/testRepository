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
	std::cout << "new line of code in quick test" << std::endl;
	std::cout << "new line of code in master test" << std::endl;

	printf("Hello World!");
	printf("fuck git");
	{
		int* raw = new int(1);
		std::unique_ptr<int> ptr = std::make_unique<int>(1);
	}
	method();

}