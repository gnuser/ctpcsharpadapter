
namespace CTP {

public ref struct CSCThostFtdcRspInfoField
{
	///错误代码
public :
	short	ErrorID;
	///错误信息
	System::String^	ErrorMsg;
};


///用户登录应答
public ref struct CSCThostFtdcRspUserLoginField
{
	///交易日
	System::String^	TradingDay;
	///登录成功时间
	System::String^	LoginTime;
	///经纪公司代码
	System::String^	BrokerID;
	///用户代码
	System::String^	UserID;
	///交易系统名称
	System::String^	SystemName;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///最大报单引用
	System::String^	MaxOrderRef;
	///上期所时间
	System::String^	SHFETime;
	///大商所时间
	System::String^	DCETime;
	///郑商所时间
	System::String^	CZCETime;
	///中金所时间
	System::String^	FFEXTime;
};
//
/////指定的合约
//public ref struct CSCThostFtdcSpecificInstrumentField
//{
//	///合约代码
//	System::String^	InstrumentID;
//};


///深度行情
public ref struct CSCThostFtdcDepthMarketDataField
{
	///交易日
	System::String^	TradingDay;
	///合约代码
	System::String^	InstrumentID;
	///交易所代码
	System::String^	ExchangeID;
	///合约在交易所的代码
	System::String^	ExchangeInstID;
	///最新价
	double	LastPrice;
	///上次结算价
	double	PreSettlementPrice;
	///昨收盘
	double	PreClosePrice;
	///昨持仓量
	double	PreOpenInterest;
	///今开盘
	double	OpenPrice;
	///最高价
	double	HighestPrice;
	///最低价
	double	LowestPrice;
	///数量
	double	Volume;
	///成交金额
	double	Turnover;
	///持仓量
	double	OpenInterest;
	///今收盘
	double	ClosePrice;
	///本次结算价
	double	SettlementPrice;
	///涨停板价
	double	UpperLimitPrice;
	///跌停板价
	double	LowerLimitPrice;
	///昨虚实度
	double	PreDelta;
	///今虚实度
	double	CurrDelta;
	///最后修改时间
	System::String^	UpdateTime;
	///最后修改毫秒
	int	UpdateMillisec;
	///申买价一
	double	BidPrice1;
	///申买量一
	double	BidVolume1;
	///申卖价一
	double	AskPrice1;
	///申卖量一
	double	AskVolume1;
	///申买价二
	double	BidPrice2;
	///申买量二
	double	BidVolume2;
	///申卖价二
	double	AskPrice2;
	///申卖量二
	double	AskVolume2;
	///申买价三
	double	BidPrice3;
	///申买量三
	double	BidVolume3;
	///申卖价三
	double	AskPrice3;
	///申卖量三
	double	AskVolume3;
	///申买价四
	double	BidPrice4;
	///申买量四
	double	BidVolume4;
	///申卖价四
	double	AskPrice4;
	///申卖量四
	double	AskVolume4;
	///申买价五
	double	BidPrice5;
	///申买量五
	double	BidVolume5;
	///申卖价五
	double	AskPrice5;
	///申卖量五
	double	AskVolume5;
	///当日均价
	double	AveragePrice;
};


///信息分发
public ref struct CSCThostFtdcDisseminationField
{
	///序列系列号
	int	SequenceSeries;
	///序列号
	int	SequenceNo;
};

///用户登录请求
public ref struct CSCThostFtdcReqUserLoginField
{
	///交易日
	System::String^ 	TradingDay;
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///密码
	System::String^ 	Password;
	///用户端产品信息
	System::String^ 	UserProductInfo;
	///接口端产品信息
	System::String^ 	InterfaceProductInfo;
	///协议信息
	System::String^ 	ProtocolInfo;
};

//
/////用户登录应答
//public ref struct CSCThostFtdcRspUserLoginField
//{
//	///交易日
//	System::String^ 	TradingDay;
//	///登录成功时间
//	System::String^ 	LoginTime;
//	///经纪公司代码
//	System::String^ 	BrokerID;
//	///用户代码
//	System::String^ 	UserID;
//	///交易系统名称
//	System::String^ 	SystemName;
//	///前置编号
//	int	FrontID;
//	///会话编号
//	int	SessionID;
//	///最大报单引用
//	System::String^ 	MaxOrderRef;
//	///上期所时间
//	System::String^ 	SHFETime;
//	///大商所时间
//	System::String^ 	DCETime;
//	///郑商所时间
//	System::String^ 	CZCETime;
//	///中金所时间
//	System::String^ 	FFEXTime;
//};

///用户登出请求
public ref struct CSCThostFtdcUserLogoutField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///强制交易员退出
public ref struct CSCThostFtdcForceUserLogoutField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///银期转帐报文头
public ref struct CSCThostFtdcTransferHeaderField
{
	///版本号，常量，1.0
	System::String^ 	Version;
	///交易代码，必填
	System::String^ 	TradeCode;
	///交易日期，必填，格式：yyyymmdd
	System::String^ 	TradeDate;
	///交易时间，必填，格式：hhmmss
	System::String^ 	TradeTime;
	///发起方流水号，N/A
	System::String^ 	TradeSerial;
	///期货公司代码，必填
	System::String^ 	FutureID;
	///银行代码，根据查询银行得到，必填
	System::String^ 	BankID;
	///银行分中心代码，根据查询银行得到，必填
	System::String^ 	BankBrchID;
	///操作员，N/A
	System::String^ 	OperNo;
	///交易设备类型，N/A
	System::String^ 	DeviceID;
	///记录数，N/A
	System::String^ 	RecordNum;
	///会话编号，N/A
	int	SessionID;
	///请求编号，N/A
	int	RequestID;
};

///银行资金转期货请求，TradeCode=202001
public ref struct CSCThostFtdcTransferBankToFutureReqField
{
	///期货资金账户
	System::String^ 	FutureAccount;
	///密码标志
	System::String^ 	FuturePwdFlag;
	///密码
	System::String^ 	FutureAccPwd;
	///转账金额
	double	TradeAmt;
	///客户手续费
	double	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	System::String^ 	CurrencyCode;
};

///银行资金转期货请求响应
public ref struct CSCThostFtdcTransferBankToFutureRspField
{
	///响应代码
	System::String^ 	RetCode;
	///响应信息
	System::String^ 	RetInfo;
	///资金账户
	System::String^ 	FutureAccount;
	///转帐金额
	double	TradeAmt;
	///应收客户手续费
	double	CustFee;
	///币种
	System::String^ 	CurrencyCode;
};

///期货资金转银行请求，TradeCode=202002
public ref struct CSCThostFtdcTransferFutureToBankReqField
{
	///期货资金账户
	System::String^ 	FutureAccount;
	///密码标志
	System::String^ 	FuturePwdFlag;
	///密码
	System::String^ 	FutureAccPwd;
	///转账金额
	double	TradeAmt;
	///客户手续费
	double	CustFee;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	System::String^ 	CurrencyCode;
};

///期货资金转银行请求响应
public ref struct CSCThostFtdcTransferFutureToBankRspField
{
	///响应代码
	System::String^ 	RetCode;
	///响应信息
	System::String^ 	RetInfo;
	///资金账户
	System::String^ 	FutureAccount;
	///转帐金额
	double	TradeAmt;
	///应收客户手续费
	double	CustFee;
	///币种
	System::String^ 	CurrencyCode;
};

///查询银行资金请求，TradeCode=204002
public ref struct CSCThostFtdcTransferQryBankReqField
{
	///期货资金账户
	System::String^ 	FutureAccount;
	///密码标志
	System::String^ 	FuturePwdFlag;
	///密码
	System::String^ 	FutureAccPwd;
	///币种：RMB-人民币 USD-美圆 HKD-港元
	System::String^ 	CurrencyCode;
};

///查询银行资金请求响应
public ref struct CSCThostFtdcTransferQryBankRspField
{
	///响应代码
	System::String^ 	RetCode;
	///响应信息
	System::String^ 	RetInfo;
	///资金账户
	System::String^ 	FutureAccount;
	///银行余额
	double	TradeAmt;
	///银行可用余额
	double	UseAmt;
	///银行可取余额
	double	FetchAmt;
	///币种
	System::String^ 	CurrencyCode;
};

///查询银行交易明细请求，TradeCode=204999
public ref struct CSCThostFtdcTransferQryDetailReqField
{
	///期货资金账户
	System::String^ 	FutureAccount;
};

///查询银行交易明细请求响应
public ref struct CSCThostFtdcTransferQryDetailRspField
{
	///交易日期
	System::String^ 	TradeDate;
	///交易时间
	System::String^ 	TradeTime;
	///交易代码
	System::String^ 	TradeCode;
	///期货流水号
	int	FutureSerial;
	///期货公司代码
	System::String^ 	FutureID;
	///资金帐号
	System::String^ 	FutureAccount;
	///银行流水号
	int	BankSerial;
	///银行代码
	System::String^ 	BankID;
	///银行分中心代码
	System::String^ 	BankBrchID;
	///银行账号
	System::String^ 	BankAccount;
	///证件号码
	System::String^ 	CertCode;
	///货币代码
	System::String^ 	CurrencyCode;
	///发生金额
	double	TxAmount;
	///有效标志
	System::String^ 	Flag;
};

/////响应信息
//public ref struct CSCThostFtdcRspInfoField
//{
//	///错误代码
//	int	ErrorID;
//	///错误信息
//	System::String^ 	ErrorMsg;
//};

///交易所
public ref struct CSCThostFtdcExchangeField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所名称
	System::String^ 	ExchangeName;
	///交易所属性
	System::String^ 	ExchangeProperty;
};

