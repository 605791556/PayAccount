#pragma once

#define CMD_CHAR_MAX 256
#define CONNECT_CMD "cmd"

//返回结果
enum EM_CMD_RET
{
	NET_CMD_SUC,
	NET_CMD_FAIL,
	NET_CMD_MAX
};

//返回结果类型
enum EM_CMD_RETYPE
{
	EM_CMD_RETYPE_VALUE,
	EM_CMD_RETYPE_RESULT,
	EM_CMD_RETYPE_MAX
};
//通用的结果返回集
extern const char CMD_RetType[EM_CMD_RETYPE_MAX][CMD_CHAR_MAX];

//网络通信命令
enum EM_SOCK_CMD
{
	SOCK_CMD_HEART,//心跳命令
	SOCK_CMD_LOGIN,//登录命令
	SOCK_CMD_INIT,//初始化命令
	SOCK_CMD_CHECKPWD,//密码检查命令
	SOCK_CMD_MDFPWD,//修改密码
	SOCK_CMD_GET_USER,//获取账号
	SOCK_CMD_ADD_USER,//添加账号
	SOCK_CMD_DEL_USER,//删除账号
	SOCK_CMD_JUDGE_USER,//判断账号是否存在
	SOCK_CMD_SET_PROGRESS,//设置进度
	SOCK_CMD_GET_PROGRESS,//获取进度
	SOCK_CMD_GET_STAFFWRITE,//获取单个进度
	SOCK_CMD_SAVE_STAFFWRITE,//保存单个进度
	SOCK_CMD_GET_STAFF,//获取职工
	SOCK_CMD_GET_SAMPLE_STAFF,//只获取职工ID和姓名
	SOCK_CMD_DEL_STAFF,//删除职工
	SOCK_CMD_ADD_STAFF,//添加职工
	SOCK_CMD_MDF_STAFF,//修改职工
	SOCK_CMD_JUDGE_STAFF,//判断职工是否存在
	SOCK_CMD_GET_DPAY,//获取该职工日薪
	SOCK_CMD_GET_BOOK,//获取书本信息
	SOCK_CMD_GET_SAMPLE_BOOK,//只获取书本ID和名字
	SOCK_CMD_DEL_BOOK,//删除书本
	SOCK_CMD_ADD_BOOK,//添加书本
	SOCK_CMD_MDF_BOOK,//修改书本
	SOCK_CMD_JUDGE_BOOK,//判断书本是否存在
	SOCK_CMD_GET_PROJECT,//获取项目信息
	SOCK_CMD_DEL_PROJECT,//删除项目
	SOCK_CMD_ADD_PROJECT,//添加项目
	SOCK_CMD_MDF_PROJECT,//修改项目
	SOCK_CMD_SAVE_PRONDEX,//保存排列顺序
	SOCK_CMD_JUDGE_PROJECT,//判断项目是否存在
	//单价设置和获取
	SOCK_CMD_GET_DAIPAY,//获取胶订单价
	SOCK_CMD_SET_DAIPAY,//设置胶订单价
	SOCK_CMD_GET_ZHEYEPAY,//获取折页单价
	SOCK_CMD_SET_ZHEYEPAY,//设置折页单价
	SOCK_CMD_GET_DYPAY,//获取点页单价
	SOCK_CMD_SET_DYPAY,//设置点页单价
	SOCK_CMD_GET_OTHERPAY,//获取其它项目单价
	SOCK_CMD_SET_OTHERPAY,//设置其它项目单价
	SOCK_CMD_SET_OTHERALLBOOKPAY,//设置其它项目单价（适用全书的项目）
	SOCK_CMD_GET_PAY,//获取单价
	SOCK_CMD_GET_DETAILS,//获取明细
	SOCK_CMD_GET_DAYPAY,//获取单人做工统计
	SOCK_CMD_GET_DAYPAY_LIST,//获取做工统计列表
	SOCK_CMD_SAVE_DAYPAY,//保存做工统计
	SOCK_CMD_DEL_DAYPAY,//删除做工统计
	SOCK_CMD_GET_MPAY,//获取月统计

	SOCK_CMD_MAX
};

//登录
enum EM_LOGIN
{
	EM_LOGIN_NAME,
	EM_LOGIN_PASS,
	EM_LOGIN_SHOWPASS,
	EM_LOGIN_MAX
};
extern const char CMD_LOGIN[EM_LOGIN_MAX][CMD_CHAR_MAX];
//登录返回信息
enum EM_LOGINMSG
{
	EM_LOGINMSG_BOK,
	EM_LOGINMSG_NAME,
	EM_LOGINMSG_PASS,
	EM_LOGINMSG_TYPE,
	EM_LOGINMSG_LOGIND,
	EM_LOGINMSG_MAX
};
extern const char CMD_LOGINMSG[EM_LOGINMSG_MAX][CMD_CHAR_MAX];

