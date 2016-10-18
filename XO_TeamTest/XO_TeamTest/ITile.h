#pragma once

class ITile
{
public:

	virtual ~ITile() {}

	virtual void Render() = 0;
	virtual void Update() = 0;
};