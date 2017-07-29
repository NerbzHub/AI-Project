#pragma once
#include "CompositeNode.h"

//AND
class Sequence : Composite
{
public:
	virtual EBehaviourResult Execute()
	{
		for (unsigned int i = 0; i < children.size(); ++i)
		{
			if (children[i]->Execute() == EBEHAVIOUR_FAILURE)
			{
				return EBEHAVIOUR_FAILURE;
			}
		}
		return EBEHAVIOUR_SUCCESS;
	}
};
