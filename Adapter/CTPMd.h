// CTP.h
#include <vcclr.h>

#include <iostream>

#include ".\ThostTraderApi\ThostFtdcMdApi.h"
#include "CSApiStruct.h"

#pragma once

using namespace System;
using namespace std;
using namespace System::Runtime::InteropServices;

namespace CTP {

#include ".\ThostTraderApi\ThostFtdcMdApi.h"


	CThostFtdcMdApi* pUserApi;

	// ���ò���
	char FRONT_ADDR[] = "tcp://asp-sim2-md1.financial-trading-platform.com:26213";		// ǰ�õ�ַ
	TThostFtdcBrokerIDType	BROKER_ID = "2030";				// ���͹�˾����
	TThostFtdcInvestorIDType INVESTOR_ID = "00092";			// Ͷ���ߴ���
	TThostFtdcPasswordType  PASSWORD = "888888";			// �û�����
	char *ppInstrumentID[] = {"cu0907", "cu0909"};			// ���鶩���б�
	int iInstrumentID = 2;								// ���鶩������

	int iRequestID = 0;  // ������

	public interface class CTPMdSpi
	{
	public:
		///����Ӧ��
		virtual void OnRspError(CSCThostFtdcRspInfoField^ pRspInfo,
			int  nRequestID, bool bIsLast);
		virtual void OnFrontDisconnected(int nReason);
		virtual void OnHeartBeatWarning(int nTimeLapse);
		virtual void OnFrontConnected();
		virtual void OnRspUserLogin(CSCThostFtdcRspUserLoginField^ pRspUserLogin,	CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
		virtual void OnRspSubMarketData(CSCThostFtdcSpecificInstrumentField^ pSpecificInstrument, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
		virtual void OnRspUnSubMarketData(CSCThostFtdcSpecificInstrumentField^ pSpecificInstrument, CSCThostFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
		virtual void OnRtnDepthMarketData(CSCThostFtdcDepthMarketDataField^ pDepthMarketData);
	};

	public ref class CTPConfig
	{
	public:
		// ���ò��� ���²�����ο�ԭʼC++ API �ĵ�
		// ǰ�õ�ַ
		String  ^FRONT_ADDR;
		// ���͹�˾����
		String	 ^BROKER_ID ;
		// Ͷ���ߴ���
		String  ^INVESTOR_ID ;	
		// �û�����
		String  ^PASSWORD;	
		// ��Լ����
		String  ^INSTRUMENT_ID;			
		// ���鶩���б�
		array<String ^> ^  ppInstrumentID;	
		// ���鶩������
		int iInstrumentID ;	
		// ������
		int iRequestID;  
		//double	LIMIT_PRICE;
		//char	DIRECTION;

		CTPMdSpi^  ctpSpi;  
	};

	public   class CMdSpi : public CThostFtdcMdSpi
	{
	public:
		///����Ӧ��
		virtual void OnRspError(CThostFtdcRspInfoField *pRspInfo,
			int nRequestID, bool bIsLast);

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        0x1001 �����ʧ��
		///        0x1002 ����дʧ��
		///        0x2001 ����������ʱ
		///        0x2002 ��������ʧ��
		///        0x2003 �յ�������
		virtual void OnFrontDisconnected(int nReason);

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		virtual void OnHeartBeatWarning(int nTimeLapse);

		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected();

		///��¼������Ӧ
		virtual void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,	CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��������Ӧ��
		virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///ȡ����������Ӧ��
		virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField *pSpecificInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�������֪ͨ
		virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData);


		gcroot<CTPConfig^>   ctpConfig;

	private:
		void ReqUserLogin();
		void SubscribeMarketData();
		// 
		bool IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo);
	};

	public ref class CTPMDAdapter
	{
	public:
		int Start()
		{
			pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();			// ����UserApi
			CThostFtdcMdSpi* pUserSpi = new CMdSpi();
			((CMdSpi*)pUserSpi)->ctpConfig=this->ctpConfig;

			pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
			pUserApi->RegisterFront(FRONT_ADDR);					// connect
			pUserApi->Init();

			pUserApi->Join();

			return 0;
		}
		void Config(CTPConfig^   ctpConfig)
		{
			this->ctpConfig=ctpConfig;
			char* abc;
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpConfig->FRONT_ADDR)).ToPointer();
			strcpy_s(FRONT_ADDR,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpConfig->BROKER_ID)).ToPointer();
			strcpy_s(BROKER_ID,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpConfig->INVESTOR_ID)).ToPointer();
			strcpy_s(INVESTOR_ID,abc);
			abc=	( char*)   (Marshal::StringToHGlobalAnsi(ctpConfig->PASSWORD)).ToPointer();
			strcpy_s(PASSWORD,abc);
			for( int i=0 ;i<ctpConfig->ppInstrumentID->Length;i++)
			{
				ppInstrumentID[i]=( char*)   (Marshal::StringToHGlobalAnsi(ctpConfig->ppInstrumentID[i])).ToPointer();
			}
			iInstrumentID=ctpConfig->iInstrumentID;

		}
		void ReqUserLogin()
		{
			cerr << __FUNCTION__ << endl;
		}
		void SubscribeMarketData()
		{

		}
		// 
		bool IsErrorRspInfo(CSCThostFtdcRspInfoField ^pRspInfo)
		{
			return true;
		}
		CTPConfig^   ctpConfig;
	private:
	};


}
