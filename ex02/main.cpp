#include "array.hpp"
#include <iostream>
#include <string>

static void title(const std::string &t)
{
    std::cout << "\n========== " << t << " ==========\n";
}

int main()
{
    title("1) Default constructor: empty array");
    Array<int> empty;
    std::cout << "empty.size() = " << empty.size() << "\n";
    try {
        std::cout << "Trying empty[0]...\n";
        std::cout << empty[0] << "\n";
    } catch (const std::exception &) {
        std::cout << "Caught exception as expected (empty[0])\n";
    }

    title("2) Constructor with n + access");
    Array<int> a(5);
    std::cout << "a.size() = " << a.size() << "\n";
    for (unsigned int i = 0; i < a.size(); i++)
        a[i] = (int)(i * 10);
    for (unsigned int i = 0; i < a.size(); i++)
        std::cout << "a[" << i << "] = " << a[i] << "\n";

    title("3) Out of bounds");
    try {
        std::cout << "Trying a[5]...\n";
        std::cout << a[5] << "\n";
    } catch (const std::exception &) {
        std::cout << "Caught exception as expected (a[5])\n";
    }
    try {
        std::cout << "Trying a[(unsigned int)-1]...\n";
        std::cout << a[(unsigned int)-1] << "\n";
    } catch (const std::exception &) {
        std::cout << "Caught exception as expected (a[(unsigned int)-1])\n";
    }

    title("4) Copy constructor: deep copy");
    Array<int> b(a);
    b[0] = 999;
    std::cout << "a[0] = " << a[0] << " (must NOT be 999)\n";
    std::cout << "b[0] = " << b[0] << "\n";

    title("5) operator=: deep copy + self assignment");
    Array<int> c;
    c = a;
    c[1] = 777;
    std::cout << "a[1] = " << a[1] << " (must NOT be 777)\n";
    std::cout << "c[1] = " << c[1] << "\n";
    c = c;
    std::cout << "self-assignment OK, c.size() = " << c.size() << "\n";

    title("6) Array<std::string>");
    Array<std::string> s(3);
    s[0] = "Michel";
    s[1] = "42";
    s[2] = "Templates";
    for (unsigned int i = 0; i < s.size(); i++)
        std::cout << "s[" << i << "] = " << s[i] << "\n";

    title("7) Const correctness");
    const Array<int> ca(a);
    std::cout << "ca.size() = " << ca.size() << "\n";
    std::cout << "ca[0] = " << ca[0] << "\n";
    // ca[0] = 123; // must NOT compile if uncommented

    std::cout << "\n✅ All tests executed.\n";
    return 0;
}