//账号信息
enum EM_USER
{
	EM_USER_NAME,
	EM_USER_TYPE,
	EM_USER_TIME,
	EM_USER_SHOWPASS,
	EM_USER_PASS,
	EM_USER_MAX
};
extern const char CMD_GETUSER[EM_USER_MAX][CMD_CHAR_MAX];

//获取书本
enum EM_GETBOOK
{
	GETBOOK_KEYWORD,
	GETBOOK_RKTYPE,
	GETBOOK_DATE,
	GETBOOK_NSTART,
	GETBOOK_NUMBER,
	GETBOOK_MAX
};
extern const char CMD_GETBOOK[GETBOOK_MAX][CMD_CHAR_MAX];

//删除书本
enum EM_DEL_BOOK
{
	EM_DEL_BOOK_ID,
	EM_DEL_BOOK_MAX
};
extern const char CMD_DELBOOK[EM_DEL_BOOK_MAX][CMD_CHAR_MAX];

//判断图书是否存在
enum EM_JUDGE_BOOK
{
	EM_JUDGE_BOOK_NAME,
	EM_JUDGE_BOOK_BHAD,
	EM_JUDGE_BOOK_MAX
};
extern const char CMD_JUDGEBOOK[EM_JUDGE_BOOK_MAX][CMD_CHAR_MAX];

//书本信息
enum EM_BOOKMSG
{
	BOOKMSG_ID,
	BOOKMSG_NAME,
	BOOKMSG_CBS,
	BOOKMSG_DATE,
	BOOKMSG_BC1,
	BOOKMSG_BC2,
	BOOKMSG_SIZE1,
	BOOKMSG_SIZE2,
	BOOKMSG_KB,
	BOOKMSG_YZ,
	BOOKMSG_YS,
	BOOKMSG_BC,
	BOOKMSG_LS,
	BOOKMSG_PAY,
	BOOKMSG_B_TYPE,
	BOOKMSG_ZY_TYPE,
	BOOKMSG_RK_TYPE,
	BOOKMSG_MSG,
	BOOKMSG_COUNT,
	BOOKMSG_XCOUNT,
	BOOKMSG_MAX
};
extern const char CMD_BOOKMSG[BOOKMSG_MAX][CMD_CHAR_MAX];

//获取项目
enum EM_GETPRO
{
	EM_GETPRO_BWRITE,
	EM_GETPRO_MAX
};
extern const char CMD_GETPRO[EM_GETPRO_MAX][CMD_CHAR_MAX];

//删除项目
enum EM_DEL_PROJECT
{
	EM_DEL_PROJECT_ID,
	EM_DEL_PROJECT_MAX
};
extern const char CMD_DELPROJECT[EM_DEL_PROJECT_MAX][CMD_CHAR_MAX];

//判断项目
enum EM_JUDGE_PROJECT
{
	EM_JUDGE_PROJECT_NAME,
	EM_JUDGE_PROJECT_BHAD,
	EM_JUDGE_PROJECT_MAX
};
extern const char CMD_JUDGEPROJECT[EM_JUDGE_PROJECT_MAX][CMD_CHAR_MAX];

//项目信息
enum EM_PROMSG
{
	EM_PROMSG_ID,
	EM_PROMSG_NDEX,
	EM_PROMSG_NAME,
	EM_PROMSG_NUM_TYPE,
	EM_PROMSG_BWRITE,
	EM_PROMSG_ALL_BOOK,//该项目单价是否适用全书
	EM_PROMSG_PAY,//该项目单价
	EM_PROMSG_COUNT,
	EM_PROMSG_MAX
};
extern const char CMD_PROMSG[EM_PROMSG_MAX][CMD_CHAR_MAX];

//获取进度
enum EM_GETPROGRESS
{
	EM_GETPROGRESS_BOOKID,
	EM_GETPROGRESS_PROID,
	EM_GETPROGRESS_INDEX,
	EM_GETPROGRESS_MAX
};
extern const char CMD_GETPROGRESS[EM_GETPROGRESS_MAX][CMD_CHAR_MAX];
//进度信息
enum EM_PROGRESSMSG
{
	EM_PROGRESSMSG_YS,//印数
	EM_PROGRESSMSG_LS,//令数
	EM_PROGRESSMSG_NUMBER,
	EM_PROGRESSMSG_NDEX,
	EM_PROGRESSMSG_MAX
};
extern const char CMD_PROGRESSMSG[EM_PROGRESSMSG_MAX][CMD_CHAR_MAX];

//密码确认
enum EM_CHECKPWD
{
	EM_CHECKPWD_NAME,
	EM_CHECKPWD_PWD,
	EM_CHECKPWD_MAX
};
extern const char CMD_CHECKPWD[EM_CHECKPWD_MAX][CMD_CHAR_MAX];

