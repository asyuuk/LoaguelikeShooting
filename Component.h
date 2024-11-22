#pragma once
#include<list>
class Component
{
protected:
public:
	Component(){}
	virtual ~Component(){}
	Object* Parent;
	virtual void Start(){}
	virtual void Update(){}
	virtual void Draw(){}
};

class Object
{
public:
	Object() {}
	~Object()
	{
		for (auto com : ComponentList)
			delete com;
	}
	std::list<Component*>ComponentList;
	void Update()
	{
		auto buff = ComponentList;
		for (auto com : buff)
			com->Update();
	}
	void Draw()
	{
		for (auto com : ComponentList)
			com->Draw();

	}
	template<class T>
	T* GetComponent()
	{
		for (auto com : ComponentList)
		{
			T* buff = dynamic_cast<T*>(com);
			if (buff != nullptr)
			{
				return buff;
			}
			return nullptr;
		}
	}

	template<class T>
	T* AddComponent()
	{
		T* buff = new T();
		buff->Parent = this;
		ComponentList.push_back(buff);
		buff->Start();
		return buff;

	}


};