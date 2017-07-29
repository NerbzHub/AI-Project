#pragma once
class AIBehaviourTree
{
public:
	AIBehaviourTree();
	~AIBehaviourTree();

	void Update(float deltaTime);
	
private:
	BehaviourNode* m_pRoot;
};

