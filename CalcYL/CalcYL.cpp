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
		ui.GBtn->setText(QString::fromLocal8Bit("正确"));
		ui.TrueAnsLab->setText(QString::fromLocal8Bit("正确答案是：")+Ath.gRightAns);
	}
	else
	{
		ui.GBtn->setText(QString::fromLocal8Bit("错误"));
		ui.TrueAnsLab->setText(QString::fromLocal8Bit("正确答案是：") + Ath.gRightAns);
		Scoe -= perScoe;
	}
	if (TestId < TestN)
	{
		TestId++;
		ui.groupBox->setTitle(QString::fromLocal8Bit("第") + QString::number(TestId) + QString::fromLocal8Bit("题"));
		Ath.m();
		ui.TestLab->setText(Ath.pTest);
	}
	else
	{
		TimerInt = -1;
		ui.TimeOutLab->setText(QString::number(0));
		QMessageBox::warning(this, QString::fromLocal8Bit("考试结束"), QString::fromLocal8Bit("考试结束，您的成绩为%1").arg(Scoe));
		ui.AnsOkBtn->setDisabled(true);
		ui.PushTestBtn->setDisabled(false);
		TestTimerOut.stop();
		Scoe = 100;
	}
}
///定时刷新槽函数
void CalcYL::on_TimerOut()
{
	if (TimerInt == -1)
		return;//考试未开始
	if (TimerInt > 0)
	{
		TimerInt--;
		ui.TimeOutLab->setText(QString::number(TimerInt));
	}
	else
	{
		//考试时间结束

		Scoe -= perScoe*(TestN + 1 - TestId);
		QMessageBox::warning(this, QString::fromLocal8Bit("考试时间结束"), QString::fromLocal8Bit("考试时间结束，您的成绩为%1").arg(Scoe));
		Scoe = 100;
		TestTimerOut.stop();
		TimerInt = -1;
		ui.AnsOkBtn->setDisabled(true);
		ui.PushTestBtn->setDisabled(false);
	}

}
///确定题目个数按钮槽函数
void CalcYL::on_PushTestBtn_clicked()
{
	TestN= ui.TestNInEdt->text().toInt();

	if (TestN > 0)
	{
		TestId = 0;
		perScoe = 100 / TestN;				//采用减分制
		TimerInt = 15 * TestN;				//计算考试时间
		Ath.TestN = TestN;
		Ath.m();
		ui.TestLab->setText(Ath.pTest);
		ui.PushTestBtn->setDisabled(true);	//答题过程中不允许生成题目
		TestId++;
		ui.groupBox->setTitle(QString::fromLocal8Bit("第") + QString::number(TestId) + QString::fromLocal8Bit("题"));
		TestTimerOut.start(1000);
		ui.AnsOkBtn->setDisabled(false);
	}
	else
	{
		ui.TestNInEdt->clear();
		QMessageBox::warning(this, QString::fromLocal8Bit("提示"), QString::fromLocal8Bit("请输入正确的题目个数"));
	}
	

}