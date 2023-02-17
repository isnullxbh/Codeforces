/**
 * @file    main.cpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    2/17/23
 */

#include <unordered_map>
#include <vector>
#include <iostream>

void solve1(); // using map
void solve2(); // using vector

auto main() -> int
{
    solve2();
    return 0;
}

void solve1()
{
    std::size_t n;
    std::unordered_map<short, short> edges;

    std::cin >> n;
    for (std::size_t i = 1; i <= n; ++i)
    {
        std::size_t v;
        std::cin >> v;
        edges.insert({ i, v });
    }

    for (const auto& [v1, v2] : edges)
    {
        if (edges[edges[v2]] == v1)
        {
            std::cout << "YES";
            return;
        }
    }

    std::cout << "NO";
}

void solve2()
{
    std::size_t n, v;
    std::vector<short> edges;

    std::cin >> n;
    edges.reserve(n);

    for (std::size_t i = 0; i < n; ++i)
    {
        std::cin >> v;
        edges[i] = static_cast<short>(v - 1);
    }

    for (std::size_t i = 0; i < n; ++i)
    {
        if (edges[edges[edges[i]]] == i)
        {
            std::cout << "YES";
            return;
        }
    }

    std::cout << "NO";
}
