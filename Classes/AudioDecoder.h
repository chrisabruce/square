//
//  AudioDecoder.h
//  SoftModemTerminal
//
//  Created by Adam Rachman on 8/15/12.
//
//
#include "SwipeData.h"

@interface AudioDecoder : NSObject {
  int silenceLevel;
  int minLevel;
  double minLevelCoeff;
}
  
- (int) getMinLevel: (NSMutableData *)data coeff:(double)coeff;
- (BOOL) isOne: (int)actualInterval oneInterval:(int)oneInterval;
- (CFMutableBitVectorRef) decodeToBitSet: (NSMutableData *)data;
- (SwipeData *) decodeToASCII: (CFMutableBitVectorRef)bits;
- (SwipeData *) decodeToASCII: (CFMutableBitVectorRef)bits beginIndex:(int)beginIndex bitsPerChar:(int)bitsPerChar baseChar:(int)baseChar;
- (char) decode: (int)input baseChar:(int)baseChar;
@end
