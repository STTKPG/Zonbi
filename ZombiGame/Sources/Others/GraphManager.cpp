#include "GraphManager.h"
#include <DxLib.h>
void GraphManager::Entry(std::string graphname, ObjectBase::ObjectKind kind)
{
	GraphList.insert(std::make_pair(ObjectBase::ObjectKind::GoDeepLogo, LoadGraph(graphname.c_str())));
}

int GraphManager::SetGraphData(ObjectBase::ObjectKind kind)
{
	auto Itr = GraphList.find(kind);

	return (*Itr).second;
}

void GraphManager::DeleteGraphData(ObjectBase::ObjectKind kind)
{
	auto Itr = GraphList.find(kind);
	DeleteGraph((*Itr).second);
	GraphList.erase(Itr);
}

void GraphManager::AllDeleteGraph()
{
	InitGraph();
	GraphList.clear();
}