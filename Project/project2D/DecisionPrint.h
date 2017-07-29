#pragma once

#include "BaseDecision.h"
#include <iostream>

using namespace std;

class DecisionPrint : public BaseDecision
{
public:
	DecisionPrint();
	~DecisionPrint();

	void MakeDecision(Entity* pEntity, float fDeltaTime);

	float m_fTimer;
};

