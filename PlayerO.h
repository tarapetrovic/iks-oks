#pragma once
#include "Player.h"

class PlayerO : public Player {
public:
	PlayerO();
	Move makeMove() override;
};

