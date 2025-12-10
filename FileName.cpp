#include "FileName.h"
#include <iostream>

int main() {
    Goods g1;
    Goods g2("Laptop", "2025-02-01");
    Goods g3("Phone", "2025-01-10", 15000, 3, 42);

    g1.Init("TV", "2025-01-05", 12000, 2, 15);
    g1.Display();

    g2.changePrice(20000);
    g2.increase(5);
    g2.Display();

    g3.decrease(1);
    std::cout << g3.toString();

    return 0;
}
