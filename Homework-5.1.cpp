#include <iostream>
#include <vector>
#include <string>
#include <sstream>

template <class T>
T squaring(T a) {
    return a * a;
}

template <typename T>
std::vector<T> squaring(std::vector<T> vec) {
    for (T& value : vec) {
        value = value * value;
    }
    return vec;
}

int main()
{
    int user_n = 0;
    std::string user_s;
    std::vector<int> user_v;

    std::cout << "[IN]:";
    std::cin >> user_n;
    std::cout << "[OUT]:" << squaring(user_n) << std::endl;
    std::cin.ignore();

    std::cout << "[IN]:";
    std::getline(std::cin, user_s);
    std::stringstream ss(user_s);
    int v; char comma;
    while (ss >> v) {
        user_v.push_back(v);
        ss >> comma;
    }
    std::cout << "[OUT]:";
    std::vector<int> result = squaring(user_v);
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i];
        if (i < result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}