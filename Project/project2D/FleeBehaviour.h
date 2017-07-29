#pragma once
#include "IBehaviour.h"

class FleeBehaviour : IBehaviour
{
public:
	FleeBehaviour();
	~FleeBehaviour();

	virtual Vector2 Calculate(Agent* pAgent, float fDeltaTime) = 0;
};

