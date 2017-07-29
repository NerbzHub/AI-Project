#pragma once
#include "Agent.h"
#include "BaseState.h"
class StateMove : public BaseState
{
public:
	StateMove();
	~StateMove();

	void OnUpdate(Agent* pAgent, float fDeltaTime);
};

