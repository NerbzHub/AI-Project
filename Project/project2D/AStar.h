#pragma once
#include "Heap.h"
#include "DynamicArray.h"

struct AStarNode;

typedef int(*HeuristicFunction)(AStarNode* pNode, AStarNode* pEnd);

class AStar
{

public:

	AStar(int nMaxNodes);

	~AStar();

	DynamicArray<AStarNode*> m_OpenList;
	
	

	void SortOpenList();

	bool CalculatePath(AStarNode* pStart, AStarNode* pEnd, vector<AStarNode*>* finishedPath);
	int CalcHeuristic(AStarNode* pNode, AStarNode* pEnd);

	// Set Heuristic
	void SetHeuristic(HeuristicFunction func);

private:

	HeuristicFunction HeuristicToCall = nullptr;

	int health;

	Heap m_OpenList; //this needs to be heap
	bool* m_ClosedList;
	int m_nMaxNodes;
};