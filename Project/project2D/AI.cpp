#include "AI.h"



AI::AI()
{
}


AI::~AI()
{
}

void AI::Update(float fDeltaTime)
{

}

void AI::Draw(Renderer2D* pRenderer)
{
	pRenderer->setRenderColour(0xFF0000FF);
	pRenderer->drawCircle(m_v2Pos.x, m_v2Pos.y, 0, 20.0f);
}
