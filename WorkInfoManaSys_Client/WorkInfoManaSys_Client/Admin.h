#pragma once
#include "SockLH.h"
#include"Worker.h"
#include"HR.h"


class CAdmin
{



	CWorker m_Awor;
	CHR m_Ahr;
	CSockLH m_Asock;
	HDATA m_CurUsr;			//�˴��Ƿ�ɶ����static��̬��������̬������ʲô���ã�


public:
	CAdmin(void);
	~CAdmin(void);
	void Welcome(void);
	void Run(void);
	bool Login(void);
	bool Load(void);
	bool Save(void);
	
	bool Connect(void);
	int Menu(void);

};

