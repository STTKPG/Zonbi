#include "ModelManager.h"

void ModelManager::Entry(std::string modelname, ObjectBase::ObjectKind kind)
{
	ModelList.insert(std::make_pair(kind, MV1LoadModel(modelname.c_str())));
}

int ModelManager::GetModelData(ObjectBase::ObjectKind kind)
{
	auto Itr = ModelList.find(kind);

	return (*Itr).second;
}

void ModelManager::DeleteModelData(ObjectBase::ObjectKind kind)
{
	auto Itr = ModelList.find(kind);
	MV1DeleteModel((*Itr).second);
	ModelList.erase(Itr);
}

void ModelManager::ClearModelData()
{
	for (auto Itr = ModelList.begin(); Itr == ModelList.end(); Itr++)
	{
		MV1DeleteModel((*Itr).second);
		ModelList.erase(Itr);
	}

	ModelList.clear();
}