///产品
public ref struct CSCThostFtdcProductField
{
	///产品代码
	System::String^ 	ProductID;
	///产品名称
	System::String^ 	ProductName;
	///交易所代码
	System::String^ 	ExchangeID;
	///产品类型
	System::String^ 	ProductClass;
	///合约数量乘数
	int	VolumeMultiple;
	///最小变动价位
	double	PriceTick;
	///市价单最大下单量
	int	MaxMarketOrderVolume;
	///市价单最小下单量
	int	MinMarketOrderVolume;
	///限价单最大下单量
	int	MaxLimitOrderVolume;
	///限价单最小下单量
	int	MinLimitOrderVolume;
	///持仓类型
	System::String^ 	PositionType;
	///持仓日期类型
	System::String^ 	PositionDateType;
};

///合约
public ref struct CSCThostFtdcInstrumentField
{
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///合约名称
	System::String^ 	InstrumentName;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///产品代码
	System::String^ 	ProductID;
	///产品类型
	System::String^ 	ProductClass;
	///交割年份
	int	DeliveryYear;
	///交割月
	int	DeliveryMonth;
	///市价单最大下单量
	int	MaxMarketOrderVolume;
	///市价单最小下单量
	int	MinMarketOrderVolume;
	///限价单最大下单量
	int	MaxLimitOrderVolume;
	///限价单最小下单量
	int	MinLimitOrderVolume;
	///合约数量乘数
	int	VolumeMultiple;
	///最小变动价位
	double	PriceTick;
	///创建日
	System::String^ 	CreateDate;
	///上市日
	System::String^ 	OpenDate;
	///到期日
	System::String^ 	ExpireDate;
	///开始交割日
	System::String^ 	StartDelivDate;
	///结束交割日
	System::String^ 	EndDelivDate;
	///合约生命周期状态
	System::String^ 	InstLifePhase;
	///当前是否交易
	int	IsTrading;
	///持仓类型
	System::String^ 	PositionType;
	///持仓日期类型
	System::String^ 	PositionDateType;
	///多头保证金率
	double	LongMarginRatio;
	///空头保证金率
	double	ShortMarginRatio;
};

///经纪公司
public ref struct CSCThostFtdcBrokerField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///经纪公司简称
	System::String^ 	BrokerAbbr;
	///经纪公司名称
	System::String^ 	BrokerName;
	///是否活跃
	int	IsActive;
};

///交易所交易员
public ref struct CSCThostFtdcTraderField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///会员代码
	System::String^ 	ParticipantID;
	///密码
	System::String^ 	Password;
	///安装数量
	int	InstallCount;
};

///投资者
public ref struct CSCThostFtdcInvestorField
{
	///投资者代码
	System::String^ 	InvestorID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者分组代码
	System::String^ 	InvestorGroupID;
	///投资者名称
	System::String^ 	InvestorName;
	///证件类型
	System::String^ 	IdentifiedCardType;
	///证件号码
	System::String^ 	IdentifiedCardNo;
	///是否活跃
	int	IsActive;
	///联系电话
	System::String^ 	Telephone;
	///通讯地址
	System::String^ 	Address;
};

///交易编码
public ref struct CSCThostFtdcTradingCodeField
{
	///投资者代码
	System::String^ 	InvestorID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///交易所代码
	System::String^ 	ExchangeID;
	///客户代码
	System::String^ 	ClientID;
	///是否活跃
	int	IsActive;
};

///会员编码和经纪公司编码对照表
public ref struct CSCThostFtdcPartBrokerField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///是否活跃
	int	IsActive;
};

///管理用户
public ref struct CSCThostFtdcSuperUserField
{
	///用户代码
	System::String^ 	UserID;
	///用户名称
	System::String^ 	UserName;
	///密码
	System::String^ 	Password;
	///是否活跃
	int	IsActive;
};

///管理用户功能权限
public ref struct CSCThostFtdcSuperUserFunctionField
{
	///用户代码
	System::String^ 	UserID;
	///功能代码
	System::String^ 	FunctionCode;
};

///投资者组
public ref struct CSCThostFtdcInvestorGroupField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者分组代码
	System::String^ 	InvestorGroupID;
	///投资者分组名称
	System::String^ 	InvestorGroupName;
};

///资金账户
public ref struct CSCThostFtdcTradingAccountField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者帐号
	System::String^ 	AccountID;
	///上次质押金额
	double	PreMortgage;
	///上次信用额度
	double	PreCredit;
	///上次存款额
	double	PreDeposit;
	///上次结算准备金
	double	PreBalance;
	///上次占用的保证金
	double	PreMargin;
	///利息基数
	double	InterestBase;
	///利息收入
	double	Interest;
	///入金金额
	double	Deposit;
	///出金金额
	double	Withdraw;
	///冻结的保证金
	double	FrozenMargin;
	///冻结的资金
	double	FrozenCash;
	///冻结的手续费
	double	FrozenCommission;
	///当前保证金总额
	double	CurrMargin;
	///资金差额
	double	CashIn;
	///手续费
	double	Commission;
	///平仓盈亏
	double	CloseProfit;
	///持仓盈亏
	double	PositionProfit;
	///期货结算准备金
	double	Balance;
	///可用资金
	double	Available;
	///可取资金
	double	WithdrawQuota;
	///基本准备金
	double	Reserve;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///信用额度
	double	Credit;
	///质押金额
	double	Mortgage;
	///交易所保证金
	double	ExchangeMargin;
};

///投资者持仓
public ref struct CSCThostFtdcInvestorPositionField
{
	///合约代码
	System::String^ 	InstrumentID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///持仓多空方向
	System::String^ 	PosiDirection;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///持仓日期
	System::String^ 	PositionDate;
	///上日持仓
	int	YdPosition;
	///今日持仓
	int	Position;
	///多头冻结
	int	LongFrozen;
	///空头冻结
	int	ShortFrozen;
	///开仓冻结金额
	double	LongFrozenAmount;
	///开仓冻结金额
	double	ShortFrozenAmount;
	///开仓量
	int	OpenVolume;
	///平仓量
	int	CloseVolume;
	///开仓金额
	double	OpenAmount;
	///平仓金额
	double	CloseAmount;
	///持仓成本
	double	PositionCost;
	///上次占用的保证金
	double	PreMargin;
	///占用的保证金
	double	UseMargin;
	///冻结的保证金
	double	FrozenMargin;
	///冻结的资金
	double	FrozenCash;
	///冻结的手续费
	double	FrozenCommission;
	///资金差额
	double	CashIn;
	///手续费
	double	Commission;
	///平仓盈亏
	double	CloseProfit;
	///持仓盈亏
	double	PositionProfit;
	///上次结算价
	double	PreSettlementPrice;
	///本次结算价
	double	SettlementPrice;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///开仓成本
	double	OpenCost;
	///交易所保证金
	double	ExchangeMargin;
	///组合成交形成的持仓
	int	CombPosition;
	///组合多头冻结
	int	CombLongFrozen;
	///组合空头冻结
	int	CombShortFrozen;
	///逐日盯市平仓盈亏
	double	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	double	CloseProfitByTrade;
	///今日持仓
	int	TodayPosition;
	///保证金率
	double	MarginRateByMoney;
	///保证金率(按手数)
	double	MarginRateByVolume;
};

