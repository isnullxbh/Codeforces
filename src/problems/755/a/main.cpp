/**
 * @file    main.cpp
 * @author  Oleg E. Vorobiov <isnullxbh(at)gmail.com>
 * @date    2/18/23
 */

#include <iostream>

auto main() -> int
{
    auto n = 0U;
    std::cin >> n;
    std::cout << ((n > 2) ? (n - 2) : (n == 1) ? 3 : 4);
    return 0;
}
