#include <iostream>
#include <memory>

int main() {
	printf("Hello World!");
	printf("fuck git");
	{
		int* raw = new int(1);
		std::unique_ptr<int> ptr = std::make_unique<int>(1);
	}

}