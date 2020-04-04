
/*
 *创建单例的
 */
#ifndef SYNTHESIZE_SINGLETON_FOR_CLASS

#import <objc/runtime.h>

/**
 *  选人的场景
 */
typedef NS_ENUM(NSInteger, SelectObjectType){
    
    SelectObjectType_None = 0,//无
    
    SelectObjectType_CreateGroupChatSelectMember = 1001,//创建群聊选人
    
    SelectObjectType_CreateBoardCoopSelectMember = 1111,//创建白板选人
    
    SelectObjectType_GroupChatSelectMember = 1002,//群组中选人
    
    SelectObjectType_VoiceMeetingSelectMember = 1011,//语音会议选人
    
    SelectObjectType_CreateVoiceMeetingSelectMember = 1012,//创建语音会议选人
    
    SelectObjectType_VideoMeetingSelectMember = 1021,//视频会议选人
    
    SelectObjectType_CreateVideoMeetingSelectMember = 1022,//创建视频会议选人
    
    SelectObjectType_TransmitSelectMember = 1031,//转发选人
    
    SelectObjectType_CreateVidyoSelectMember = 1041,//创建vidyo会议选人
    
    SelectObjectType_VidyoConferenceSelectMember = 1042,//vidyo会议中选人
    
    SelectObjectType_SendCardSelectMember = 3000,//发送名片选人
    
};

/**
 *  通话结束时用于判断通话类型
 */
typedef NS_ENUM(NSInteger, VoipCallType){
    
    VoipCallType_Voice = 0,//语音单聊
    
    VoipCallType_Video = 1,//视频单聊
    
    VoipCallType_LandingCall = 2,//网络直播
    
    VoipCallType_LandingReCall = 3,//网络回拨
    
    VoipCallType_VoiceMeeting = 20,//语音会议
    
    VoipCallType_VideoMeeting = 21,//视频会议
};

/**
 *  当前处于的聊天状态
 */
typedef NS_ENUM(NSInteger,NowChatingObjectType) {
    
    NowChatingObjectType_None=0,//没有聊天
    
    NowChatingObjectType_Member=1,//正在跟某人聊天界面
    
    NowChatingObjectType_Group=2,//正在跟某个群组聊天界面
    
    NowChatingObjectType_App=3,//正在某个应用聊天界面
    
    NowChatingObjectType_Department = 999,//正在某个部门聊天界面
};

/**
 * 重连状态值
 */
typedef NS_ENUM(NSUInteger,ECConnectState) {
    
    /** 连接成功 */
    State_ConnectSuccess=0,
    
    /** 连接中 */
    State_Connecting,
    
    /** 连接失败 */
    State_ConnectFailed
};

#pragma mark -
#pragma mark Singleton


#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(className) \
\
+ (className *)sharedInstance;

#define SYNTHESIZE_SINGLETON_FOR_CLASS(className) \
\
+ (className *)sharedInstance { \
static className *sharedInstance = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
sharedInstance = [[self alloc] init]; \
}); \
return sharedInstance; \
}



#endif
