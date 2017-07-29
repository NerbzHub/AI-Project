#pragma once
#include "AStarNode.h"


struct Edge {
	AStarNode* target;
	float cost;
};