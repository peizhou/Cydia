/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/CoreDAVTaskDelegate.h>
#import <DACalDAV/XXUnknownSuperclass.h>

@class MobileCalDAVCalendar, CalDAVPrincipalResult, MobileCalDAVPrincipal;

@interface CalDAVAttendeeFixupTaskGroup : XXUnknownSuperclass <CoreDAVTaskDelegate> {
	MobileCalDAVPrincipal *_principal;	// 44 = 0x2c
	MobileCalDAVCalendar *_calendar;	// 48 = 0x30
	void *_calItem;	// 52 = 0x34
	CalDAVPrincipalResult *_userInfo;	// 56 = 0x38
@private
	BOOL _shouldSave;	// 60 = 0x3c
}
@property(readonly, assign) BOOL shouldSave;	// G=0x1d991; @synthesize=_shouldSave
+ (id)_userInfoCache;	// 0x1c291
// declared property getter: - (BOOL)shouldSave;	// 0x1d991
- (void)task:(id)task didFinishWithError:(id)error;	// 0x1d6b1
- (void)startTaskGroup;	// 0x1d1f5
- (BOOL)_organizerIsMe:(void *)me;	// 0x1cff9
- (void)_addOrganizerToItem;	// 0x1cba9
- (void)_setOrganizerInfo;	// 0x1c935
- (id)_getUserInfoFromAddressBook;	// 0x1c3e9
- (void)dealloc;	// 0x1c381
- (id)initWithPrincipal:(id)principal calendar:(id)calendar calendarItem:(void *)item;	// 0x1c2fd
@end