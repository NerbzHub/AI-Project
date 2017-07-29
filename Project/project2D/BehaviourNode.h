#pragma once

enum EBehaviourResult
{
	EBEHAVIOUR_SUCCESS = 0,
	EBEHAVIOUR_FAILURE,
	EBEHAVIOUR_PENDING
};

class BehaviourNode
{
public:
	virtual ~BehaviourNode()
	{
	};
	virtual EBehaviourResult Execute() = 0;

};
