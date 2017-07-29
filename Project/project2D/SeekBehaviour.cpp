#include "SeekBehaviour.h"
#include "Input.h"
#include "Agent.h"

using namespace aie;

SeekBehaviour::SeekBehaviour()
{
}


SeekBehaviour::~SeekBehaviour()
{
}

Vector2 SeekBehaviour::Calculate(Agent* pAgent, float fDeltaTime)
{
	int nMouseX;
	int nMouseY;
	Input::getInstance()->getMouseXY(&nMouseX, &nMouseY);
	Vector2 v2MousePos(nMouseX, nMouseY);

	Vector2 v2Dir = v2MousePos - pAgent->GetPosition();
	v2Dir.normalise();

	return v2Dir * 100.0f * fDeltaTime;
}
