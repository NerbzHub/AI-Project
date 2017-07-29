#pragma once
#include "Renderer2D.h"
#include "Vector2.h"

using namespace aie;
class Agent
{
public:
	Agent();
	virtual ~Agent();

	virtual void Update(float fDeltaTime);
	virtual void Draw(Renderer2D renderer);

	Vector2 GetPosition() { return m_v2Pos; }

protected:
	Vector2 m_v2Pos;
	Vector2 m_v2Velocity;
	
	
};