//修改密码
enum EM_MDFPWD
{
	EM_MDFPWD_NAME,
	EM_MDFPWD_PWD,
	EM_MDFPWD_MAX
};
extern const char CMD_MDFPWD[EM_MDFPWD_MAX][CMD_CHAR_MAX];

//添加账号
enum EM_ADD_USER
{
	EM_ADD_USER_NAME,
	EM_ADD_USER_PWD,
	EM_ADD_USER_TYPE,
	EM_ADD_USER_MAX
};
extern const char CMD_ADDUSER[EM_ADD_USER_MAX][CMD_CHAR_MAX];

//删除账号
enum EM_DEL_USER
{
	EM_DEL_USER_NAME,
	EM_DEL_USER_MAX
};
extern const char CMD_DELUSER[EM_DEL_USER_MAX][CMD_CHAR_MAX];

//判断账号是否存在
enum EM_JUDGE_USER
{
	EM_JUDGE_USER_NAME,
	EM_JUDGE_USER_BHAD,
	EM_JUDGE_USER_MAX
};
extern const char CMD_JUDGEUSER[EM_JUDGE_USER_MAX][CMD_CHAR_MAX];

//获取员工信息
enum EM_GET_STAFF
{
	EM_GET_STAFF_KEYWORD,
	EM_GET_STAFF_NSTART,
	EM_GET_STAFF_NUMBER,
	EM_GET_STAFF_MAX
};
extern const char CMD_GETSTAFF[EM_GET_STAFF_MAX][CMD_CHAR_MAX];

//员工信息
enum EM_STAFF_MSG
{
	EM_STAFF_MSG_NAME,
	EM_STAFF_MSG_SEX,
	EM_STAFF_MSG_AGE,
	EM_STAFF_MSG_STAFFID,
	EM_STAFF_MSG_IDCARD,
	EM_STAFF_MSG_INTIME,
	EM_STAFF_MSG_TEL,
	EM_STAFF_MSG_TYPE,
	EM_STAFF_MSG_SORT,
	EM_STAFF_MSG_DAYPAY,
	EM_STAFF_MSG_COUNT,//查询的员工总数
	EM_STAFF_MSG_MAX
};
extern const char CMD_STAFFMSG[EM_STAFF_MSG_MAX][CMD_CHAR_MAX];

//删除职工
enum EM_DEL_STAFF
{
	EM_DEL_STAFF_ID,
	EM_DEL_STAFF_MAX
};
extern const char CMD_DELSTAFF[EM_DEL_STAFF_MAX][CMD_CHAR_MAX];

//判断职工
enum EM_JUDGE_STAFF
{
	EM_JUDGE_STAFF_IDCARD,
	EM_JUDGE_STAFF_BHAD,
	EM_JUDGE_STAFF_MAX
};
extern const char CMD_JUDGESTAFF[EM_JUDGE_STAFF_MAX][CMD_CHAR_MAX];

//胶订单价
enum EM_DAI_PAY
{
	EM_DAI_PAY_A_W,
	EM_DAI_PAY_2,
	EM_DAI_PAY_2_5,
	EM_DAI_PAY_5_9,
	EM_DAI_PAY_10,
	EM_DAI_PAY_18,
	EM_DAI_PAY_Sf_w,
	EM_DAI_PAY_Sf_2,
	EM_DAI_PAY_Sf_2_5,
	EM_DAI_PAY_Sf_5_9,
	EM_DAI_PAY_Sf_10,
	EM_DAI_PAY_Sf_18,
	EM_DAI_PAY_Td_w,
	EM_DAI_PAY_Td_2,
	EM_DAI_PAY_Td_2_5,
	EM_DAI_PAY_Td_5_9,
	EM_DAI_PAY_Td_10,
	EM_DAI_PAY_Td_18,
	EM_DAI_PAY_MAX
};
extern const char CMD_DAIPAY[EM_DAI_PAY_MAX][CMD_CHAR_MAX];

//折页单价
enum EM_ZHEYE_PAY
{
	EM_ZHEYE_PAY_AQ4,
	EM_ZHEYE_PAY_A4,
	EM_ZHEYE_PAY_AD3,
	EM_ZHEYE_PAY_A3,
	EM_ZHEYE_PAY_A2,

	EM_ZHEYE_PAY_sf_Q4,
	EM_ZHEYE_PAY_sf_4,
	EM_ZHEYE_PAY_sf_D3,
	EM_ZHEYE_PAY_sf_3,
	EM_ZHEYE_PAY_sf_2,

	EM_ZHEYE_PAY_td_Q4,
	EM_ZHEYE_PAY_td_4,
	EM_ZHEYE_PAY_td_D3,
	EM_ZHEYE_PAY_td_3,
	EM_ZHEYE_PAY_td_2,
	EM_ZHEYE_PAY_MAX
};
extern const char CMD_ZHEYEPAY[EM_ZHEYE_PAY_MAX][CMD_CHAR_MAX];

