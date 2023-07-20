#ifndef GRAPHMANAGER_H
#define GRAPHMANAGER_H

#include <map>
#include "../Sources/Object/ObjectBase.h"
#include "../Sources/Scene/SceneBase.h"
#include <string>
class GraphManager
{
public:
	static GraphManager* Instance()
	{
		static GraphManager instance;
		return &instance;
	}
public:
	~GraphManager(){}
	public:
	void Entry(std::string graphname, ObjectBase::ObjectKind kind);
	int SetGraphData(ObjectBase::ObjectKind kind);
	void DeleteGraphData(ObjectBase::ObjectKind kind);
	void AllDeleteGraph();
private:
	GraphManager() {}
	GraphManager(const GraphManager& Ins) = delete;

private:
	std::map<ObjectBase::ObjectKind, int> GraphList;
};

#endif // !GRAPHMANAGER_H
