#pragma once

#include <array>

struct Pozycja {
    int x{0};
    int y{0};

    bool operator==(const Pozycja& inna) const = default;
    [[nodiscard("Nie użyto przesuniętej Pozycji")]] constexpr Pozycja przesunieta(int dx, int dy) const { return Pozycja{x+dx, y+dy};}
    [[nodiscard("Nie użyto przesuniętej Pozycji")]] constexpr Pozycja operator+(const Pozycja& inna) const { return Pozycja{x+inna.x, y+inna.y};}
};

namespace Ruch {
    inline constexpr Pozycja UP{0, -1};
    inline constexpr Pozycja DOWN{0, 1};
    inline constexpr Pozycja RIGHT{1, 0};
    inline constexpr Pozycja LEFT{-1, 0};
    inline constexpr std::array<Pozycja, 8> kierunki = {UP, UP+RIGHT, RIGHT, DOWN+RIGHT, DOWN, DOWN+LEFT, LEFT, UP+LEFT};
}