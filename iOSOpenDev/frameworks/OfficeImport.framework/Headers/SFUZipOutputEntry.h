/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUZipOutputEntry : XXUnknownSuperclass {
@private
	NSString *name;	// 4 = 0x4
	unsigned utf8NameLength;	// 8 = 0x8
	BOOL isCompressed;	// 12 = 0xc
	BOOL isEncrypted;	// 13 = 0xd
	unsigned time;	// 16 = 0x10
	unsigned long long compressedSize;	// 20 = 0x14
	unsigned long long uncompressedSize;	// 28 = 0x1c
	unsigned long long offset;	// 36 = 0x24
	unsigned long long compressedDataOffset;	// 44 = 0x2c
	unsigned crc;	// 52 = 0x34
	BOOL isWrittenDirectlyToFile;	// 56 = 0x38
	BOOL is64Bit;	// 57 = 0x39
}
- (void)dealloc;	// 0x2e6839
- (id)description;	// 0x2e5639
- (int)compareByOffset:(id)offset;	// 0x2e3845
@end