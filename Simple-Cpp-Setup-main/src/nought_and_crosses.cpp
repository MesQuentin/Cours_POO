#include "nought_and_crosses.h"

namespace NoughtAndCrosses {

void board()
{
}

} // namespace NoughtAndCrosses

void nought_and_crosses()
{
    auto ctx   = p6::Context{{1280, 720, "Nought and Crosses"}};
    ctx.update = [&]() {
        ctx.background({0.5f, 0.3f, 0.8f});
        NoughtAndCrosses::board();
        ctx.circle(p6::Center{ctx.mouse()},
                   p6::Radius{0.3f});
    };
    ctx.start();
}