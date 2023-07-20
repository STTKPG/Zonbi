#include "ObjectBaseGraph.h"
#include "DxLib.h"

void ObjectBaseGraph::Draw()
{
	DrawExtendGraph(Top.X, Top.Y, Under.X, Under.Y, GraphManager::Instance()->SetGraphData(Kind), true);
}