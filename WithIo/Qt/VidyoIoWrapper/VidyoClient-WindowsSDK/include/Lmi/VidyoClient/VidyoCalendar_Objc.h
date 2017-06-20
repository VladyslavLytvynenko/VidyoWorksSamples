//
//	VidyoCalendar_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

#import "VidyoMeetingAttendee_Objc.h"
#import "VidyoMeeting_Objc.h"
@class Calendar;
@class CalendarFeedback;
@class FormField;
typedef NS_ENUM(NSInteger, CalendarManagerDefaultServices){
	CALENDARMANAGERDEFAULTSERVICES_Default,
	CALENDARMANAGERDEFAULTSERVICES_External,
	CALENDARMANAGERDEFAULTSERVICES_Google,
	CALENDARMANAGERDEFAULTSERVICES_Outlook2010,
	CALENDARMANAGERDEFAULTSERVICES_Outlook2013
};
typedef NS_ENUM(NSInteger, CalendarServiceCode){
	CALENDARSERVICECODE_ConnectionFailed,
	CALENDARSERVICECODE_ConnectionLost,
	CALENDARSERVICECODE_ConnectionTimeout,
	CALENDARSERVICECODE_GeneralError,
	CALENDARSERVICECODE_InvalidCalendarId,
	CALENDARSERVICECODE_InvalidCredentials,
	CALENDARSERVICECODE_NoService,
	CALENDARSERVICECODE_Ok
};
typedef NS_ENUM(NSInteger, CalendarState){
	CALENDARSTATE_Connected,
	CALENDARSTATE_Connecting,
	CALENDARSTATE_Disconnected,
	CALENDARSTATE_Disconnecting,
	CALENDARSTATE_Initialized,
	CALENDARSTATE_Unavailable
};
typedef NS_ENUM(NSInteger, MeetingSearchResult){
	MEETINGSEARCHRESULT_MiscLocalError,
	MEETINGSEARCHRESULT_MiscRemoteError,
	MEETINGSEARCHRESULT_NoRecords,
	MEETINGSEARCHRESULT_NoResponse,
	MEETINGSEARCHRESULT_OK
};
@protocol ICalendarFeedback
@optional

	-(void) ConnectResult:(Calendar*)c Result:(CalendarServiceCode)result;
	-(void) Disconnected:(Calendar*)c Result:(CalendarServiceCode)result;
	-(void) GetMeetingsResult:(Calendar*)c SearchResult:(MeetingSearchResult)searchResult Meetings:(NSMutableArray*)meetings;
	-(void) MeetingCreated:(Calendar*)c M:(Meeting*)m R:(MeetingActionResult)r CreatedToken:(NSMutableString*)createdToken;
	-(void) MeetingCreatedByService:(Calendar*)c M:(Meeting*)m InviteOwner:(MeetingAttendee*)inviteOwner;
	-(void) MeetingEventNotification:(Calendar*)c M:(Meeting*)m;
	-(void) MeetingRemoved:(Calendar*)c M:(Meeting*)m R:(MeetingActionResult)r RemovedToken:(NSMutableString*)removedToken;
	-(void) MeetingRemovedByService:(Calendar*)c M:(Meeting*)m R:(MeetingActionResult)r;
	-(void) MeetingUpdated:(Calendar*)c M:(Meeting*)m R:(MeetingActionResult)r UpdatedToken:(NSMutableString*)updatedToken;
	-(void) MeetingUpdatedByService:(Calendar*)c M:(Meeting*)m R:(MeetingActionResult)r;
@end
@interface CalendarFeedback : NSObject<ICalendarFeedback>
{
	void* objPtr;
}
	-(id) init;
	-(void) dealloc;
	-(void*)GetObjectPtr;
@end
@interface Calendar : NSObject
{
	void* objPtr;
	@public
	NSMutableString* id;
	CalendarState serviceState;
	NSMutableString* serviceType;
}

	-(void) dealloc;
	-(BOOL) Connect:(NSMutableArray*)connProperties;
	-(BOOL) CreateMeeting:(CalendarFeedback*)feedback Meeting:(Meeting*)meeting CreateToken:(NSMutableString*)createToken;
	-(NSString*) GetId;
	-(BOOL) GetMeetingsByDay:(unsigned int)year Month:(unsigned int)month Day:(unsigned int)day CreateToken:(NSMutableString*)createToken;
	-(BOOL) GetMeetingsByMonth:(unsigned int)year Month:(unsigned int)month CreateToken:(NSMutableString*)createToken;
	-(BOOL) GetMeetingsByWeek:(unsigned int)year Month:(unsigned int)month Day:(unsigned int)day CreateToken:(NSMutableString*)createToken;
	-(CalendarState) GetServiceState;
	-(NSString*) GetServiceType;
	-(BOOL) RemoveMeeting:(CalendarFeedback*)feedback Meeting:(Meeting*)meeting CreateToken:(NSMutableString*)createToken;
	-(BOOL) SearchMeetings:(NSMutableString*)searchText BeginDate:(NSMutableString*)beginDate EndDate:(NSMutableString*)endDate Index:(unsigned int)index PageSize:(unsigned int)pageSize;
	-(BOOL) SetRoomIdMatchString:(NSMutableString*)regexp;
	-(BOOL) UpdateMeeting:(CalendarFeedback*)feedback Meeting:(Meeting*)meeting CreateToken:(NSMutableString*)createToken;
	-(id) initWithObject:(void*)rPtr;
	-(void*)GetObjectPtr;
@end
