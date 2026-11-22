#pragma once

struct Pozycja {
    int x{0};
    int y{0};

    bool operator==(const Pozycja& inna) const = default;
    [[nodiscard("Nie użyto przesuniętej Pozycji")]] constexpr Pozycja przesunieta(int dx, int dy) const { return Pozycja{x+dx, y+dy};}
    [[nodiscard("Nie użyto przesuniętej Pozycji")]] constexpr Pozycja operator+(const Pozycja& inna) const { return Pozycja{x+inna.x, y+inna.y};}
};