///合约保证金率
public ref struct CSCThostFtdcInstrumentMarginRateField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///多头保证金率
	double	LongMarginRatioByMoney;
	///多头保证金费
	double	LongMarginRatioByVolume;
	///空头保证金率
	double	ShortMarginRatioByMoney;
	///空头保证金费
	double	ShortMarginRatioByVolume;
	///是否相对交易所收取
	int	IsRelative;
};

///合约手续费率
public ref struct CSCThostFtdcInstrumentCommissionRateField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///开仓手续费率
	double	OpenRatioByMoney;
	///开仓手续费
	double	OpenRatioByVolume;
	///平仓手续费率
	double	CloseRatioByMoney;
	///平仓手续费
	double	CloseRatioByVolume;
	///平今手续费率
	double	CloseTodayRatioByMoney;
	///平今手续费
	double	CloseTodayRatioByVolume;
};

/////深度行情
//public ref struct CSCThostFtdcDepthMarketDataField
//{
//	///交易日
//	System::String^ 	TradingDay;
//	///合约代码
//	System::String^ 	InstrumentID;
//	///交易所代码
//	System::String^ 	ExchangeID;
//	///合约在交易所的代码
//	System::String^ 	ExchangeInstID;
//	///最新价
//	double	LastPrice;
//	///上次结算价
//	double	PreSettlementPrice;
//	///昨收盘
//	double	PreClosePrice;
//	///昨持仓量
//	double	PreOpenInterest;
//	///今开盘
//	double	OpenPrice;
//	///最高价
//	double	HighestPrice;
//	///最低价
//	double	LowestPrice;
//	///数量
//	int	Volume;
//	///成交金额
//	double	Turnover;
//	///持仓量
//	double	OpenInterest;
//	///今收盘
//	double	ClosePrice;
//	///本次结算价
//	double	SettlementPrice;
//	///涨停板价
//	double	UpperLimitPrice;
//	///跌停板价
//	double	LowerLimitPrice;
//	///昨虚实度
//	double	PreDelta;
//	///今虚实度
//	double	CurrDelta;
//	///最后修改时间
//	System::String^ 	UpdateTime;
//	///最后修改毫秒
//	int	UpdateMillisec;
//	///申买价一
//	double	BidPrice1;
//	///申买量一
//	int	BidVolume1;
//	///申卖价一
//	double	AskPrice1;
//	///申卖量一
//	int	AskVolume1;
//	///申买价二
//	double	BidPrice2;
//	///申买量二
//	int	BidVolume2;
//	///申卖价二
//	double	AskPrice2;
//	///申卖量二
//	int	AskVolume2;
//	///申买价三
//	double	BidPrice3;
//	///申买量三
//	int	BidVolume3;
//	///申卖价三
//	double	AskPrice3;
//	///申卖量三
//	int	AskVolume3;
//	///申买价四
//	double	BidPrice4;
//	///申买量四
//	int	BidVolume4;
//	///申卖价四
//	double	AskPrice4;
//	///申卖量四
//	int	AskVolume4;
//	///申买价五
//	double	BidPrice5;
//	///申买量五
//	int	BidVolume5;
//	///申卖价五
//	double	AskPrice5;
//	///申卖量五
//	int	AskVolume5;
//	///当日均价
//	double	AveragePrice;
//};

///投资者合约交易权限
public ref struct CSCThostFtdcInstrumentTradingRightField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///交易权限
	System::String^ 	TradingRight;
};

///经纪公司用户
public ref struct CSCThostFtdcBrokerUserField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///用户名称
	System::String^ 	UserName;
	///用户类型
	System::String^ 	UserType;
	///是否活跃
	int	IsActive;
};

///经纪公司用户口令
public ref struct CSCThostFtdcBrokerUserPasswordField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///密码
	System::String^ 	Password;
};

///经纪公司用户功能权限
public ref struct CSCThostFtdcBrokerUserFunctionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///经纪公司功能代码
	System::String^ 	BrokerFunctionCode;
};

///投资者交易用户关系
public ref struct CSCThostFtdcInvestorUserField
{
	///用户代码
	System::String^ 	UserID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///交易所交易员报盘机
public ref struct CSCThostFtdcTraderOfferField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///会员代码
	System::String^ 	ParticipantID;
	///密码
	System::String^ 	Password;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///交易所交易员连接状态
	System::String^ 	TraderConnectStatus;
	///发出连接请求的日期
	System::String^ 	ConnectRequestDate;
	///发出连接请求的时间
	System::String^ 	ConnectRequestTime;
	///上次报告日期
	System::String^ 	LastReportDate;
	///上次报告时间
	System::String^ 	LastReportTime;
	///完成连接日期
	System::String^ 	ConnectDate;
	///完成连接时间
	System::String^ 	ConnectTime;
	///启动日期
	System::String^ 	StartDate;
	///启动时间
	System::String^ 	StartTime;
	///交易日
	System::String^ 	TradingDay;
};

///投资者结算结果
public ref struct CSCThostFtdcSettlementInfoField
{
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///序号
	int	SequenceNo;
	///消息正文
	System::String^ 	Content;
};

///合约保证金率调整
public ref struct CSCThostFtdcInstrumentMarginRateAdjustField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///多头保证金率
	double	LongMarginRatioByMoney;
	///多头保证金费
	double	LongMarginRatioByVolume;
	///空头保证金率
	double	ShortMarginRatioByMoney;
	///空头保证金费
	double	ShortMarginRatioByVolume;
};

///交易所保证金率
public ref struct CSCThostFtdcExchangeMarginRateField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///合约代码
	System::String^ 	InstrumentID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///多头保证金率
	double	LongMarginRatioByMoney;
	///多头保证金费
	double	LongMarginRatioByVolume;
	///空头保证金率
	double	ShortMarginRatioByMoney;
	///空头保证金费
	double	ShortMarginRatioByVolume;
};

///交易所保证金率调整
public ref struct CSCThostFtdcExchangeMarginRateAdjustField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///合约代码
	System::String^ 	InstrumentID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///多头保证金率
	double	LongMarginRatioByMoney;
	///多头保证金费
	double	LongMarginRatioByVolume;
	///空头保证金率
	double	ShortMarginRatioByMoney;
	///空头保证金费
	double	ShortMarginRatioByVolume;
	///交易所多头保证金率
	double	ExchLongMarginRatioByMoney;
	///交易所多头保证金费
	double	ExchLongMarginRatioByVolume;
	///交易所空头保证金率
	double	ExchShortMarginRatioByMoney;
	///交易所空头保证金费
	double	ExchShortMarginRatioByVolume;
};

///结算引用
public ref struct CSCThostFtdcSettlementRefField
{
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
};

///当前时间
public ref struct CSCThostFtdcCurrentTimeField
{
	///当前日期
	System::String^ 	CurrDate;
	///当前时间
	System::String^ 	CurrTime;
	///当前时间（毫秒）
	int	CurrMillisec;
};

///通讯阶段
public ref struct CSCThostFtdcCommPhaseField
{
	///交易日
	System::String^ 	TradingDay;
	///通讯时段编号
	int	CommPhaseNo;
};

///登录信息
public ref struct CSCThostFtdcLoginInfoField
{
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///登录日期
	System::String^ 	LoginDate;
	///登录时间
	System::String^ 	LoginTime;
	///IP地址
	System::String^ 	IPAddress;
	///用户端产品信息
	System::String^ 	UserProductInfo;
	///接口端产品信息
	System::String^ 	InterfaceProductInfo;
	///协议信息
	System::String^ 	ProtocolInfo;
	///系统名称
	System::String^ 	SystemName;
	///密码
	System::String^ 	Password;
	///最大报单引用
	System::String^ 	MaxOrderRef;
	///上期所时间
	System::String^ 	SHFETime;
	///大商所时间
	System::String^ 	DCETime;
	///郑商所时间
	System::String^ 	CZCETime;
	///中金所时间
	System::String^ 	FFEXTime;
};

///登录信息
public ref struct CSCThostFtdcLogoutAllField
{
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///系统名称
	System::String^ 	SystemName;
};

///前置状态
public ref struct CSCThostFtdcFrontStatusField
{
	///前置编号
	int	FrontID;
	///上次报告日期
	System::String^ 	LastReportDate;
	///上次报告时间
	System::String^ 	LastReportTime;
	///是否活跃
	int	IsActive;
};

