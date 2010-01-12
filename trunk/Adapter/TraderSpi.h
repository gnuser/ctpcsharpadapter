#pragma once

#include <vcclr.h>
#include ".\ThostTraderApi\ThostFtdcTraderApi.h"
#include "CSApiStruct.h"


using namespace System;
using namespace std;
using namespace System::Runtime::InteropServices;


namespace CTP{


	public interface class  CTPTraderSpi
	{
	public:

		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected();

		///��¼������Ӧ
		virtual void OnRspUserLogin(CSCThostFtdcRspUserLoginField^ pRspUserLogin,	CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///Ͷ���߽�����ȷ����Ӧ
		virtual void OnRspSettlementInfoConfirm(CSCThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��Լ��Ӧ
		virtual void OnRspQryInstrument(CSCThostFtdcInstrumentField^ pInstrument, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ʽ��˻���Ӧ
		virtual void OnRspQryTradingAccount(CSCThostFtdcTradingAccountField^ pTradingAccount, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���ֲ߳���Ӧ
		virtual void OnRspQryInvestorPosition(CSCThostFtdcInvestorPositionField^ pInvestorPosition, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///����¼��������Ӧ
		virtual void OnRspOrderInsert(CSCThostFtdcInputOrderField^ pInputOrder, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///��������������Ӧ
		virtual void OnRspOrderAction(CSCThostFtdcInputOrderActionField^ pInputOrderAction, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///����Ӧ��
		virtual void OnRspError(CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		virtual void OnFrontDisconnected(int nReason);

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		virtual void OnHeartBeatWarning(int nTimeLapse);

		///����֪ͨ
		virtual void OnRtnOrder(CSCThostFtdcOrderField^ pOrder);

		///�ɽ�֪ͨ
		virtual void OnRtnTrade(CSCThostFtdcTradeField^ pTrade);

		//private:
		//	///�û���¼����
		//	void ReqUserLogin();
		//	///Ͷ���߽�����ȷ��
		//	void ReqSettlementInfoConfirm();
		//	///�����ѯ��Լ
		//	void ReqQryInstrument();
		//	///�����ѯ�ʽ��˻�
		//	void ReqQryTradingAccount();
		//	///�����ѯͶ���ֲ߳�
		//	void ReqQryInvestorPosition();
		//	///����¼������
		//	void ReqOrderInsert();
		//	///������������
		//	void ReqOrderAction(CSCThostFtdcOrderField^ pOrder);
		//
		//	// �Ƿ��յ��ɹ�����Ӧ
		//	bool IsErrorRspInfo(CSCThostFtdcRspInfoField^ pRspInfo);
		//	// �Ƿ��ҵı����ر�
		//	bool IsMyOrder(CSCThostFtdcOrderField^ pOrder);
		//	// �Ƿ����ڽ��׵ı���
		//	bool IsTradingOrder(CSCThostFtdcOrderField^ pOrder);

	};



	public ref class CTPTraderConfig
	{
	public:
		// ���ò��� ���²�����ο�ԭʼC++ API �ĵ�

		String  ^FRONT_ADDR;		// ǰ�õ�ַ
		String	 ^BROKER_ID ;		// ���͹�˾����
		String  ^INVESTOR_ID ;		// Ͷ���ߴ���
		String  ^PASSWORD;			// �û�����
		String  ^INSTRUMENT_ID;		// ��Լ����
		int iInstrumentID ;	

		int iRequestID;             // ������
		double	LIMIT_PRICE;        //�޼�
		char	DIRECTION;          //�������� ��ο�
		CTPTraderSpi  ^ctpTraderSpi; 
	};


	class CTraderSpi : public CThostFtdcTraderSpi
	{

	public:
		// USER_API����
		CThostFtdcTraderApi* pUserApi;

		// ���ò���
		char FRONT_ADDR[100];		// ǰ�õ�ַ
		char BROKER_ID[11];		// ���͹�˾����
		char INVESTOR_ID[13];		// Ͷ���ߴ���
		char PASSWORD[41];			// �û�����
		char INSTRUMENT_ID[31];	// ��Լ����
		double	LIMIT_PRICE;	// �۸�
		char	DIRECTION;	// ��������
	
		// ������
		int iRequestID;

		// �����ļ�
		gcroot<CTPTraderConfig^>   ctpTraderConfig;


		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected();

		///��¼������Ӧ
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///Ͷ���߽�����ȷ����Ӧ
		virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ��Լ��Ӧ
		virtual void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯ�ʽ��˻���Ӧ
		virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�����ѯͶ���ֲ߳���Ӧ
		virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����¼��������Ӧ
		virtual void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��������������Ӧ
		virtual void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///����Ӧ��
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		virtual void OnFrontDisconnected(int nReason);

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		virtual void OnHeartBeatWarning(int nTimeLapse);

		///����֪ͨ
		virtual void OnRtnOrder(CThostFtdcOrderField *pOrder);

		///�ɽ�֪ͨ
		virtual void OnRtnTrade(CThostFtdcTradeField *pTrade);


	//private:
		///�û���¼����
		void ReqUserLogin();
		///Ͷ���߽�����ȷ��
		void ReqSettlementInfoConfirm();
		///�����ѯ��Լ
		void ReqQryInstrument();
		///�����ѯ�ʽ��˻�
		void ReqQryTradingAccount();
		///�����ѯͶ���ֲ߳�
		void ReqQryInvestorPosition();
		///����¼������
		void ReqOrderInsert();
		///������������
		void ReqOrderAction(CThostFtdcOrderField *pOrder);

		// �Ƿ��յ��ɹ�����Ӧ
		bool IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo);
		// �Ƿ��ҵı����ر�
		bool IsMyOrder(CThostFtdcOrderField *pOrder);
		// �Ƿ����ڽ��׵ı���
		bool IsTradingOrder(CThostFtdcOrderField *pOrder);

	};




	public ref class CTPTraderAdapter
	{

	public:
		CThostFtdcTraderApi* pUserApi;
		CTraderSpi* pUserSpi;

		int Start()
		{
			//CThostFtdcTraderApi* pUserApi;
			pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi();			// ����UserApi
			//CTraderSpi* pUserSpi = new CTraderSpi();
			pUserSpi = new CTraderSpi();
			pUserSpi->pUserApi=pUserApi;

			pUserSpi->ctpTraderConfig=this->ctpTraderConfig;

			char* abc;
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpTraderConfig->FRONT_ADDR)).ToPointer();
			strcpy_s(pUserSpi->FRONT_ADDR,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpTraderConfig->BROKER_ID)).ToPointer();
			strcpy_s(pUserSpi->BROKER_ID,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpTraderConfig->INVESTOR_ID)).ToPointer();
			strcpy_s(pUserSpi->INVESTOR_ID,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpTraderConfig->PASSWORD)).ToPointer();
			strcpy_s(pUserSpi->PASSWORD,abc);

			pUserSpi->DIRECTION=ctpTraderConfig->DIRECTION;
			pUserSpi->iRequestID=ctpTraderConfig->iRequestID;
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpTraderConfig->INSTRUMENT_ID)).ToPointer();
			strcpy_s(pUserSpi->INSTRUMENT_ID,abc);
			pUserSpi->LIMIT_PRICE=ctpTraderConfig->LIMIT_PRICE;

			pUserApi->RegisterSpi((CThostFtdcTraderSpi*)pUserSpi);			// ע���¼���
			pUserApi->SubscribePublicTopic(TERT_RESTART);					// ע�ṫ����
			pUserApi->SubscribePrivateTopic(TERT_RESTART);					// ע��˽����
			pUserApi->RegisterFront(( char*) (Marshal::StringToHGlobalAnsi(ctpTraderConfig->FRONT_ADDR)).ToPointer());							// connect
			pUserApi->Init();

			pUserApi->Join();
			
			return 0;
		}

