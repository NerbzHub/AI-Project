#include "AIBehaviourTree.h"
#include "ExampleAction.h"
#include "ExampleQuestion.h"
#include "Selector.h"
#include "Sequence.h"


AIBehaviourTree::AIBehaviourTree()
{
	m_pRoot = new Selector();

	//LHS
	
	BehaviourNode* pFirst = new Sequence();
	BehaviourNode* pFirstFirst = new ExampleQuestion();
	BehaviourNode* pFirstSecond = new ExampleAction("Button Pressed");
	((Composite*)m_pRoot)->children.push_back(pFirstFirst);
	((Composite*)m_pRoot)->children.push_back(pFirstSecond);

	//RHS
	BehaviourNode* pSecond = new ExampleAction("Button Not Pressed");


	((Composite*)m_pRoot)->children.push_back(pFirst);
	((Composite*)m_pRoot)->children.push_back(pSecond);
}


AIBehaviourTree::~AIBehaviourTree()
{
	delete m_pRoot->Execute;
}

void AIBehaviourTree::Update(float deltaTime)
{

}