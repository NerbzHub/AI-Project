#pragma once
#include "Agent.h"

class AI : public Agent
{
public:
	AI();
	~AI();

	void Update(float fDeltaTime);
	void Draw(Renderer2D* pRenderer);
};

