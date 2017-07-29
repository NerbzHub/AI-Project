#pragma once
#include "IBehaviour.h"

class SeekBehaviour : public IBehaviour
{
public:
	SeekBehaviour();
	~SeekBehaviour();

	virtual Vector2 Calculate(Agent* pAgent, float fDeltaTime) = 0;
};

