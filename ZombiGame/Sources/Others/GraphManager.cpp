#include "GraphManager.h"
#include <DxLib.h>
void GraphManager::Entry(std::string graphname, ObjectBase::ObjectKind kind)
{
	GraphList.insert(std::make_pair(ObjectBase::ObjectKind::GoDeepLogo, LoadGraph(graphname.c_str())));
}