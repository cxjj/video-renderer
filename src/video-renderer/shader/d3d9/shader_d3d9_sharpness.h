#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
// Parameters:
//
//   sampler2D ImageSampler;
//   float height;
//   float sharpness;
//   float width;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   width        c0       1
//   height       c1       1
//   sharpness    c2       1
//   ImageSampler s0       1
//

    ps_2_0
    def c3, 1, 1.20000005, -1, 1
    def c4, 1.5, 1, 0, -1
    def c5, 0.859375, -0.1171875, -0.09765625, 0
    def c6, 0, 1, -1, 0
    dcl t0.xy  // input<4,5>
    dcl_2d s0

#line 30 "G:\git1\video-renderer\src\video-renderer\shader\d3d9\d3d9_sharpness.hlsl"
    rcp r0.w, c0.x
    mul r0.x, r0.w, c3.x  // ::ps<0>
    rcp r0.z, c1.x
    mul r0.y, r0.z, c3.x  // ::ps<1>
    mul r0.zw, r0.wzyx, c3.y  // ::st1<1,0>
    mul r1.xy, r0.wzyx, c3.x
    add r1.xy, r1, t0
    mul r1.zw, r0, c3
    add r2.xy, r1.wzyx, t0
    mul r3.xy, r0.wzyx, c3.zxyw
    add r3.xy, r3, t0
    mul r0.zw, r0, c3.z
    add r4.xy, r0.wzyx, t0
    mul r0.xy, r0, c4.x  // ::st2<0,1>
    mul r5.xy, r0, c4.yzxw
    add r5.xy, r5, t0
    mul r0.zw, r0.wzyx, c6.wzyx
    add r6.xy, r0.wzyx, t0
    mul r0.zw, r0.wzyx, c4
    add r7.xy, r0.wzyx, t0

#line 41
    mul r0.xy, r0, c6.wzyx
    add r0.xy, r0, t0

#line 32
    texld r8, t0, s0  // ::p<0,1,2,3>
    texld r1, r1, s0
    texld r2, r2, s0
    texld r3, r3, s0
    texld r4, r4, s0
    texld r5, r5, s0
    texld r6, r6, s0
    texld r7, r7, s0
    texld r0, r0, s0

#line 33
    add r1, r1, r2
    add r1, r3, r1
    add r1, r4, r1  // ::sum1<0,1,2,3>

#line 38
    add r2, r5, r6
    add r2, r7, r2
    add r0, r0, r2  // ::sum2<0,1,2,3>

#line 42
    mul r2, r8, c5.x
    mul r0, r0, c5.y
    add r0, r0, r2
    mul r1, r1, c5.z
    add r0, r0, r1  // ::t<0,1,2,3>
    mul r0, r0, c2.x
    add r0, r0, r8  // ::main<0,1,2,3>

#line 28
    mov oC0, r0  // ::main<0,1,2,3>

// approximately 45 instruction slots used (9 texture, 36 arithmetic)
#endif

