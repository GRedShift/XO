#include "CPlayer.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
}

const PLAYER_TILE_TYPE CPlayer::getTileType() const
{
	return tile_type;
}

void CPlayer::setTileType(PLAYER_TILE_TYPE _tile_type)
{
	tile_type = _tile_type;
}
