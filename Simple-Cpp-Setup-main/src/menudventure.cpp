#include "menudventure.h"

namespace Menudventure {

void start()
{
    std::cout << std::endl
              << "You are not ready Yet !" << std::endl
              << "Come back later !" << std::endl
              << std::endl;
}

} // namespace Menudventure

void menudventure()
{
    Menudventure::start();
}