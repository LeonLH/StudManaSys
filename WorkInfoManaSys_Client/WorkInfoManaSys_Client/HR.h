#pragma once
#include"Header.h"
#include<vector>


using namespace std;



//HR��Ϣ�洢����Ϊ��std::vector
class CHR
{


	vector <HDATA> m_Hr;

public:
	CHR(void);
	~CHR(void);
	void RecvAllInfo(void);
};