//点页单价
enum EM_DY_PAY
{
	EM_DY_PAY_DOWN,
	EM_DY_PAY_UP,
	EM_DY_PAY_MAX
};
extern const char CMD_DYPAY[EM_DY_PAY_MAX][CMD_CHAR_MAX];

//获取其它项目单价
enum EM_OTHER_PAY
{
	EM_OTHER_PAY_PROID,
	EM_OTHER_PAY_MAX
};
extern const char CMD_OTHERPAY[EM_OTHER_PAY_MAX][CMD_CHAR_MAX];

//其它项目单价信息
enum EM_OTHER_PAY_MSG
{
	EM_OTHER_PAY_MSG_BOOKID,
	EM_OTHER_PAY_MSG_PAY,
	EM_OTHER_PAY_MSG_MAX
};
extern const char CMD_OTHERPAYMSG[EM_OTHER_PAY_MSG_MAX][CMD_CHAR_MAX];

//获取明细
enum EM_GET_DETAILS
{
	EM_GET_DETAILS_NDEX,
	EM_GET_DETAILS_BOOKID,
	EM_GET_DETAILS_PROID,
	EM_GET_DETAILS_PROIDS,
	EM_GET_DETAILS_MAX
};
extern const char CMD_GETDETAILS[EM_GET_DETAILS_MAX][CMD_CHAR_MAX];

//明细信息
enum EM_DETAIL_MSG
{
	EM_DETAIL_MSG_NDEX,
	EM_DETAIL_MSG_PROID,
	EM_DETAIL_MSG_NAME,
	EM_DETAIL_MSG_IDCARD,
	EM_DETAIL_MSG_NUMBER,
	EM_DETAIL_MSG_MAX
};
extern const char CMD_DETAILMSG[EM_DETAIL_MSG_MAX][CMD_CHAR_MAX];

//获取做工统计
enum EM_GET_DAYPAY
{
	EM_GET_DAYPAY_STAFFID,
	EM_GET_DAYPAY_STAFFNAME,
	EM_GET_DAYPAY_DATE,
	EM_GET_DAYPAY_MAX
};
extern const char CMD_GETDAYPAY[EM_GET_DAYPAY_MAX][CMD_CHAR_MAX];

//做工统计信息
enum EM_DAYPAY_MSG
{
	EM_DAYPAY_MSG_ID,
	EM_DAYPAY_MSG_TYPE,
	EM_DAYPAY_MSG_PROID,
	EM_DAYPAY_MSG_PRONAME,
	EM_DAYPAY_MSG_BOOKID,
	EM_DAYPAY_MSG_BOOKNAME,
	EM_DAYPAY_MSG_PAY,
	EM_DAYPAY_MSG_NUMBER,
	EM_DAYPAY_MSG_MONEY,
	EM_DAYPAY_MSG_PAYDAY,
	EM_DAYPAY_MSG_DAYS,
	EM_DAYPAY_MSG_MAX
};
extern const char DAYPAYMSG[EM_DAYPAY_MSG_MAX][CMD_CHAR_MAX];

//获取单价
enum EM_GET_PAY
{
	EM_GET_PAY_STAFFID,
	EM_GET_PAY_PROID,
	EM_GET_PAY_BOOKID,
	EM_GET_PAY_PAY,
	EM_GET_PAY_NITEM,
	EM_GET_PAY_MAX
};
extern const char GETPAYMSG[EM_GET_PAY_MAX][CMD_CHAR_MAX];


//获取月核算
enum EM_GET_MPAY
{
	EM_GET_MPAY_STAFFID,
	EM_GET_MPAY_STAFFNAME,
	EM_GET_MPAY_DATE,
	EM_GET_MPAY_DEX,

	EM_GET_MPAY_ID,
	EM_GET_MPAY_TYPE,
	EM_GET_MPAY_PROID,
	EM_GET_MPAY_PRONAME,
	EM_GET_MPAY_BOOKID,
	EM_GET_MPAY_BOOKNAME,
	EM_GET_MPAY_PAY,
	EM_GET_MPAY_NUMBER,
	EM_GET_MPAY_MONEY,
	EM_GET_MPAY_PAYDAY,
	EM_GET_MPAY_DAYS,
	EM_GET_MPAY_MAX
};
extern const char MPAYMSG[EM_GET_MPAY_MAX][CMD_CHAR_MAX];

//心跳信息
enum EM_HEART
{
	EM_HEART_USER,//账号
	EM_HEART_NAME,//名称
	EM_HEART_MAX
};
extern const char HEARTMSG[EM_HEART_MAX][CMD_CHAR_MAX];