#pragma once
#include"Header.h"

#include<list>
using namespace std;
//Ա����Ϣ�洢����Ϊ��std::list
class CWorker
{


	list <WDATA> m_Wor;
public:
	CWorker(void);
	~CWorker(void);
	void Print(void);
	bool RecvAllInfo(void);
};

