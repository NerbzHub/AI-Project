#include "StateMove.h"



StateMove::StateMove()
{
	
}


StateMove::~StateMove()
{
}

void StateMove::OnUpdate(Agent* pAgent, float fDeltaTime)
{
	Vector2 v2TotalForce;

	//Update the behaviours and combine them with weighting.
	for (unsigned int i = 0; i < m_BehaviourList.size(); i++)
	{
		//Vector2 currentForce = m_BehaviourList[i]
	}
}