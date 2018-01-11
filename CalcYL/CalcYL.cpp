#include "calcyl.h"

CalcYL::CalcYL(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(&TestTimerOut,SIGNAL(timeout()),this,SLOT(on_TimerOut()));
}

CalcYL::~CalcYL()
{

}

void CalcYL::on_AnsOkBtn_clicked()
{
	if (Ath.Jug(ui.AnsEdt->text()))
	{
		ui.GBtn->setText(QString::fromLocal8Bit("��ȷ"));
		ui.TrueAnsLab->setText(QString::fromLocal8Bit("��ȷ���ǣ�")+Ath.gRightAns);
	}
	else
	{
		ui.GBtn->setText(QString::fromLocal8Bit("����"));
		ui.TrueAnsLab->setText(QString::fromLocal8Bit("��ȷ���ǣ�") + Ath.gRightAns);
		Scoe -= perScoe;
	}
	if (TestId < TestN)
	{
		TestId++;
		ui.groupBox->setTitle(QString::fromLocal8Bit("��") + QString::number(TestId) + QString::fromLocal8Bit("��"));
		Ath.m();
		ui.TestLab->setText(Ath.pTest);
	}
	else
	{
		TimerInt = -1;
		ui.TimeOutLab->setText(QString::number(0));
		QMessageBox::warning(this, QString::fromLocal8Bit("���Խ���"), QString::fromLocal8Bit("���Խ��������ĳɼ�Ϊ%1").arg(Scoe));
		ui.AnsOkBtn->setDisabled(true);
		ui.PushTestBtn->setDisabled(false);
		TestTimerOut.stop();
		Scoe = 100;
	}
}
///��ʱˢ�²ۺ���
void CalcYL::on_TimerOut()
{
	if (TimerInt == -1)
		return;//����δ��ʼ
	if (TimerInt > 0)
	{
		TimerInt--;
		ui.TimeOutLab->setText(QString::number(TimerInt));
	}
	else
	{
		//����ʱ�����

		Scoe -= perScoe*(TestN + 1 - TestId);
		QMessageBox::warning(this, QString::fromLocal8Bit("����ʱ�����"), QString::fromLocal8Bit("����ʱ����������ĳɼ�Ϊ%1").arg(Scoe));
		Scoe = 100;
		TestTimerOut.stop();
		TimerInt = -1;
		ui.AnsOkBtn->setDisabled(true);
		ui.PushTestBtn->setDisabled(false);
	}

}
///ȷ����Ŀ������ť�ۺ���
void CalcYL::on_PushTestBtn_clicked()
{
	TestN= ui.TestNInEdt->text().toInt();

	if (TestN > 0)
	{
		TestId = 0;
		perScoe = 100 / TestN;				//���ü�����
		TimerInt = 15 * TestN;				//���㿼��ʱ��
		Ath.TestN = TestN;
		Ath.m();
		ui.TestLab->setText(Ath.pTest);
		ui.PushTestBtn->setDisabled(true);	//��������в�����������Ŀ
		TestId++;
		ui.groupBox->setTitle(QString::fromLocal8Bit("��") + QString::number(TestId) + QString::fromLocal8Bit("��"));
		TestTimerOut.start(1000);
		ui.AnsOkBtn->setDisabled(false);
	}
	else
	{
		ui.TestNInEdt->clear();
		QMessageBox::warning(this, QString::fromLocal8Bit("��ʾ"), QString::fromLocal8Bit("��������ȷ����Ŀ����"));
	}
	

}