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
	void Load(void);
	void Save(void);
	bool IsNamePwMatch(HDATA h,HDATA &rh );
	bool IsNamePwMatch(HDATA h);
};

