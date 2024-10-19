#pragma once
#include"identity.h"
#include<vector>
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"

//����Ա��
class manager :public identity {
public:
	
	//Ĭ�Ϲ���
	manager();

	//�вι���
	manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();


	//����˺�
	void addPerson();
	//ȥ�ز���  
	void initvector();//��ʼ������
	vector<student>v_stu;//ѧ������
	vector<teacher>v_tea;//��ʦ����
	bool checkRepeat(int id, int type); //ȥ�غ���

	//�鿴�˺�
	void showPerson();	

	//ɾ���˺�
	void deletePerson();

	//��ӻ�����Ϣ
	void addComputer();
	vector<computerRoom>v_com;//��������
	void initCom();//��ʼ��������Ϣ

	//�鿴������Ϣ
	void showComputer();

	//�޸Ļ�����Ϣ
	void modifyComputer();


	//���ԤԼ��¼
	void cleanFile();


};
