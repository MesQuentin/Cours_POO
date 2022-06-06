#include <algorithm>
#include <array>
#include <iostream>
#include <optional>
#include "general_store.h"
#include "p6/p6.h"

struct Cell {
    int x;
    int y;
};

enum class Player {
    Noughts,
    Crosses,
};

template<int size>
class Board {
public:
    std::optional<Player>& operator[](Cell cell)
    {
        assert(cell.x >= 0 && cell.x < size &&
               cell.y >= 0 && cell.y < size);
        return _cells[cell.x + cell.y * size];
    }

    const std::optional<Player>& operator[](Cell cell) const
    {
        assert(cell.x >= 0 && cell.x < size &&
               cell.y >= 0 && cell.y < size);
        return _cells[cell.x + cell.y * size];
    }

    auto begin() { return _cells.begin(); }
    auto begin() const { return _cells.begin(); }
    auto end() { return _cells.end(); }
    auto end() const { return _cells.end(); }

private:
    std::array<std::optional<Player>, size * size> _cells;
};

void nought_and_crosses();