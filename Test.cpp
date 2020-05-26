#include "doctest.h"
#include "Board.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"

using namespace WarGame;

TEST_CASE("NULL") {
    Board boardGame(4, 6);

    CHECK(!boardGame.has_soldiers(1) == true);
    CHECK(!boardGame.has_soldiers(2) == true);

    // Add soldiers for player 1:
    boardGame[{0, 1}] = new FootSoldier(1);
    boardGame[{0, 3}] = new FootCommander(1);
    boardGame[{0, 5}] = new FootSoldier(1);
}