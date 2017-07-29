#pragma once
#include "Vector2.h"
class Agent;

// IBehaviour is Interface Behaviour, an Interface class is a class that has no source code in it
class IBehaviour
{
	// This is the update function
	virtual Vector2 Calculate(Agent* pAgent, float fDeltaTime) = 0;
};