///用户口令变更
public ref struct CSCThostFtdcUserPasswordUpdateField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///原来的口令
	System::String^ 	OldPassword;
	///新的口令
	System::String^ 	NewPassword;
};

///输入报单
public ref struct CSCThostFtdcInputOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///报单引用
	System::String^ 	OrderRef;
	///用户代码
	System::String^ 	UserID;
	///报单价格条件
	System::String^ 	OrderPriceType;
	///买卖方向
	System::String^ 	Direction;
	///组合开平标志
	System::String^ 	CombOffsetFlag;
	///组合投机套保标志
	System::String^ 	CombHedgeFlag;
	///价格
	double	LimitPrice;
	///数量
	int	VolumeTotalOriginal;
	///有效期类型
	System::String^ 	TimeCondition;
	///GTD日期
	System::String^ 	GTDDate;
	///成交量类型
	System::String^ 	VolumeCondition;
	///最小成交量
	int	MinVolume;
	///触发条件
	System::String^ 	ContingentCondition;
	///止损价
	double	StopPrice;
	///强平原因
	System::String^ 	ForceCloseReason;
	///自动挂起标志
	int	IsAutoSuspend;
	///业务单元
	System::String^ 	BusinessUnit;
	///请求编号
	int	RequestID;
	///用户强评标志
	int	UserForceClose;
};

///报单
public ref struct CSCThostFtdcOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///报单引用
	System::String^ 	OrderRef;
	///用户代码
	System::String^ 	UserID;
	///报单价格条件
	System::String^ 	OrderPriceType;
	///买卖方向
	System::String^ 	Direction;
	///组合开平标志
	System::String^ 	CombOffsetFlag;
	///组合投机套保标志
	System::String^ 	CombHedgeFlag;
	///价格
	double	LimitPrice;
	///数量
	int	VolumeTotalOriginal;
	///有效期类型
	System::String^ 	TimeCondition;
	///GTD日期
	System::String^ 	GTDDate;
	///成交量类型
	System::String^ 	VolumeCondition;
	///最小成交量
	int	MinVolume;
	///触发条件
	System::String^ 	ContingentCondition;
	///止损价
	double	StopPrice;
	///强平原因
	System::String^ 	ForceCloseReason;
	///自动挂起标志
	int	IsAutoSuspend;
	///业务单元
	System::String^ 	BusinessUnit;
	///请求编号
	int	RequestID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///报单提交状态
	System::String^ 	OrderSubmitStatus;
	///报单提示序号
	int	NotifySequence;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///报单编号
	System::String^ 	OrderSysID;
	///报单来源
	System::String^ 	OrderSource;
	///报单状态
	System::String^ 	OrderStatus;
	///报单类型
	System::String^ 	OrderType;
	///今成交数量
	int	VolumeTraded;
	///剩余数量
	int	VolumeTotal;
	///报单日期
	System::String^ 	InsertDate;
	///委托时间
	System::String^ 	InsertTime;
	///激活时间
	System::String^ 	ActiveTime;
	///挂起时间
	System::String^ 	SuspendTime;
	///最后修改时间
	System::String^ 	UpdateTime;
	///撤销时间
	System::String^ 	CancelTime;
	///最后修改交易所交易员代码
	System::String^ 	ActiveTraderID;
	///结算会员编号
	System::String^ 	ClearingPartID;
	///序号
	int	SequenceNo;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///用户端产品信息
	System::String^ 	UserProductInfo;
	///状态信息
	System::String^ 	StatusMsg;
	///用户强评标志
	int	UserForceClose;
	///操作用户代码
	System::String^ 	ActiveUserID;
	///经纪公司报单编号
	int	BrokerOrderSeq;
};

///交易所报单
public ref struct CSCThostFtdcExchangeOrderField
{
	///报单价格条件
	System::String^ 	OrderPriceType;
	///买卖方向
	System::String^ 	Direction;
	///组合开平标志
	System::String^ 	CombOffsetFlag;
	///组合投机套保标志
	System::String^ 	CombHedgeFlag;
	///价格
	double	LimitPrice;
	///数量
	int	VolumeTotalOriginal;
	///有效期类型
	System::String^ 	TimeCondition;
	///GTD日期
	System::String^ 	GTDDate;
	///成交量类型
	System::String^ 	VolumeCondition;
	///最小成交量
	int	MinVolume;
	///触发条件
	System::String^ 	ContingentCondition;
	///止损价
	double	StopPrice;
	///强平原因
	System::String^ 	ForceCloseReason;
	///自动挂起标志
	int	IsAutoSuspend;
	///业务单元
	System::String^ 	BusinessUnit;
	///请求编号
	int	RequestID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///报单提交状态
	System::String^ 	OrderSubmitStatus;
	///报单提示序号
	int	NotifySequence;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///报单编号
	System::String^ 	OrderSysID;
	///报单来源
	System::String^ 	OrderSource;
	///报单状态
	System::String^ 	OrderStatus;
	///报单类型
	System::String^ 	OrderType;
	///今成交数量
	int	VolumeTraded;
	///剩余数量
	int	VolumeTotal;
	///报单日期
	System::String^ 	InsertDate;
	///委托时间
	System::String^ 	InsertTime;
	///激活时间
	System::String^ 	ActiveTime;
	///挂起时间
	System::String^ 	SuspendTime;
	///最后修改时间
	System::String^ 	UpdateTime;
	///撤销时间
	System::String^ 	CancelTime;
	///最后修改交易所交易员代码
	System::String^ 	ActiveTraderID;
	///结算会员编号
	System::String^ 	ClearingPartID;
	///序号
	int	SequenceNo;
};

///交易所报单插入失败
public ref struct CSCThostFtdcExchangeOrderInsertErrorField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///输入报单操作
public ref struct CSCThostFtdcInputOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///报单操作引用
	int	OrderActionRef;
	///报单引用
	System::String^ 	OrderRef;
	///请求编号
	int	RequestID;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///操作标志
	System::String^ 	ActionFlag;
	///价格
	double	LimitPrice;
	///数量变化
	int	VolumeChange;
	///用户代码
	System::String^ 	UserID;
	///合约代码
	System::String^ 	InstrumentID;
};

///报单操作
public ref struct CSCThostFtdcOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///报单操作引用
	int	OrderActionRef;
	///报单引用
	System::String^ 	OrderRef;
	///请求编号
	int	RequestID;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///操作标志
	System::String^ 	ActionFlag;
	///价格
	double	LimitPrice;
	///数量变化
	int	VolumeChange;
	///操作日期
	System::String^ 	ActionDate;
	///操作时间
	System::String^ 	ActionTime;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///操作本地编号
	System::String^ 	ActionLocalID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///业务单元
	System::String^ 	BusinessUnit;
	///报单操作状态
	System::String^ 	OrderActionStatus;
	///用户代码
	System::String^ 	UserID;
	///状态信息
	System::String^ 	StatusMsg;
	///合约代码
	System::String^ 	InstrumentID;
};

///交易所报单操作
public ref struct CSCThostFtdcExchangeOrderActionField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///操作标志
	System::String^ 	ActionFlag;
	///价格
	double	LimitPrice;
	///数量变化
	int	VolumeChange;
	///操作日期
	System::String^ 	ActionDate;
	///操作时间
	System::String^ 	ActionTime;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///操作本地编号
	System::String^ 	ActionLocalID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///业务单元
	System::String^ 	BusinessUnit;
	///报单操作状态
	System::String^ 	OrderActionStatus;
	///用户代码
	System::String^ 	UserID;
};

///交易所报单操作失败
public ref struct CSCThostFtdcExchangeOrderActionErrorField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///操作本地编号
	System::String^ 	ActionLocalID;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///交易所成交
public ref struct CSCThostFtdcExchangeTradeField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///成交编号
	System::String^ 	TradeID;
	///买卖方向
	System::String^ 	Direction;
	///报单编号
	System::String^ 	OrderSysID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///交易角色
	System::String^ 	TradingRole;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///开平标志
	System::String^ 	OffsetFlag;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///价格
	double	Price;
	///数量
	int	Volume;
	///成交时期
	System::String^ 	TradeDate;
	///成交时间
	System::String^ 	TradeTime;
	///成交类型
	System::String^ 	TradeType;
	///成交价来源
	System::String^ 	PriceSource;
	///交易所交易员代码
	System::String^ 	TraderID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///结算会员编号
	System::String^ 	ClearingPartID;
	///业务单元
	System::String^ 	BusinessUnit;
	///序号
	int	SequenceNo;
};

