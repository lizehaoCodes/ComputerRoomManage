#pragma once
#include"identity.h"
#include"orderFile.h"
#include<vector>
//��ʦ��
class teacher :public identity {
public:

	int m_teacherId;//ְ�����

	//Ĭ�Ϲ���
	teacher();

	//�вι���
	teacher(int id, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();


};