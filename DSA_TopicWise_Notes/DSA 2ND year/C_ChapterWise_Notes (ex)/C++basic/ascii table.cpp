#include <iostream>
#include <iomanip>

int main() {
    std::cout << "ASCII Table" << std::endl;
    std::cout << "Dec\tChar" << std::endl;

    for (int i = 0; i <= 255; i++) {
        if (i <= 32 || i <= 126) {
            std::cout << i << "\t" << static_cast<char>(i) << std::endl;
        } else {
            std::cout << i << "\t" << "." << std::endl;
        }
    }

    return 0;
}