///成交
public ref struct CSCThostFtdcTradeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///报单引用
	System::String^ 	OrderRef;
	///用户代码
	System::String^ 	UserID;
	///交易所代码
	System::String^ 	ExchangeID;
	///成交编号
	System::String^ 	TradeID;
	///买卖方向
	System::String^ 	Direction;
	///报单编号
	System::String^ 	OrderSysID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///交易角色
	System::String^ 	TradingRole;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///开平标志
	System::String^ 	OffsetFlag;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///价格
	double	Price;
	///数量
	int	Volume;
	///成交时期
	System::String^ 	TradeDate;
	///成交时间
	System::String^ 	TradeTime;
	///成交类型
	System::String^ 	TradeType;
	///成交价来源
	System::String^ 	PriceSource;
	///交易所交易员代码
	System::String^ 	TraderID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///结算会员编号
	System::String^ 	ClearingPartID;
	///业务单元
	System::String^ 	BusinessUnit;
	///序号
	int	SequenceNo;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///经纪公司报单编号
	int	BrokerOrderSeq;
};

///用户会话
public ref struct CSCThostFtdcUserSessionField
{
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///登录日期
	System::String^ 	LoginDate;
	///登录时间
	System::String^ 	LoginTime;
	///IP地址
	System::String^ 	IPAddress;
	///用户端产品信息
	System::String^ 	UserProductInfo;
	///接口端产品信息
	System::String^ 	InterfaceProductInfo;
	///协议信息
	System::String^ 	ProtocolInfo;
};

///查询最大报单数量
public ref struct CSCThostFtdcQueryMaxOrderVolumeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///买卖方向
	System::String^ 	Direction;
	///开平标志
	System::String^ 	OffsetFlag;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///最大允许报单数量
	int	MaxVolume;
};

///投资者结算结果确认信息
public ref struct CSCThostFtdcSettlementInfoConfirmField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///确认日期
	System::String^ 	ConfirmDate;
	///确认时间
	System::String^ 	ConfirmTime;
};

///出入金同步
public ref struct CSCThostFtdcSyncDepositField
{
	///出入金流水号
	System::String^ 	DepositSeqNo;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///入金金额
	double	Deposit;
	///是否强制进行
	int	IsForce;
};

///经纪公司同步
public ref struct CSCThostFtdcBrokerSyncField
{
	///经纪公司代码
	System::String^ 	BrokerID;
};

///正在同步中的投资者
public ref struct CSCThostFtdcSyncingInvestorField
{
	///投资者代码
	System::String^ 	InvestorID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者分组代码
	System::String^ 	InvestorGroupID;
	///投资者名称
	System::String^ 	InvestorName;
	///证件类型
	System::String^ 	IdentifiedCardType;
	///证件号码
	System::String^ 	IdentifiedCardNo;
	///是否活跃
	int	IsActive;
	///联系电话
	System::String^ 	Telephone;
	///通讯地址
	System::String^ 	Address;
};

///正在同步中的交易代码
public ref struct CSCThostFtdcSyncingTradingCodeField
{
	///投资者代码
	System::String^ 	InvestorID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///交易所代码
	System::String^ 	ExchangeID;
	///客户代码
	System::String^ 	ClientID;
	///是否活跃
	int	IsActive;
};

///正在同步中的投资者分组
public ref struct CSCThostFtdcSyncingInvestorGroupField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者分组代码
	System::String^ 	InvestorGroupID;
	///投资者分组名称
	System::String^ 	InvestorGroupName;
};

///正在同步中的交易账号
public ref struct CSCThostFtdcSyncingTradingAccountField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者帐号
	System::String^ 	AccountID;
	///上次质押金额
	double	PreMortgage;
	///上次信用额度
	double	PreCredit;
	///上次存款额
	double	PreDeposit;
	///上次结算准备金
	double	PreBalance;
	///上次占用的保证金
	double	PreMargin;
	///利息基数
	double	InterestBase;
	///利息收入
	double	Interest;
	///入金金额
	double	Deposit;
	///出金金额
	double	Withdraw;
	///冻结的保证金
	double	FrozenMargin;
	///冻结的资金
	double	FrozenCash;
	///冻结的手续费
	double	FrozenCommission;
	///当前保证金总额
	double	CurrMargin;
	///资金差额
	double	CashIn;
	///手续费
	double	Commission;
	///平仓盈亏
	double	CloseProfit;
	///持仓盈亏
	double	PositionProfit;
	///期货结算准备金
	double	Balance;
	///可用资金
	double	Available;
	///可取资金
	double	WithdrawQuota;
	///基本准备金
	double	Reserve;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///信用额度
	double	Credit;
	///质押金额
	double	Mortgage;
	///交易所保证金
	double	ExchangeMargin;
};

///正在同步中的投资者持仓
public ref struct CSCThostFtdcSyncingInvestorPositionField
{
	///合约代码
	System::String^ 	InstrumentID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///持仓多空方向
	System::String^ 	PosiDirection;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///持仓日期
	System::String^ 	PositionDate;
	///上日持仓
	int	YdPosition;
	///今日持仓
	int	Position;
	///多头冻结
	int	LongFrozen;
	///空头冻结
	int	ShortFrozen;
	///开仓冻结金额
	double	LongFrozenAmount;
	///开仓冻结金额
	double	ShortFrozenAmount;
	///开仓量
	int	OpenVolume;
	///平仓量
	int	CloseVolume;
	///开仓金额
	double	OpenAmount;
	///平仓金额
	double	CloseAmount;
	///持仓成本
	double	PositionCost;
	///上次占用的保证金
	double	PreMargin;
	///占用的保证金
	double	UseMargin;
	///冻结的保证金
	double	FrozenMargin;
	///冻结的资金
	double	FrozenCash;
	///冻结的手续费
	double	FrozenCommission;
	///资金差额
	double	CashIn;
	///手续费
	double	Commission;
	///平仓盈亏
	double	CloseProfit;
	///持仓盈亏
	double	PositionProfit;
	///上次结算价
	double	PreSettlementPrice;
	///本次结算价
	double	SettlementPrice;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///开仓成本
	double	OpenCost;
	///交易所保证金
	double	ExchangeMargin;
	///组合成交形成的持仓
	int	CombPosition;
	///组合多头冻结
	int	CombLongFrozen;
	///组合空头冻结
	int	CombShortFrozen;
	///逐日盯市平仓盈亏
	double	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	double	CloseProfitByTrade;
	///今日持仓
	int	TodayPosition;
	///保证金率
	double	MarginRateByMoney;
	///保证金率(按手数)
	double	MarginRateByVolume;
};

///正在同步中的合约保证金率
public ref struct CSCThostFtdcSyncingInstrumentMarginRateField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///多头保证金率
	double	LongMarginRatioByMoney;
	///多头保证金费
	double	LongMarginRatioByVolume;
	///空头保证金率
	double	ShortMarginRatioByMoney;
	///空头保证金费
	double	ShortMarginRatioByVolume;
	///是否相对交易所收取
	int	IsRelative;
};

///正在同步中的合约手续费率
public ref struct CSCThostFtdcSyncingInstrumentCommissionRateField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///开仓手续费率
	double	OpenRatioByMoney;
	///开仓手续费
	double	OpenRatioByVolume;
	///平仓手续费率
	double	CloseRatioByMoney;
	///平仓手续费
	double	CloseRatioByVolume;
	///平今手续费率
	double	CloseTodayRatioByMoney;
	///平今手续费
	double	CloseTodayRatioByVolume;
};

///正在同步中的合约交易权限
public ref struct CSCThostFtdcSyncingInstrumentTradingRightField
{
	///合约代码
	System::String^ 	InstrumentID;
	///投资者范围
	System::String^ 	InvestorRange;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///交易权限
	System::String^ 	TradingRight;
};

///查询报单
public ref struct CSCThostFtdcQryOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///开始时间
	System::String^ 	InsertTimeStart;
	///结束时间
	System::String^ 	InsertTimeEnd;
};

///查询成交
public ref struct CSCThostFtdcQryTradeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///成交编号
	System::String^ 	TradeID;
	///开始时间
	System::String^ 	TradeTimeStart;
	///结束时间
	System::String^ 	TradeTimeEnd;
};

