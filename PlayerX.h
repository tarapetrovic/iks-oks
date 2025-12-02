#pragma once
#include "Player.h"

class PlayerX : public Player {
public:
	PlayerX();
	Move makeMove() override;
};

