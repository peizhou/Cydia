/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/XXUnknownSuperclass.h>

@class Message;

@interface MessageBody : XXUnknownSuperclass {
	Message *_message;	// 4 = 0x4
}
@property(retain) Message *message;	// G=0x115a5; S=0x1163d; converted property
- (id)rawData;	// 0x115bd
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html;	// 0x115dd
- (id)htmlContentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2;	// 0x11601
- (id)contentToOffset:(unsigned)offset resultOffset:(unsigned *)offset2 asHTML:(BOOL)html isComplete:(BOOL *)complete;	// 0x11599
- (id)htmlContent;	// 0x11625
- (BOOL)isHTML;	// 0x1159d
- (BOOL)isRich;	// 0x115a1
// converted property setter: - (void)setMessage:(id)message;	// 0x1163d
// converted property getter: - (id)message;	// 0x115a5
- (unsigned)numberOfAttachmentsSigned:(BOOL *)attachmentsSigned encrypted:(BOOL *)encrypted;	// 0x115b5
- (id)attachments;	// 0x11701
- (id)textHtmlPart;	// 0x115b9
- (void)dealloc;	// 0x11725
@end