///查询投资者持仓
public ref struct CSCThostFtdcQryInvestorPositionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
};

///查询资金账户
public ref struct CSCThostFtdcQryTradingAccountField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///查询投资者
public ref struct CSCThostFtdcQryInvestorField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///查询交易编码
public ref struct CSCThostFtdcQryTradingCodeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///交易所代码
	System::String^ 	ExchangeID;
	///客户代码
	System::String^ 	ClientID;
};

///查询交易编码
public ref struct CSCThostFtdcQryInvestorGroupField
{
	///经纪公司代码
	System::String^ 	BrokerID;
};

///查询交易编码
public ref struct CSCThostFtdcQryInstrumentMarginRateField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///投机套保标志
	System::String^ 	HedgeFlag;
};

///查询交易编码
public ref struct CSCThostFtdcQryInstrumentCommissionRateField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
};

///查询交易编码
public ref struct CSCThostFtdcQryInstrumentTradingRightField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
};

///查询经纪公司
public ref struct CSCThostFtdcQryBrokerField
{
	///经纪公司代码
	System::String^ 	BrokerID;
};

///查询交易员
public ref struct CSCThostFtdcQryTraderField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///交易所交易员代码
	System::String^ 	TraderID;
};

///查询经纪公司会员代码
public ref struct CSCThostFtdcQryPartBrokerField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///会员代码
	System::String^ 	ParticipantID;
};

///查询管理用户功能权限
public ref struct CSCThostFtdcQrySuperUserFunctionField
{
	///用户代码
	System::String^ 	UserID;
};

///查询用户会话
public ref struct CSCThostFtdcQryUserSessionField
{
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///查询前置状态
public ref struct CSCThostFtdcQryFrontStatusField
{
	///前置编号
	int	FrontID;
};

///查询交易所报单
public ref struct CSCThostFtdcQryExchangeOrderField
{
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所交易员代码
	System::String^ 	TraderID;
};

///查询报单操作
public ref struct CSCThostFtdcQryOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///交易所代码
	System::String^ 	ExchangeID;
};

///查询交易所报单操作
public ref struct CSCThostFtdcQryExchangeOrderActionField
{
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所交易员代码
	System::String^ 	TraderID;
};

///查询管理用户
public ref struct CSCThostFtdcQrySuperUserField
{
	///用户代码
	System::String^ 	UserID;
};

///查询交易所
public ref struct CSCThostFtdcQryExchangeField
{
	///交易所代码
	System::String^ 	ExchangeID;
};

///查询产品
public ref struct CSCThostFtdcQryProductField
{
	///产品代码
	System::String^ 	ProductID;
};

///查询合约
public ref struct CSCThostFtdcQryInstrumentField
{
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///产品代码
	System::String^ 	ProductID;
};

///查询行情
public ref struct CSCThostFtdcQryDepthMarketDataField
{
	///合约代码
	System::String^ 	InstrumentID;
};

///查询经纪公司用户
public ref struct CSCThostFtdcQryBrokerUserField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///查询经纪公司用户权限
public ref struct CSCThostFtdcQryBrokerUserFunctionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///查询投资者交易用户关系
public ref struct CSCThostFtdcQryInvestorUserField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
};

///查询交易员报盘机
public ref struct CSCThostFtdcQryTraderOfferField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///交易所交易员代码
	System::String^ 	TraderID;
};

///查询出入金流水
public ref struct CSCThostFtdcQrySyncDepositField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///出入金流水号
	System::String^ 	DepositSeqNo;
};

///查询投资者结算结果
public ref struct CSCThostFtdcQrySettlementInfoField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///交易日
	System::String^ 	TradingDay;
};

///查询报单
public ref struct CSCThostFtdcQryHisOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///开始时间
	System::String^ 	InsertTimeStart;
	///结束时间
	System::String^ 	InsertTimeEnd;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
};

///市场行情
public ref struct CSCThostFtdcMarketDataField
{
	///交易日
	System::String^ 	TradingDay;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///最新价
	double	LastPrice;
	///上次结算价
	double	PreSettlementPrice;
	///昨收盘
	double	PreClosePrice;
	///昨持仓量
	double	PreOpenInterest;
	///今开盘
	double	OpenPrice;
	///最高价
	double	HighestPrice;
	///最低价
	double	LowestPrice;
	///数量
	int	Volume;
	///成交金额
	double	Turnover;
	///持仓量
	double	OpenInterest;
	///今收盘
	double	ClosePrice;
	///本次结算价
	double	SettlementPrice;
	///涨停板价
	double	UpperLimitPrice;
	///跌停板价
	double	LowerLimitPrice;
	///昨虚实度
	double	PreDelta;
	///今虚实度
	double	CurrDelta;
	///最后修改时间
	System::String^ 	UpdateTime;
	///最后修改毫秒
	int	UpdateMillisec;
};

///行情基础属性
public ref struct CSCThostFtdcMarketDataBaseField
{
	///交易日
	System::String^ 	TradingDay;
	///上次结算价
	double	PreSettlementPrice;
	///昨收盘
	double	PreClosePrice;
	///昨持仓量
	double	PreOpenInterest;
	///昨虚实度
	double	PreDelta;
};

///行情静态属性
public ref struct CSCThostFtdcMarketDataStaticField
{
	///今开盘
	double	OpenPrice;
	///最高价
	double	HighestPrice;
	///最低价
	double	LowestPrice;
	///今收盘
	double	ClosePrice;
	///涨停板价
	double	UpperLimitPrice;
	///跌停板价
	double	LowerLimitPrice;
	///本次结算价
	double	SettlementPrice;
	///今虚实度
	double	CurrDelta;
};

///行情最新成交属性
public ref struct CSCThostFtdcMarketDataLastMatchField
{
	///最新价
	double	LastPrice;
	///数量
	int	Volume;
	///成交金额
	double	Turnover;
	///持仓量
	double	OpenInterest;
};

///行情最优价属性
public ref struct CSCThostFtdcMarketDataBestPriceField
{
	///申买价一
	double	BidPrice1;
	///申买量一
	int	BidVolume1;
	///申卖价一
	double	AskPrice1;
	///申卖量一
	int	AskVolume1;
};

///行情申买二、三属性
public ref struct CSCThostFtdcMarketDataBid23Field
{
	///申买价二
	double	BidPrice2;
	///申买量二
	int	BidVolume2;
	///申买价三
	double	BidPrice3;
	///申买量三
	int	BidVolume3;
};

///行情申卖二、三属性
public ref struct CSCThostFtdcMarketDataAsk23Field
{
	///申卖价二
	double	AskPrice2;
	///申卖量二
	int	AskVolume2;
	///申卖价三
	double	AskPrice3;
	///申卖量三
	int	AskVolume3;
};

///行情申买四、五属性
public ref struct CSCThostFtdcMarketDataBid45Field
{
	///申买价四
	double	BidPrice4;
	///申买量四
	int	BidVolume4;
	///申买价五
	double	BidPrice5;
	///申买量五
	int	BidVolume5;
};

///行情申卖四、五属性
public ref struct CSCThostFtdcMarketDataAsk45Field
{
	///申卖价四
	double	AskPrice4;
	///申卖量四
	int	AskVolume4;
	///申卖价五
	double	AskPrice5;
	///申卖量五
	int	AskVolume5;
};

///行情更新时间属性
public ref struct CSCThostFtdcMarketDataUpdateTimeField
{
	///合约代码
	System::String^ 	InstrumentID;
	///最后修改时间
	System::String^ 	UpdateTime;
	///最后修改毫秒
	int	UpdateMillisec;
};

///指定的合约
public ref struct CSCThostFtdcSpecificInstrumentField
{
	///合约代码
	System::String^ 	InstrumentID;
};

///合约状态
public ref struct CSCThostFtdcInstrumentStatusField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
	///结算组代码
	System::String^ 	SettlementGroupID;
	///合约代码
	System::String^ 	InstrumentID;
	///合约交易状态
	System::String^ 	InstrumentStatus;
	///交易阶段编号
	int	TradingSegmentSN;
	///进入本状态时间
	System::String^ 	EnterTime;
	///进入本状态原因
	System::String^ 	EnterReason;
};

///查询合约状态
public ref struct CSCThostFtdcQryInstrumentStatusField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///合约在交易所的代码
	System::String^ 	ExchangeInstID;
};

