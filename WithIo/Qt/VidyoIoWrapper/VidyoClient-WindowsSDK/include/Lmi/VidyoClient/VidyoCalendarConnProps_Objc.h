//
//	VidyoCalendarConnProps_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, CalendarConnectParamType){
	CALENDARCONNECTPARAMTYPE_Mailbox,
	CALENDARCONNECTPARAMTYPE_PasswordToken,
	CALENDARCONNECTPARAMTYPE_ServerAddress,
	CALENDARCONNECTPARAMTYPE_Unknown,
	CALENDARCONNECTPARAMTYPE_UserId
};
@interface CalendarConnProps : NSObject
{
	@public
	CalendarConnectParamType connPropType;
	NSMutableString* connPropValue;
}

@end
