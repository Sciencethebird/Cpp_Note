#include<array>
#include<iostream>
#include<string>
/**
* std::array is the C++ way of using static array (i.e. fixed sized array)
* it's basically C array (same properties, speed, ..), but it helps you keep track of array size
*/

template<class TYPE, std::size_t SIZE>
void print_array(std::array<TYPE, SIZE>& arr) {
    for(auto& e : arr) {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}

int main(){

	// basic usage of std::array
	std::array<std::string, 3> a = {"a", "ab", "abc"};
	std::cout << "element 1 of a" << a[1] << std::endl;
	std::cout << "size of a " << a.size() << std::endl;

	// how to pass a std:::array into function
	print_array(a);
	return 0;
}