///投资者账户
public ref struct CSCThostFtdcInvestorAccountField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///投资者帐号
	System::String^ 	AccountID;
};

///浮动盈亏算法
public ref struct CSCThostFtdcPositionProfitAlgorithmField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者帐号
	System::String^ 	AccountID;
	///盈亏算法
	System::String^ 	Algorithm;
	///备注
	System::String^ 	Memo;
};

///会员资金折扣
public ref struct CSCThostFtdcDiscountField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者范围
	System::String^ 	InvestorRange;
	///投资者代码
	System::String^ 	InvestorID;
	///资金折扣比例
	double	Discount;
};

///查询转帐银行
public ref struct CSCThostFtdcQryTransferBankField
{
	///银行代码
	System::String^ 	BankID;
	///银行分中心代码
	System::String^ 	BankBrchID;
};

///转帐银行
public ref struct CSCThostFtdcTransferBankField
{
	///银行代码
	System::String^ 	BankID;
	///银行分中心代码
	System::String^ 	BankBrchID;
	///银行名称
	System::String^ 	BankName;
	///是否活跃
	int	IsActive;
};

///查询投资者持仓明细
public ref struct CSCThostFtdcQryInvestorPositionDetailField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
};

///投资者持仓明细
public ref struct CSCThostFtdcInvestorPositionDetailField
{
	///合约代码
	System::String^ 	InstrumentID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///买卖
	System::String^ 	Direction;
	///开仓日期
	System::String^ 	OpenDate;
	///成交编号
	System::String^ 	TradeID;
	///数量
	int	Volume;
	///开仓价
	double	OpenPrice;
	///交易日
	System::String^ 	TradingDay;
	///结算编号
	int	SettlementID;
	///成交类型
	System::String^ 	TradeType;
	///组合合约代码
	System::String^ 	CombInstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
	///逐日盯市平仓盈亏
	double	CloseProfitByDate;
	///逐笔对冲平仓盈亏
	double	CloseProfitByTrade;
	///逐日盯市持仓盈亏
	double	PositionProfitByDate;
	///逐笔对冲持仓盈亏
	double	PositionProfitByTrade;
	///投资者保证金
	double	Margin;
	///交易所保证金
	double	ExchMargin;
	///保证金率
	double	MarginRateByMoney;
	///保证金率(按手数)
	double	MarginRateByVolume;
	///昨结算价
	double	LastSettlementPrice;
	///结算价
	double	SettlementPrice;
	///平仓量
	int	CloseVolume;
	///平仓金额
	double	CloseAmount;
};

///资金账户口令域
public ref struct CSCThostFtdcTradingAccountPasswordField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者帐号
	System::String^ 	AccountID;
	///密码
	System::String^ 	Password;
};

///交易所行情报盘机
public ref struct CSCThostFtdcMDTraderOfferField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///交易所交易员代码
	System::String^ 	TraderID;
	///会员代码
	System::String^ 	ParticipantID;
	///密码
	System::String^ 	Password;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///交易所交易员连接状态
	System::String^ 	TraderConnectStatus;
	///发出连接请求的日期
	System::String^ 	ConnectRequestDate;
	///发出连接请求的时间
	System::String^ 	ConnectRequestTime;
	///上次报告日期
	System::String^ 	LastReportDate;
	///上次报告时间
	System::String^ 	LastReportTime;
	///完成连接日期
	System::String^ 	ConnectDate;
	///完成连接时间
	System::String^ 	ConnectTime;
	///启动日期
	System::String^ 	StartDate;
	///启动时间
	System::String^ 	StartTime;
	///交易日
	System::String^ 	TradingDay;
};

///查询行情报盘机
public ref struct CSCThostFtdcQryMDTraderOfferField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///会员代码
	System::String^ 	ParticipantID;
	///交易所交易员代码
	System::String^ 	TraderID;
};

///查询客户通知
public ref struct CSCThostFtdcQryNoticeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
};

///客户通知
public ref struct CSCThostFtdcNoticeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///消息正文
	System::String^ 	Content;
	///经纪公司通知内容序列号
	System::String^ 	SequenceLabel;
};

///用户权限
public ref struct CSCThostFtdcUserRightField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///客户权限类型
	System::String^ 	UserRightType;
	///是否禁止
	int	IsForbidden;
};

///查询结算信息确认域
public ref struct CSCThostFtdcQrySettlementInfoConfirmField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///装载结算信息
public ref struct CSCThostFtdcLoadSettlementInfoField
{
	///经纪公司代码
	System::String^ 	BrokerID;
};

///经纪公司可提资金算法表
public ref struct CSCThostFtdcBrokerWithdrawAlgorithmField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///可提资金算法
	System::String^ 	WithdrawAlgorithm;
	///资金使用率
	double	UsingRatio;
	///可提是否包含平仓盈利
	System::String^ 	IncludeCloseProfit;
	///本日无仓且无成交客户是否受可提比例限制
	System::String^ 	AllWithoutTrade;
	///可用是否包含平仓盈利
	System::String^ 	AvailIncludeCloseProfit;
};

///资金账户口令变更域
public ref struct CSCThostFtdcTradingAccountPasswordUpdateV1Field
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///原来的口令
	System::String^ 	OldPassword;
	///新的口令
	System::String^ 	NewPassword;
};

///资金账户口令变更域
public ref struct CSCThostFtdcTradingAccountPasswordUpdateField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者帐号
	System::String^ 	AccountID;
	///原来的口令
	System::String^ 	OldPassword;
	///新的口令
	System::String^ 	NewPassword;
};

///查询组合合约分腿
public ref struct CSCThostFtdcQryCombinationLegField
{
	///组合合约代码
	System::String^ 	CombInstrumentID;
	///单腿编号
	int	LegID;
	///单腿合约代码
	System::String^ 	LegInstrumentID;
};

///查询组合合约分腿
public ref struct CSCThostFtdcQrySyncStatusField
{
	///交易日
	System::String^ 	TradingDay;
};

///组合交易合约的单腿
public ref struct CSCThostFtdcCombinationLegField
{
	///组合合约代码
	System::String^ 	CombInstrumentID;
	///单腿编号
	int	LegID;
	///单腿合约代码
	System::String^ 	LegInstrumentID;
	///买卖方向
	System::String^ 	Direction;
	///单腿乘数
	int	LegMultiple;
	///派生层数
	int	ImplyLevel;
};

///数据同步状态
public ref struct CSCThostFtdcSyncStatusField
{
	///交易日
	System::String^ 	TradingDay;
	///数据同步状态
	System::String^ 	DataSyncStatus;
};

///查询联系人
public ref struct CSCThostFtdcQryLinkManField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///联系人
public ref struct CSCThostFtdcLinkManField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///联系人类型
	System::String^ 	PersonType;
	///证件类型
	System::String^ 	IdentifiedCardType;
	///证件号码
	System::String^ 	IdentifiedCardNo;
	///名称
	System::String^ 	PersonName;
	///联系电话
	System::String^ 	Telephone;
	///通讯地址
	System::String^ 	Address;
	///邮政编码
	System::String^ 	ZipCode;
	///优先级
	int	Priority;
};

///查询经纪公司用户事件
public ref struct CSCThostFtdcQryBrokerUserEventField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///用户事件类型
	System::String^ 	UserEventType;
};

///查询经纪公司用户事件
public ref struct CSCThostFtdcBrokerUserEventField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///用户事件类型
	System::String^ 	UserEventType;
	///用户事件序号
	int	EventSequenceNo;
	///事件发生日期
	System::String^ 	EventDate;
	///事件发生时间
	System::String^ 	EventTime;
	///用户事件信息
	System::String^ 	UserEventInfo;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
};

///查询签约银行请求
public ref struct CSCThostFtdcQryContractBankField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///银行代码
	System::String^ 	BankID;
	///银行分中心代码
	System::String^ 	BankBrchID;
};

///查询签约银行响应
public ref struct CSCThostFtdcContractBankField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///银行代码
	System::String^ 	BankID;
	///银行分中心代码
	System::String^ 	BankBrchID;
	///银行名称
	System::String^ 	BankName;
};

