#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "OpenFileManagerPlugin.h"

FOUNDATION_EXPORT double open_file_managerVersionNumber;
FOUNDATION_EXPORT const unsigned char open_file_managerVersionString[];