const BYTE shader_d3d9_sharpness[] =
{
      0,   2, 255, 255, 254, 255, 
      3,   1,  68,  66,  85,  71, 
     40,   0,   0,   0, 224,   3, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 116,   0, 
      0,   0,  51,   0,   0,   0, 
    120,   0,   0,   0,   9,   0, 
      0,   0,  44,   3,   0,   0, 
     16,   2,   0,   0,  71,  58, 
     92, 103, 105, 116,  49,  92, 
    118, 105, 100, 101, 111,  45, 
    114, 101, 110, 100, 101, 114, 
    101, 114,  92, 115, 114,  99, 
     92, 118, 105, 100, 101, 111, 
     45, 114, 101, 110, 100, 101, 
    114, 101, 114,  92, 115, 104, 
     97, 100, 101, 114,  92, 100, 
     51, 100,  57,  92, 100,  51, 
    100,  57,  95, 115, 104,  97, 
    114, 112, 110, 101, 115, 115, 
     46, 104, 108, 115, 108,   0, 
    171, 171,  40,   0,   0,   0, 
      0,   0, 255, 255,   0,   5, 
      0,   0,   0,   0, 255, 255, 
     24,   5,   0,   0,   0,   0, 
    255, 255,  48,   5,   0,   0, 
      0,   0, 255, 255,  72,   5, 
      0,   0,   0,   0, 255, 255, 
     96,   5,   0,   0,   0,   0, 
    255, 255, 108,   5,   0,   0, 
     30,   0,   0,   0, 120,   5, 
      0,   0,  30,   0,   0,   0, 
    132,   5,   0,   0,  30,   0, 
      0,   0, 148,   5,   0,   0, 
     30,   0,   0,   0, 160,   5, 
      0,   0,  31,   0,   0,   0, 
    176,   5,   0,   0,  33,   0, 
      0,   0, 192,   5,   0,   0, 
     33,   0,   0,   0, 208,   5, 
      0,   0,  34,   0,   0,   0, 
    224,   5,   0,   0,  34,   0, 
      0,   0, 240,   5,   0,   0, 
     35,   0,   0,   0,   0,   6, 
      0,   0,  35,   0,   0,   0, 
     16,   6,   0,   0,  36,   0, 
      0,   0,  32,   6,   0,   0, 
     36,   0,   0,   0,  48,   6, 
      0,   0,  37,   0,   0,   0, 
     64,   6,   0,   0,  38,   0, 
      0,   0,  80,   6,   0,   0, 
     38,   0,   0,   0,  96,   6, 
      0,   0,  39,   0,   0,   0, 
    112,   6,   0,   0,  39,   0, 
      0,   0, 128,   6,   0,   0, 
     40,   0,   0,   0, 144,   6, 
      0,   0,  40,   0,   0,   0, 
    160,   6,   0,   0,  41,   0, 
      0,   0, 176,   6,   0,   0, 
     41,   0,   0,   0, 192,   6, 
      0,   0,  32,   0,   0,   0, 
    208,   6,   0,   0,  33,   0, 
      0,   0, 224,   6,   0,   0, 
     34,   0,   0,   0, 240,   6, 
      0,   0,  35,   0,   0,   0, 
      0,   7,   0,   0,  36,   0, 
      0,   0,  16,   7,   0,   0, 
     38,   0,   0,   0,  32,   7, 
      0,   0,  39,   0,   0,   0, 
     48,   7,   0,   0,  40,   0, 
      0,   0,  64,   7,   0,   0, 
     41,   0,   0,   0,  80,   7, 
      0,   0,  33,   0,   0,   0, 
     96,   7,   0,   0,  33,   0, 
      0,   0, 112,   7,   0,   0, 
     33,   0,   0,   0, 128,   7, 
      0,   0,  38,   0,   0,   0, 
    144,   7,   0,   0,  38,   0, 
      0,   0, 160,   7,   0,   0, 
     38,   0,   0,   0, 176,   7, 
      0,   0,  42,   0,   0,   0, 
    192,   7,   0,   0,  42,   0, 
      0,   0, 208,   7,   0,   0, 
     42,   0,   0,   0, 224,   7, 
      0,   0,  42,   0,   0,   0, 
    240,   7,   0,   0,  42,   0, 
      0,   0,   0,   8,   0,   0, 
     43,   0,   0,   0,  16,   8, 
      0,   0,  43,   0,   0,   0, 
     32,   8,   0,   0,  28,   0, 
      0,   0,  48,   8,   0,   0, 
    109,  97, 105, 110,   0, 105, 
    110, 112, 117, 116,   0, 112, 
    111, 115,   0, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 117, 118,   0, 171, 
      1,   0,   3,   0,   1,   0, 
      2,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  99, 111, 
    108, 111, 114,   0, 171, 171, 
     27,   2,   0,   0,  32,   2, 
      0,   0,  48,   2,   0,   0, 
     52,   2,   0,   0,  68,   2, 
      0,   0,  32,   2,   0,   0, 
      5,   0,   0,   0,   1,   0, 
     10,   0,   1,   0,   3,   0, 
     76,   2,   0,   0,   4,   0, 
      0,   0,   4,   0,   5,   0, 
    255, 255, 255, 255,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  49,   0,   0,   0, 
      0,   0,   1,   0,   2,   0, 
      3,   0,  50,   0,   0,   0, 
      0,   0,   1,   0,   2,   0, 
      3,   0, 112,   0, 171, 171, 
     28,   0,   0,   0,   0,   0, 
      1,   0,   2,   0,   3,   0, 
    112, 115,   0, 171,   7,   0, 
      0,   0,   0,   0, 255, 255, 
    255, 255, 255, 255,   9,   0, 
      0,   0, 255, 255,   1,   0, 
    255, 255, 255, 255, 115, 116, 
     49,   0,  10,   0,   0,   0, 
    255, 255, 255, 255,   1,   0, 
      0,   0, 115, 116,  50,   0, 
     19,   0,   0,   0,   0,   0, 
      1,   0, 255, 255, 255, 255, 
    115, 117, 109,  49,   0, 171, 
    171, 171,  39,   0,   0,   0, 
      0,   0,   1,   0,   2,   0, 
      3,   0, 115, 117, 109,  50, 
      0, 171, 171, 171,  42,   0, 
      0,   0,   0,   0,   1,   0, 
      2,   0,   3,   0, 116,   0, 
    171, 171,  47,   0,   0,   0, 
      0,   0,   1,   0,   2,   0, 
      3,   0,  16,   2,   0,   0, 
     21,   2,   0,   0, 100,   2, 
      0,   0,   1,   0,   0,   0, 
    116,   2,   0,   0,   0,   0, 
      0,   0,  16,   2,   0,   0, 
    128,   2,   0,   0,   2,   0, 
      0,   0, 144,   2,   0,   0, 
      0,   0,   0,   0, 168,   2, 
      0,   0,  32,   2,   0,   0, 
      1,   0,   0,   0, 172,   2, 
      0,   0,   0,   0,   0,   0, 
    184,   2,   0,   0,  52,   2, 
      0,   0,   2,   0,   0,   0, 
    188,   2,   0,   0,   0,   0, 
      0,   0, 212,   2,   0,   0, 
     52,   2,   0,   0,   1,   0, 
      0,   0, 216,   2,   0,   0, 
      0,   0,   0,   0, 228,   2, 
      0,   0,  52,   2,   0,   0, 
      1,   0,   0,   0, 232,   2, 
      0,   0,   0,   0,   0,   0, 
    244,   2,   0,   0,  32,   2, 
      0,   0,   1,   0,   0,   0, 
    252,   2,   0,   0,   0,   0, 
      0,   0,   8,   3,   0,   0, 
     32,   2,   0,   0,   1,   0, 
      0,   0,  16,   3,   0,   0, 
      0,   0,   0,   0,  28,   3, 
      0,   0,  32,   2,   0,   0, 
      1,   0,   0,   0,  32,   3, 
      0,   0,  77, 105,  99, 114, 
    111, 115, 111, 102, 116,  32, 
     40,  82,  41,  32,  72,  76, 
     83,  76,  32,  83, 104,  97, 
    100, 101, 114,  32,  67, 111, 
    109, 112, 105, 108, 101, 114, 
     32,  49,  48,  46,  49,   0, 
    254, 255,  58,   0,  67,  84, 
     65,  66,  28,   0,   0,   0, 
    187,   0,   0,   0,   0,   2, 
    255, 255,   4,   0,   0,   0, 
     28,   0,   0,   0,   5,   1, 
      0,   0, 180,   0,   0,   0, 
    108,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   0,   0, 
    124,   0,   0,   0,   0,   0, 
      0,   0, 140,   0,   0,   0, 
      2,   0,   1,   0,   1,   0, 
      6,   0, 148,   0,   0,   0, 
      0,   0,   0,   0, 164,   0, 
      0,   0,   2,   0,   2,   0, 
      1,   0,  10,   0, 148,   0, 
      0,   0,   0,   0,   0,   0, 
    174,   0,   0,   0,   2,   0, 
      0,   0,   1,   0,   2,   0, 
    148,   0,   0,   0,   0,   0, 
      0,   0,  73, 109,  97, 103, 
    101,  83,  97, 109, 112, 108, 
    101, 114,   0, 171, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 104, 101, 
    105, 103, 104, 116,   0, 171, 
      0,   0,   3,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 115, 104, 
     97, 114, 112, 110, 101, 115, 
    115,   0, 119, 105, 100, 116, 
    104,   0, 112, 115,  95,  50, 
     95,  48,   0,  77, 105,  99, 
    114, 111, 115, 111, 102, 116, 
     32,  40,  82,  41,  32,  72, 
     76,  83,  76,  32,  83, 104, 
     97, 100, 101, 114,  32,  67, 
    111, 109, 112, 105, 108, 101, 
    114,  32,  49,  48,  46,  49, 
      0, 171,  81,   0,   0,   5, 
      3,   0,  15, 160,   0,   0, 
    128,  63, 154, 153, 153,  63, 
      0,   0, 128, 191,   0,   0, 
    128,  63,  81,   0,   0,   5, 
      4,   0,  15, 160,   0,   0, 
    192,  63,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
    128, 191,  81,   0,   0,   5, 
      5,   0,  15, 160,   0,   0, 
     92,  63,   0,   0, 240, 189, 
      0,   0, 200, 189,   0,   0, 
      0,   0,  81,   0,   0,   5, 
      6,   0,  15, 160,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0, 128, 191,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
      3, 176,  31,   0,   0,   2, 
      0,   0,   0, 144,   0,   8, 
     15, 160,   6,   0,   0,   2, 
      0,   0,   8, 128,   0,   0, 
      0, 160,   5,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
    255, 128,   3,   0,   0, 160, 
      6,   0,   0,   2,   0,   0, 
      4, 128,   1,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      2, 128,   0,   0, 170, 128, 
      3,   0,   0, 160,   5,   0, 
      0,   3,   0,   0,  12, 128, 
      0,   0,  27, 128,   3,   0, 
     85, 160,   5,   0,   0,   3, 
      1,   0,   3, 128,   0,   0, 
     27, 128,   3,   0,   0, 160, 
      2,   0,   0,   3,   1,   0, 
      3, 128,   1,   0, 228, 128, 
      0,   0, 228, 176,   5,   0, 
      0,   3,   1,   0,  12, 128, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   2,   0,   0,   3, 
      2,   0,   3, 128,   1,   0, 
     27, 128,   0,   0, 228, 176, 
      5,   0,   0,   3,   3,   0, 
      3, 128,   0,   0,  27, 128, 
      3,   0, 210, 160,   2,   0, 
      0,   3,   3,   0,   3, 128, 
      3,   0, 228, 128,   0,   0, 
    228, 176,   5,   0,   0,   3, 
      0,   0,  12, 128,   0,   0, 
    228, 128,   3,   0, 170, 160, 
      2,   0,   0,   3,   4,   0, 
      3, 128,   0,   0,  27, 128, 
      0,   0, 228, 176,   5,   0, 
      0,   3,   0,   0,   3, 128, 
      0,   0, 228, 128,   4,   0, 
      0, 160,   5,   0,   0,   3, 
      5,   0,   3, 128,   0,   0, 
    228, 128,   4,   0, 201, 160, 
      2,   0,   0,   3,   5,   0, 
      3, 128,   5,   0, 228, 128, 
      0,   0, 228, 176,   5,   0, 
      0,   3,   0,   0,  12, 128, 
      0,   0,  27, 128,   6,   0, 
     27, 160,   2,   0,   0,   3, 
      6,   0,   3, 128,   0,   0, 
     27, 128,   0,   0, 228, 176, 
      5,   0,   0,   3,   0,   0, 
     12, 128,   0,   0,  27, 128, 
      4,   0, 228, 160,   2,   0, 
      0,   3,   7,   0,   3, 128, 
      0,   0,  27, 128,   0,   0, 
    228, 176,   5,   0,   0,   3, 
      0,   0,   3, 128,   0,   0, 
    228, 128,   6,   0,  27, 160, 
      2,   0,   0,   3,   0,   0, 
      3, 128,   0,   0, 228, 128, 
      0,   0, 228, 176,  66,   0, 
      0,   3,   8,   0,  15, 128, 
      0,   0, 228, 176,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      1,   0,  15, 128,   1,   0, 
    228, 128,   0,   8, 228, 160, 
     66,   0,   0,   3,   2,   0, 
     15, 128,   2,   0, 228, 128, 
      0,   8, 228, 160,  66,   0, 
      0,   3,   3,   0,  15, 128, 
      3,   0, 228, 128,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      4,   0,  15, 128,   4,   0, 
    228, 128,   0,   8, 228, 160, 
     66,   0,   0,   3,   5,   0, 
     15, 128,   5,   0, 228, 128, 
      0,   8, 228, 160,  66,   0, 
      0,   3,   6,   0,  15, 128, 
      6,   0, 228, 128,   0,   8, 
    228, 160,  66,   0,   0,   3, 
      7,   0,  15, 128,   7,   0, 
    228, 128,   0,   8, 228, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      0,   8, 228, 160,   2,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   2,   0, 
    228, 128,   2,   0,   0,   3, 
      1,   0,  15, 128,   3,   0, 
    228, 128,   1,   0, 228, 128, 
      2,   0,   0,   3,   1,   0, 
     15, 128,   4,   0, 228, 128, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   2,   0,  15, 128, 
      5,   0, 228, 128,   6,   0, 
    228, 128,   2,   0,   0,   3, 
      2,   0,  15, 128,   7,   0, 
    228, 128,   2,   0, 228, 128, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      2,   0, 228, 128,   5,   0, 
      0,   3,   2,   0,  15, 128, 
      8,   0, 228, 128,   5,   0, 
      0, 160,   5,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   5,   0,  85, 160, 
      2,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      2,   0, 228, 128,   5,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   5,   0, 
    170, 160,   2,   0,   0,   3, 
      0,   0,  15, 128,   0,   0, 
    228, 128,   1,   0, 228, 128, 
      5,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
      2,   0,   0, 160,   2,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 128,   8,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,  15, 128,   0,   0, 
    228, 128, 255, 255,   0,   0
};