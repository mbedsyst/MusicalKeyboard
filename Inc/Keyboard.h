#ifndef __KEYBOARD_H__
#define __KEYBOARD_H__

#include "stm32f4xx.h"
#include <stdint.h>

// Scale in the key of 25000
#define  C0    25000
#define  Cx0   23597
#define  D0    22272
#define  Dx0   21022
#define  E0    19843
#define  F0    18729
#define  Fx0   17678
#define  G0    16685
#define  Gx0   15749
#define  A0    14865
#define  Ax0   14031
#define  B0    13243
#define  C1    12500
#define  Cx1   11798
#define  D1    11136
#define  Dx1   10511
#define  E1     9921
#define  F1     9364
#define  Fx1    8839
#define  G1     8343
#define  Gx1    7875
#define  A1     7433
#define  Ax1    7015
#define  B1     6622
#define  C2     6250
#define  Cx2    5899
#define  D2     5568
#define  Dx2    5256
#define  E2     4961
#define  F2     4682
#define  Fx2    4419
#define  G2     4171
#define  Gx2    3937
#define  A2     3716
#define  Ax2    3508
#define  B2     3311
#define  C3     3125
#define  Cx3    2950
#define  D3     2784
#define  Dx3    2628
#define  E3     2480
#define  F3     2341
#define  Fx3    2210
#define  G3     2086
#define  Gx3    1969
#define  A3     1858
#define  Ax3    1754
#define  B3     1655
#define  C4     1562
#define  Cx4    1474
#define  D4     1392
#define  Dx4    1313
#define  E4     1240
#define  F4     1170
#define  Fx4    1105
#define  G4     1043
#define  Gx4     984
#define  A4      929
#define  Ax4     877
#define  B4      827
#define  C5      781
#define  Cx5     737
#define  D5      696
#define  Dx5     657
#define  E5      620
#define  F5      585
#define  Fx5     552
#define  G5      521
#define  Gx5     492
#define  A5      464
#define  Ax5     438
#define  B5      414
#define  C6      390
#define  Cx6     368
#define  D6      347
#define  Dx6     328
#define  E6      310
#define  F6      292
#define  Fx6     276
#define  G6      260
#define  Gx6     246
#define  A6      232
#define  Ax6     219
#define  B6      207
#define  C7      195
#define  Cx7     184
#define  D7      174
#define  Dx7     164
#define  E7      155
#define  F7      146
#define  Fx7     138
#define  G7      130
#define  Gx7     123
#define  A7      116
#define  Ax7     109
#define  B7      103

void playNote(uint16_t period, uint16_t duration);
void rest(uint16_t duration);

#endif
