#pragma once
#include <SFML/Graphics/RectangleShape.hpp>
#include "ITile.h"

class CSceneManager;

class CTile : private ITile
{

public:

	CTile();
	~CTile();

	void setTexture(sf::Texture *_texture);
	sf::Texture * getTexture();
};