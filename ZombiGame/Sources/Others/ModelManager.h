#ifndef MODELMANAGER_H
#define MODELMANAGER_H

#include <map>
#include <string>
#include "DxLib.h"
#include "../Object/ObjectBase.h"

class ModelManager
{
public:
	static ModelManager* Instance()
	{
		static ModelManager instance;
		return &instance;
	}
public:
	~ModelManager(){}

public:
	void Entry(std::string modelname, ObjectBase::ObjectKind kind);
	int GetModelData(ObjectBase::ObjectKind kind);
	void DeleteModelData(ObjectBase::ObjectKind kind);
	void ClearModelData();

private:
	ModelManager(){}
	ModelManager(const ModelManager& ins) = delete;

private:
	std::map<ObjectBase::ObjectKind, int> ModelList;

};

#endif // !MODELMANAGER_H
