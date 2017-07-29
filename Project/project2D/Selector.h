#pragma once
#include "CompositeNode.h"

//OR
class Selector : Composite
{
public:
	virtual EBehaviourResult Execute()
	{
		BehaviourNode* child = pendingNode;
		unsigned int i = -1;
		i = 0;
	

		for (; i < children.size(); ++i)
		{
			if (i >= 0)
			{
				child = children[i];

				EBehaviourResult result = child->Execute();
				if (result == EBEHAVIOUR_SUCCESS)
				{
					pendingNode = nullptr;
					return EBEHAVIOUR_SUCCESS;
				}
				if (result == EBEHAVIOUR_PENDING)
				{
					pendingNode = child;
					return EBEHAVIOUR_PENDING;
				}
			}

		}

		pendingNode = nullptr;
		return EBEHAVIOUR_FAILURE;
	}
};

/*if (!child)
{
child = children[0];
index = 0;
}*/
/*while (index < children.size())
{
EBehaviourResult result = child->Execute();
if (result == EBEHAVIOUR_SUCCESS)
return EBEHAVIOUR_SUCCESS;

if (result == EBEHAVIOUR_FAILURE)
{
++index;
child = children[index];
}
}
*/
/*for (; i = 0; i < children.size(); ++i)
{
if(i >= 0)

if (children[i]->Execute() == EBEHAVIOUR_SUCCESS)
{
return EBEHAVIOUR_SUCCESS;
}
}
return EBEHAVIOUR_FAILURE;*/