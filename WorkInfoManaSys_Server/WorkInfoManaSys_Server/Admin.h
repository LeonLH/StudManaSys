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
	void Run(void);
	bool Login(CSockLH &socka);
	bool OnReceive(int nProt,CSockLH &socka);
	bool Connect(void);

	
};