///投资者组合持仓明细
public ref struct CSCThostFtdcInvestorPositionCombineDetailField
{
	///交易日
	System::String^ 	TradingDay;
	///开仓日期
	System::String^ 	OpenDate;
	///交易所代码
	System::String^ 	ExchangeID;
	///结算编号
	int	SettlementID;
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///组合编号
	System::String^ 	ComTradeID;
	///撮合编号
	System::String^ 	TradeID;
	///合约代码
	System::String^ 	InstrumentID;
	///投机套保标志
	System::String^ 	HedgeFlag;
	///买卖
	System::String^ 	Direction;
	///持仓量
	int	TotalAmt;
	///投资者保证金
	double	Margin;
	///交易所保证金
	double	ExchMargin;
	///保证金率
	double	MarginRateByMoney;
	///保证金率(按手数)
	double	MarginRateByVolume;
	///单腿编号
	int	LegID;
	///单腿乘数
	int	LegMultiple;
	///组合持仓合约编码
	System::String^ 	CombInstrumentID;
};

///预埋单
public ref struct CSCThostFtdcParkedOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///报单引用
	System::String^ 	OrderRef;
	///用户代码
	System::String^ 	UserID;
	///报单价格条件
	System::String^ 	OrderPriceType;
	///买卖方向
	System::String^ 	Direction;
	///组合开平标志
	System::String^ 	CombOffsetFlag;
	///组合投机套保标志
	System::String^ 	CombHedgeFlag;
	///价格
	double	LimitPrice;
	///数量
	int	VolumeTotalOriginal;
	///有效期类型
	System::String^ 	TimeCondition;
	///GTD日期
	System::String^ 	GTDDate;
	///成交量类型
	System::String^ 	VolumeCondition;
	///最小成交量
	int	MinVolume;
	///触发条件
	System::String^ 	ContingentCondition;
	///止损价
	double	StopPrice;
	///强平原因
	System::String^ 	ForceCloseReason;
	///自动挂起标志
	int	IsAutoSuspend;
	///业务单元
	System::String^ 	BusinessUnit;
	///请求编号
	int	RequestID;
	///用户强评标志
	int	UserForceClose;
	///交易所代码
	System::String^ 	ExchangeID;
	///预埋报单编号
	System::String^ 	ParkedOrderID;
	///用户类型
	System::String^ 	UserType;
	///预埋单状态
	System::String^ 	Status;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///输入预埋单操作
public ref struct CSCThostFtdcParkedOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///报单操作引用
	int	OrderActionRef;
	///报单引用
	System::String^ 	OrderRef;
	///请求编号
	int	RequestID;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///操作标志
	System::String^ 	ActionFlag;
	///价格
	double	LimitPrice;
	///数量变化
	int	VolumeChange;
	///用户代码
	System::String^ 	UserID;
	///合约代码
	System::String^ 	InstrumentID;
	///预埋撤单单编号
	System::String^ 	ParkedOrderActionID;
	///用户类型
	System::String^ 	UserType;
	///预埋撤单状态
	System::String^ 	Status;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///查询预埋单
public ref struct CSCThostFtdcQryParkedOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
};

///查询预埋撤单
public ref struct CSCThostFtdcQryParkedOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///交易所代码
	System::String^ 	ExchangeID;
};

///删除预埋单
public ref struct CSCThostFtdcRemoveParkedOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///预埋报单编号
	System::String^ 	ParkedOrderID;
};

///删除预埋撤单
public ref struct CSCThostFtdcRemoveParkedOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///预埋撤单编号
	System::String^ 	ParkedOrderActionID;
};

///经纪公司可提资金算法表
public ref struct CSCThostFtdcInvestorWithdrawAlgorithmField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者范围
	System::String^ 	InvestorRange;
	///投资者代码
	System::String^ 	InvestorID;
	///可提资金比例
	double	UsingRatio;
};

///查询组合持仓明细
public ref struct CSCThostFtdcQryInvestorPositionCombineDetailField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///组合持仓合约编码
	System::String^ 	CombInstrumentID;
};

///成交均价
public ref struct CSCThostFtdcMarketDataAveragePriceField
{
	///当日均价
	double	AveragePrice;
};

///校验投资者密码
public ref struct CSCThostFtdcVerifyInvestorPasswordField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///密码
	System::String^ 	Password;
};

///用户IP
public ref struct CSCThostFtdcUserIPField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///用户代码
	System::String^ 	UserID;
	///IP地址
	System::String^ 	IPAddress;
	///IP地址掩码
	System::String^ 	IPMask;
	///Mac地址
	System::String^ 	MacAddress;
};

///用户事件通知信息
public ref struct CSCThostFtdcTradingNoticeInfoField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///发送时间
	System::String^ 	SendTime;
	///消息正文
	System::String^ 	FieldContent;
	///序列系列号
	int	SequenceSeries;
	///序列号
	int	SequenceNo;
};

///用户事件通知
public ref struct CSCThostFtdcTradingNoticeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者范围
	System::String^ 	InvestorRange;
	///投资者代码
	System::String^ 	InvestorID;
	///序列系列号
	int	SequenceSeries;
	///用户代码
	System::String^ 	UserID;
	///发送时间
	System::String^ 	SendTime;
	///序列号
	int	SequenceNo;
	///消息正文
	System::String^ 	FieldContent;
};

///查询交易事件通知
public ref struct CSCThostFtdcQryTradingNoticeField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///查询错误报单
public ref struct CSCThostFtdcQryErrOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///错误报单
public ref struct CSCThostFtdcErrOrderField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///合约代码
	System::String^ 	InstrumentID;
	///报单引用
	System::String^ 	OrderRef;
	///用户代码
	System::String^ 	UserID;
	///报单价格条件
	System::String^ 	OrderPriceType;
	///买卖方向
	System::String^ 	Direction;
	///组合开平标志
	System::String^ 	CombOffsetFlag;
	///组合投机套保标志
	System::String^ 	CombHedgeFlag;
	///价格
	double	LimitPrice;
	///数量
	int	VolumeTotalOriginal;
	///有效期类型
	System::String^ 	TimeCondition;
	///GTD日期
	System::String^ 	GTDDate;
	///成交量类型
	System::String^ 	VolumeCondition;
	///最小成交量
	int	MinVolume;
	///触发条件
	System::String^ 	ContingentCondition;
	///止损价
	double	StopPrice;
	///强平原因
	System::String^ 	ForceCloseReason;
	///自动挂起标志
	int	IsAutoSuspend;
	///业务单元
	System::String^ 	BusinessUnit;
	///请求编号
	int	RequestID;
	///用户强评标志
	int	UserForceClose;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///查询错误报单操作
public ref struct CSCThostFtdcQryErrOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
};

///错误报单操作
public ref struct CSCThostFtdcErrOrderActionField
{
	///经纪公司代码
	System::String^ 	BrokerID;
	///投资者代码
	System::String^ 	InvestorID;
	///报单操作引用
	int	OrderActionRef;
	///报单引用
	System::String^ 	OrderRef;
	///请求编号
	int	RequestID;
	///前置编号
	int	FrontID;
	///会话编号
	int	SessionID;
	///交易所代码
	System::String^ 	ExchangeID;
	///报单编号
	System::String^ 	OrderSysID;
	///操作标志
	System::String^ 	ActionFlag;
	///价格
	double	LimitPrice;
	///数量变化
	int	VolumeChange;
	///操作日期
	System::String^ 	ActionDate;
	///操作时间
	System::String^ 	ActionTime;
	///交易所交易员代码
	System::String^ 	TraderID;
	///安装编号
	int	InstallID;
	///本地报单编号
	System::String^ 	OrderLocalID;
	///操作本地编号
	System::String^ 	ActionLocalID;
	///会员代码
	System::String^ 	ParticipantID;
	///客户代码
	System::String^ 	ClientID;
	///业务单元
	System::String^ 	BusinessUnit;
	///报单操作状态
	System::String^ 	OrderActionStatus;
	///用户代码
	System::String^ 	UserID;
	///状态信息
	System::String^ 	StatusMsg;
	///合约代码
	System::String^ 	InstrumentID;
	///错误代码
	int	ErrorID;
	///错误信息
	System::String^ 	ErrorMsg;
};

///查询交易所状态
public ref struct CSCThostFtdcQryExchangeSequenceField
{
	///交易所代码
	System::String^ 	ExchangeID;
};

///交易所状态
public ref struct CSCThostFtdcExchangeSequenceField
{
	///交易所代码
	System::String^ 	ExchangeID;
	///序号
	int	SequenceNo;
	///合约交易状态
	System::String^ 	MarketStatus;
};





}
