#pragma once
#include "Vector2.h"
#include "Edge.h"
#include "DynamicArray.h"
#include <vector>

struct AStarNode
{
	int m_nIndex;

	float m_nGScore = 0;
	float m_nHScore;
	float m_nFScore;
	AStarNode* m_pPrev = nullptr;

	

	std::vector< Edge* > connections;

	AStarNode() {};
	~AStarNode() {};

};

