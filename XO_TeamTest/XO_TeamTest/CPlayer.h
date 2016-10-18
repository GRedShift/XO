#pragma once
#include <string>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Network/IpAddress.hpp>

#include "Enums.h"

class CPlayer
{
	sf::IpAddress address;
	std::string name;
	sf::Color player_color;
	PLAYER_TILE_TYPE tile_type;

public:

	CPlayer();
	~CPlayer();

	const PLAYER_TILE_TYPE getTileType() const;
	void setTileType(PLAYER_TILE_TYPE);
};