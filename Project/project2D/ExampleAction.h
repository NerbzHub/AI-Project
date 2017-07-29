#pragma once
#include "BehaviourNode.h"
#include <iostream>

using namespace std;

class ExampleAction : public BehaviourNode
{
public:
	ExampleAction(char* text) 
	{
		m_szText = text;
	}
	EBehaviourResult Execute()
	{
		cout << m_szText << endl;
		return EBEHAVIOUR_SUCCESS;
	}

	char* m_szText;
};