		void Config(CTPTraderConfig^   ctpTraderConfig)
		{
			this->ctpTraderConfig=ctpTraderConfig;
	
		}

		///�û���¼����
		void ReqUserLogin()
		{
			pUserSpi->ReqUserLogin();
		}
		///Ͷ���߽�����ȷ��
		void ReqSettlementInfoConfirm()
		{
			pUserSpi->ReqSettlementInfoConfirm();
		}
		///�����ѯ��Լ
		void ReqQryInstrument()
		{
			pUserSpi->ReqQryInstrument();

		}
		///�����ѯ�ʽ��˻�
		void ReqQryTradingAccount()
		{
			pUserSpi->ReqQryTradingAccount();
		}
		///�����ѯͶ���ֲ߳�
		void ReqQryInvestorPosition()
		{
			pUserSpi->ReqQryInvestorPosition();
		}
		///����¼������
		void ReqOrderInsert()
		{
			pUserSpi->ReqOrderInsert();
		}
		///������������
		void ReqOrderAction(CSCThostFtdcOrderField^ pOrder)
		{

		}

		// �Ƿ��յ��ɹ�����Ӧ
		bool IsErrorRspInfo(CSCThostFtdcRspInfoField^ pRspInfo)
		{
			return true;
		}
		// �Ƿ��ҵı����ر�
		bool IsMyOrder(CSCThostFtdcOrderField^ pOrder)
		{
			return true;
		}
		// �Ƿ����ڽ��׵ı���
		bool IsTradingOrder(CSCThostFtdcOrderField^ pOrder)
		{
			return true;
		}
		CTPTraderConfig^   ctpTraderConfig;

	private:


	};


}