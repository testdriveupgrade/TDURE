#include "testrec_init.h"

__attribute__((alias("__imp__sub_824A9E30"))) PPC_WEAK_FUNC(sub_824A9E30);
PPC_FUNC_IMPL(__imp__sub_824A9E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82644a18
	ctx.lr = 0x824A9E38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lis r31,-31974
	ctx.r31.s64 = -2095448064;
	// addi r25,r11,-280
	ctx.r25.s64 = ctx.r11.s64 + -280;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// oris r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 2147483648;
	// lis r11,-6067
	ctx.r11.s64 = -397606912;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,3968
	ctx.r4.u64 = ctx.r11.u64 | 3968;
	// lis r11,-21776
	ctx.r11.s64 = -1427111936;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,22511
	ctx.r11.u64 = ctx.r11.u64 | 22511;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9E80;
	sub_8279BCE0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r26,r11,17
	ctx.r26.u64 = ctx.r11.u64 | 17;
	// li r11,72
	ctx.r11.s64 = 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r26,r11,32,0
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r26.u64 & 0xFFFFFFFF);
	// lis r11,-14496
	ctx.r11.s64 = -950009856;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,34205
	ctx.r4.u64 = ctx.r11.u64 | 34205;
	// lis r11,10856
	ctx.r11.s64 = 711458816;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,28
	ctx.r11.u64 = ctx.r11.u64 | 28;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9EC0;
	sub_8279BCE0(ctx, base);
	// lis r11,-20723
	ctx.r11.s64 = -1358102528;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22185
	ctx.r4.u64 = ctx.r11.u64 | 22185;
	// lis r11,22506
	ctx.r11.s64 = 1474953216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49177
	ctx.r11.u64 = ctx.r11.u64 | 49177;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9EF0;
	sub_8279BCE0(ctx, base);
	// lis r11,-32736
	ctx.r11.s64 = -2145386496;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56500
	ctx.r4.u64 = ctx.r11.u64 | 56500;
	// lis r11,-10382
	ctx.r11.s64 = -680394752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38890
	ctx.r11.u64 = ctx.r11.u64 | 38890;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9F20;
	sub_8279BCE0(ctx, base);
	// lis r11,15135
	ctx.r11.s64 = 991887360;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41298
	ctx.r4.u64 = ctx.r11.u64 | 41298;
	// lis r11,-27817
	ctx.r11.s64 = -1823014912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29271
	ctx.r11.u64 = ctx.r11.u64 | 29271;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9F50;
	sub_8279BCE0(ctx, base);
	// lis r11,5170
	ctx.r11.s64 = 338821120;
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11087
	ctx.r4.u64 = ctx.r11.u64 | 11087;
	// lis r11,5071
	ctx.r11.s64 = 332333056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9636
	ctx.r11.u64 = ctx.r11.u64 | 9636;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9F80;
	sub_8279BCE0(ctx, base);
	// lis r11,24725
	ctx.r11.s64 = 1620377600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// ori r4,r11,59189
	ctx.r4.u64 = ctx.r11.u64 | 59189;
	// lis r11,32695
	ctx.r11.s64 = 2142699520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20622
	ctx.r11.u64 = ctx.r11.u64 | 20622;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9FB0;
	sub_8279BCE0(ctx, base);
	// lis r11,20408
	ctx.r11.s64 = 1337458688;
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27944
	ctx.r4.u64 = ctx.r11.u64 | 27944;
	// lis r11,-209
	ctx.r11.s64 = -13697024;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1917
	ctx.r11.u64 = ctx.r11.u64 | 1917;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824A9FE0;
	sub_8279BCE0(ctx, base);
	// lis r11,8301
	ctx.r11.s64 = 544014336;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61693
	ctx.r4.u64 = ctx.r11.u64 | 61693;
	// lis r11,1491
	ctx.r11.s64 = 97714176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27070
	ctx.r11.u64 = ctx.r11.u64 | 27070;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA010;
	sub_8279BCE0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r27,r11,8209
	ctx.r27.u64 = ctx.r11.u64 | 8209;
	// li r11,74
	ctx.r11.s64 = 74;
	// li r9,0
	ctx.r9.s64 = 0;
	// rldimi r27,r11,32,0
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r27.u64 & 0xFFFFFFFF);
	// lis r11,3904
	ctx.r11.s64 = 255852544;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,31456
	ctx.r4.u64 = ctx.r11.u64 | 31456;
	// lis r11,-31413
	ctx.r11.s64 = -2058682368;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r11,r11,15949
	ctx.r11.u64 = ctx.r11.u64 | 15949;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA050;
	sub_8279BCE0(ctx, base);
	// lis r11,8933
	ctx.r11.s64 = 585433088;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46896
	ctx.r4.u64 = ctx.r11.u64 | 46896;
	// lis r11,13771
	ctx.r11.s64 = 902496256;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,56964
	ctx.r11.u64 = ctx.r11.u64 | 56964;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AA080;
	sub_8279BCE0(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r30,r11,32576
	ctx.r30.s64 = ctx.r11.s64 + 32576;
	// lis r11,3528
	ctx.r11.s64 = 231211008;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// ori r4,r11,15661
	ctx.r4.u64 = ctx.r11.u64 | 15661;
	// lis r11,-19117
	ctx.r11.s64 = -1252851712;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,35191
	ctx.r11.u64 = ctx.r11.u64 | 35191;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA0B8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// oris r24,r11,32768
	ctx.r24.u64 = ctx.r11.u64 | 2147483648;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// lis r11,-18697
	ctx.r11.s64 = -1225326592;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r4,r11,16587
	ctx.r4.u64 = ctx.r11.u64 | 16587;
	// lis r11,-3722
	ctx.r11.s64 = -243924992;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,27850
	ctx.r11.u64 = ctx.r11.u64 | 27850;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA0F0;
	sub_8279BCE0(ctx, base);
	// lis r11,-26150
	ctx.r11.s64 = -1713766400;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51926
	ctx.r4.u64 = ctx.r11.u64 | 51926;
	// lis r11,29166
	ctx.r11.s64 = 1911422976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15161
	ctx.r11.u64 = ctx.r11.u64 | 15161;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA120;
	sub_8279BCE0(ctx, base);
	// lis r11,8997
	ctx.r11.s64 = 589627392;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9601
	ctx.r4.u64 = ctx.r11.u64 | 9601;
	// lis r11,19088
	ctx.r11.s64 = 1250951168;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12103
	ctx.r11.u64 = ctx.r11.u64 | 12103;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA150;
	sub_8279BCE0(ctx, base);
	// lis r11,3080
	ctx.r11.s64 = 201850880;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44956
	ctx.r4.u64 = ctx.r11.u64 | 44956;
	// lis r11,-13816
	ctx.r11.s64 = -905445376;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30900
	ctx.r11.u64 = ctx.r11.u64 | 30900;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA180;
	sub_8279BCE0(ctx, base);
	// lis r11,-15301
	ctx.r11.s64 = -1002766336;
	// addi r3,r30,-27752
	ctx.r3.s64 = ctx.r30.s64 + -27752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29542
	ctx.r4.u64 = ctx.r11.u64 | 29542;
	// lis r11,23145
	ctx.r11.s64 = 1516830720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7536
	ctx.r11.u64 = ctx.r11.u64 | 7536;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA1B0;
	sub_8279BCE0(ctx, base);
	// lis r11,-5354
	ctx.r11.s64 = -350879744;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63867
	ctx.r4.u64 = ctx.r11.u64 | 63867;
	// lis r11,-9487
	ctx.r11.s64 = -621740032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19075
	ctx.r11.u64 = ctx.r11.u64 | 19075;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA1E0;
	sub_8279BCE0(ctx, base);
	// lis r11,-14669
	ctx.r11.s64 = -961347584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-26440
	ctx.r3.s64 = ctx.r30.s64 + -26440;
	// ori r4,r11,13483
	ctx.r4.u64 = ctx.r11.u64 | 13483;
	// lis r11,27249
	ctx.r11.s64 = 1785790464;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,43594
	ctx.r11.u64 = ctx.r11.u64 | 43594;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA210;
	sub_8279BCE0(ctx, base);
	// lis r11,-5730
	ctx.r11.s64 = -375521280;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48822
	ctx.r4.u64 = ctx.r11.u64 | 48822;
	// lis r11,-5399
	ctx.r11.s64 = -353828864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64953
	ctx.r11.u64 = ctx.r11.u64 | 64953;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA240;
	sub_8279BCE0(ctx, base);
	// lis r11,21153
	ctx.r11.s64 = 1386283008;
	// addi r3,r30,-24984
	ctx.r3.s64 = ctx.r30.s64 + -24984;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50000
	ctx.r4.u64 = ctx.r11.u64 | 50000;
	// lis r11,-20788
	ctx.r11.s64 = -1362362368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6148
	ctx.r11.u64 = ctx.r11.u64 | 6148;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA270;
	sub_8279BCE0(ctx, base);
	// lis r11,32140
	ctx.r11.s64 = 2106327040;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18765
	ctx.r4.u64 = ctx.r11.u64 | 18765;
	// lis r11,11860
	ctx.r11.s64 = 777256960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20471
	ctx.r11.u64 = ctx.r11.u64 | 20471;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA2A0;
	sub_8279BCE0(ctx, base);
	// lis r11,-14477
	ctx.r11.s64 = -948764672;
	// addi r3,r30,-23544
	ctx.r3.s64 = ctx.r30.s64 + -23544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42522
	ctx.r4.u64 = ctx.r11.u64 | 42522;
	// lis r11,5418
	ctx.r11.s64 = 355074048;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23433
	ctx.r11.u64 = ctx.r11.u64 | 23433;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA2D0;
	sub_8279BCE0(ctx, base);
	// lis r11,-6050
	ctx.r11.s64 = -396492800;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11271
	ctx.r4.u64 = ctx.r11.u64 | 11271;
	// lis r11,-27214
	ctx.r11.s64 = -1783496704;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3194
	ctx.r11.u64 = ctx.r11.u64 | 3194;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA300;
	sub_8279BCE0(ctx, base);
	// lis r11,18899
	ctx.r11.s64 = 1238564864;
	// addi r3,r30,-21968
	ctx.r3.s64 = ctx.r30.s64 + -21968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37631
	ctx.r4.u64 = ctx.r11.u64 | 37631;
	// lis r11,14408
	ctx.r11.s64 = 944242688;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1005
	ctx.r11.u64 = ctx.r11.u64 | 1005;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA330;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,26366
	ctx.r11.s64 = 1727922176;
	// ori r4,r11,6370
	ctx.r4.u64 = ctx.r11.u64 | 6370;
	// lis r11,-18224
	ctx.r11.s64 = -1194328064;
	// ori r11,r11,21534
	ctx.r11.u64 = ctx.r11.u64 | 21534;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA360;
	sub_8279BCE0(ctx, base);
	// lis r11,-31485
	ctx.r11.s64 = -2063400960;
	// addi r3,r30,-20392
	ctx.r3.s64 = ctx.r30.s64 + -20392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63007
	ctx.r4.u64 = ctx.r11.u64 | 63007;
	// lis r11,24406
	ctx.r11.s64 = 1599471616;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54659
	ctx.r11.u64 = ctx.r11.u64 | 54659;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA390;
	sub_8279BCE0(ctx, base);
	// lis r11,-21970
	ctx.r11.s64 = -1439825920;
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31746
	ctx.r4.u64 = ctx.r11.u64 | 31746;
	// lis r11,-8242
	ctx.r11.s64 = -540147712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33392
	ctx.r11.u64 = ctx.r11.u64 | 33392;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA3C0;
	sub_8279BCE0(ctx, base);
	// lis r11,4369
	ctx.r11.s64 = 286326784;
	// addi r3,r30,-18672
	ctx.r3.s64 = ctx.r30.s64 + -18672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,484
	ctx.r4.u64 = ctx.r11.u64 | 484;
	// lis r11,-25621
	ctx.r11.s64 = -1679097856;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26573
	ctx.r11.u64 = ctx.r11.u64 | 26573;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA3F0;
	sub_8279BCE0(ctx, base);
	// lis r11,15932
	ctx.r11.s64 = 1044119552;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35833
	ctx.r4.u64 = ctx.r11.u64 | 35833;
	// lis r11,7027
	ctx.r11.s64 = 460521472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12350
	ctx.r11.u64 = ctx.r11.u64 | 12350;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA420;
	sub_8279BCE0(ctx, base);
	// lis r11,19099
	ctx.r11.s64 = 1251672064;
	// addi r3,r30,-16776
	ctx.r3.s64 = ctx.r30.s64 + -16776;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18307
	ctx.r4.u64 = ctx.r11.u64 | 18307;
	// lis r11,30475
	ctx.r11.s64 = 1997209600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17684
	ctx.r11.u64 = ctx.r11.u64 | 17684;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA450;
	sub_8279BCE0(ctx, base);
	// lis r11,26038
	ctx.r11.s64 = 1706426368;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52638
	ctx.r4.u64 = ctx.r11.u64 | 52638;
	// lis r11,-2157
	ctx.r11.s64 = -141361152;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4839
	ctx.r11.u64 = ctx.r11.u64 | 4839;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA480;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-11209
	ctx.r11.s64 = -734593024;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,58496
	ctx.r4.u64 = ctx.r11.u64 | 58496;
	// lis r11,-20195
	ctx.r11.s64 = -1323499520;
	// ori r11,r11,54010
	ctx.r11.u64 = ctx.r11.u64 | 54010;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA4B0;
	sub_8279BCE0(ctx, base);
	// lis r11,-1254
	ctx.r11.s64 = -82182144;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28317
	ctx.r4.u64 = ctx.r11.u64 | 28317;
	// lis r11,12677
	ctx.r11.s64 = 830799872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34057
	ctx.r11.u64 = ctx.r11.u64 | 34057;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA4E0;
	sub_8279BCE0(ctx, base);
	// lis r11,-10561
	ctx.r11.s64 = -692125696;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41805
	ctx.r4.u64 = ctx.r11.u64 | 41805;
	// lis r11,-32507
	ctx.r11.s64 = -2130378752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26048
	ctx.r11.u64 = ctx.r11.u64 | 26048;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA510;
	sub_8279BCE0(ctx, base);
	// lis r11,-1646
	ctx.r11.s64 = -107872256;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10576
	ctx.r4.u64 = ctx.r11.u64 | 10576;
	// lis r11,413
	ctx.r11.s64 = 27066368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12851
	ctx.r11.u64 = ctx.r11.u64 | 12851;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA540;
	sub_8279BCE0(ctx, base);
	// lis r11,17069
	ctx.r11.s64 = 1118633984;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21686
	ctx.r4.u64 = ctx.r11.u64 | 21686;
	// lis r11,17848
	ctx.r11.s64 = 1169686528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55182
	ctx.r11.u64 = ctx.r11.u64 | 55182;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA570;
	sub_8279BCE0(ctx, base);
	// lis r11,28032
	ctx.r11.s64 = 1837105152;
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57003
	ctx.r4.u64 = ctx.r11.u64 | 57003;
	// lis r11,-15072
	ctx.r11.s64 = -987758592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32893
	ctx.r11.u64 = ctx.r11.u64 | 32893;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA5A0;
	sub_8279BCE0(ctx, base);
	// lis r11,-10369
	ctx.r11.s64 = -679542784;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12796
	ctx.r4.u64 = ctx.r11.u64 | 12796;
	// lis r11,-418
	ctx.r11.s64 = -27394048;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37891
	ctx.r11.u64 = ctx.r11.u64 | 37891;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA5D0;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// lis r11,-1966
	ctx.r11.s64 = -128843776;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,48097
	ctx.r4.u64 = ctx.r11.u64 | 48097;
	// lis r11,32454
	ctx.r11.s64 = 2126905344;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,50160
	ctx.r11.u64 = ctx.r11.u64 | 50160;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA600;
	sub_8279BCE0(ctx, base);
	// lis r11,23007
	ctx.r11.s64 = 1507786752;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1305
	ctx.r4.u64 = ctx.r11.u64 | 1305;
	// lis r11,-11460
	ctx.r11.s64 = -751042560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52327
	ctx.r11.u64 = ctx.r11.u64 | 52327;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA630;
	sub_8279BCE0(ctx, base);
	// lis r11,30450
	ctx.r11.s64 = 1995571200;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36612
	ctx.r4.u64 = ctx.r11.u64 | 36612;
	// lis r11,21412
	ctx.r11.s64 = 1403256832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39828
	ctx.r11.u64 = ctx.r11.u64 | 39828;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA660;
	sub_8279BCE0(ctx, base);
	// lis r11,-27377
	ctx.r11.s64 = -1794179072;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25081
	ctx.r4.u64 = ctx.r11.u64 | 25081;
	// lis r11,-19422
	ctx.r11.s64 = -1272840192;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,6665
	ctx.r11.u64 = ctx.r11.u64 | 6665;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AA690;
	sub_8279BCE0(ctx, base);
	// lis r11,-17886
	ctx.r11.s64 = -1172176896;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60388
	ctx.r4.u64 = ctx.r11.u64 | 60388;
	// lis r11,13498
	ctx.r11.s64 = 884604928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19962
	ctx.r11.u64 = ctx.r11.u64 | 19962;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA6C0;
	sub_8279BCE0(ctx, base);
	// lis r11,285
	ctx.r11.s64 = 18677760;
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38402
	ctx.r4.u64 = ctx.r11.u64 | 38402;
	// lis r11,28831
	ctx.r11.s64 = 1889468416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43079
	ctx.r11.u64 = ctx.r11.u64 | 43079;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA6F0;
	sub_8279BCE0(ctx, base);
	// lis r11,11824
	ctx.r11.s64 = 774897664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// ori r4,r11,7199
	ctx.r4.u64 = ctx.r11.u64 | 7199;
	// lis r11,-4089
	ctx.r11.s64 = -267976704;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,65460
	ctx.r11.u64 = ctx.r11.u64 | 65460;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA720;
	sub_8279BCE0(ctx, base);
	// lis r11,23191
	ctx.r11.s64 = 1519845376;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53349
	ctx.r4.u64 = ctx.r11.u64 | 53349;
	// lis r11,-25473
	ctx.r11.s64 = -1669398528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35486
	ctx.r11.u64 = ctx.r11.u64 | 35486;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA750;
	sub_8279BCE0(ctx, base);
	// lis r11,30138
	ctx.r11.s64 = 1975123968;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23160
	ctx.r4.u64 = ctx.r11.u64 | 23160;
	// lis r11,7399
	ctx.r11.s64 = 484900864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56685
	ctx.r11.u64 = ctx.r11.u64 | 56685;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA780;
	sub_8279BCE0(ctx, base);
	// lis r11,-17015
	ctx.r11.s64 = -1115095040;
	// addi r3,r30,-27752
	ctx.r3.s64 = ctx.r30.s64 + -27752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34434
	ctx.r4.u64 = ctx.r11.u64 | 34434;
	// lis r11,-29562
	ctx.r11.s64 = -1937375232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47273
	ctx.r11.u64 = ctx.r11.u64 | 47273;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA7B0;
	sub_8279BCE0(ctx, base);
	// lis r11,-27996
	ctx.r11.s64 = -1834745856;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3231
	ctx.r4.u64 = ctx.r11.u64 | 3231;
	// lis r11,3102
	ctx.r11.s64 = 203292672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61274
	ctx.r11.u64 = ctx.r11.u64 | 61274;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA7E0;
	sub_8279BCE0(ctx, base);
	// lis r11,29017
	ctx.r11.s64 = 1901658112;
	// addi r3,r30,-26440
	ctx.r3.s64 = ctx.r30.s64 + -26440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57954
	ctx.r4.u64 = ctx.r11.u64 | 57954;
	// lis r11,-5224
	ctx.r11.s64 = -342360064;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28359
	ctx.r11.u64 = ctx.r11.u64 | 28359;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA810;
	sub_8279BCE0(ctx, base);
	// lis r11,24180
	ctx.r11.s64 = 1584660480;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26751
	ctx.r4.u64 = ctx.r11.u64 | 26751;
	// lis r11,27392
	ctx.r11.s64 = 1795162112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14644
	ctx.r11.u64 = ctx.r11.u64 | 14644;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA840;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-24984
	ctx.r3.s64 = ctx.r30.s64 + -24984;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-6837
	ctx.r11.s64 = -448069632;
	// ori r4,r11,5529
	ctx.r4.u64 = ctx.r11.u64 | 5529;
	// lis r11,12069
	ctx.r11.s64 = 790953984;
	// ori r11,r11,56457
	ctx.r11.u64 = ctx.r11.u64 | 56457;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA870;
	sub_8279BCE0(ctx, base);
	// lis r11,-13722
	ctx.r11.s64 = -899284992;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40836
	ctx.r4.u64 = ctx.r11.u64 | 40836;
	// lis r11,-20547
	ctx.r11.s64 = -1346568192;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35706
	ctx.r11.u64 = ctx.r11.u64 | 35706;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA8A0;
	sub_8279BCE0(ctx, base);
	// lis r11,-16703
	ctx.r11.s64 = -1094647808;
	// addi r3,r30,-23544
	ctx.r3.s64 = ctx.r30.s64 + -23544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21502
	ctx.r4.u64 = ctx.r11.u64 | 21502;
	// lis r11,-15419
	ctx.r11.s64 = -1010499584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,65104
	ctx.r11.u64 = ctx.r11.u64 | 65104;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA8D0;
	sub_8279BCE0(ctx, base);
	// lis r11,-28180
	ctx.r11.s64 = -1846804480;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55779
	ctx.r4.u64 = ctx.r11.u64 | 55779;
	// lis r11,17245
	ctx.r11.s64 = 1130168320;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43427
	ctx.r11.u64 = ctx.r11.u64 | 43427;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA900;
	sub_8279BCE0(ctx, base);
	// lis r11,-455
	ctx.r11.s64 = -29818880;
	// addi r3,r30,-21968
	ctx.r3.s64 = ctx.r30.s64 + -21968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17462
	ctx.r4.u64 = ctx.r11.u64 | 17462;
	// lis r11,-18015
	ctx.r11.s64 = -1180631040;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51040
	ctx.r11.u64 = ctx.r11.u64 | 51040;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA930;
	sub_8279BCE0(ctx, base);
	// lis r11,-12012
	ctx.r11.s64 = -787218432;
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52779
	ctx.r4.u64 = ctx.r11.u64 | 52779;
	// lis r11,14649
	ctx.r11.s64 = 960036864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37011
	ctx.r11.u64 = ctx.r11.u64 | 37011;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA960;
	sub_8279BCE0(ctx, base);
	// lis r11,-847
	ctx.r11.s64 = -55508992;
	// addi r3,r30,-20392
	ctx.r3.s64 = ctx.r30.s64 + -20392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1019
	ctx.r4.u64 = ctx.r11.u64 | 1019;
	// lis r11,-30279
	ctx.r11.s64 = -1984364544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28762
	ctx.r11.u64 = ctx.r11.u64 | 28762;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA990;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lis r11,-11364
	ctx.r11.s64 = -744751104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,35302
	ctx.r4.u64 = ctx.r11.u64 | 35302;
	// lis r11,2337
	ctx.r11.s64 = 153157632;
	// ori r11,r11,10153
	ctx.r11.u64 = ctx.r11.u64 | 10153;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA9C0;
	sub_8279BCE0(ctx, base);
	// lis r11,26787
	ctx.r11.s64 = 1755512832;
	// addi r3,r30,-18672
	ctx.r3.s64 = ctx.r30.s64 + -18672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62464
	ctx.r4.u64 = ctx.r11.u64 | 62464;
	// lis r11,19716
	ctx.r11.s64 = 1292107776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49684
	ctx.r11.u64 = ctx.r11.u64 | 49684;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AA9F0;
	sub_8279BCE0(ctx, base);
	// lis r11,18318
	ctx.r11.s64 = 1200488448;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32285
	ctx.r4.u64 = ctx.r11.u64 | 32285;
	// lis r11,-12900
	ctx.r11.s64 = -845414400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38375
	ctx.r11.u64 = ctx.r11.u64 | 38375;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAA20;
	sub_8279BCE0(ctx, base);
	// lis r11,30433
	ctx.r11.s64 = 1994457088;
	// addi r3,r30,-16776
	ctx.r3.s64 = ctx.r30.s64 + -16776;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44163
	ctx.r4.u64 = ctx.r11.u64 | 44163;
	// lis r11,27878
	ctx.r11.s64 = 1827012608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49153
	ctx.r11.u64 = ctx.r11.u64 | 49153;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAA50;
	sub_8279BCE0(ctx, base);
	// lis r11,22988
	ctx.r11.s64 = 1506541568;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9886
	ctx.r4.u64 = ctx.r11.u64 | 9886;
	// lis r11,-4994
	ctx.r11.s64 = -327286784;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38898
	ctx.r11.u64 = ctx.r11.u64 | 38898;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAA80;
	sub_8279BCE0(ctx, base);
	// lis r11,14227
	ctx.r11.s64 = 932380672;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43255
	ctx.r4.u64 = ctx.r11.u64 | 43255;
	// lis r11,25863
	ctx.r11.s64 = 1694957568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15372
	ctx.r11.u64 = ctx.r11.u64 | 15372;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAAB0;
	sub_8279BCE0(ctx, base);
	// lis r11,6334
	ctx.r11.s64 = 415105024;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8938
	ctx.r4.u64 = ctx.r11.u64 | 8938;
	// lis r11,-6753
	ctx.r11.s64 = -442564608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27647
	ctx.r11.u64 = ctx.r11.u64 | 27647;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAAE0;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// lis r11,27673
	ctx.r11.s64 = 1813577728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,61072
	ctx.r4.u64 = ctx.r11.u64 | 61072;
	// lis r11,-30233
	ctx.r11.s64 = -1981349888;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,7893
	ctx.r11.u64 = ctx.r11.u64 | 7893;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAB10;
	sub_8279BCE0(ctx, base);
	// lis r11,17204
	ctx.r11.s64 = 1127481344;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25741
	ctx.r4.u64 = ctx.r11.u64 | 25741;
	// lis r11,2431
	ctx.r11.s64 = 159318016;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18726
	ctx.r11.u64 = ctx.r11.u64 | 18726;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAB40;
	sub_8279BCE0(ctx, base);
	// lis r11,-2037
	ctx.r11.s64 = -133496832;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6507
	ctx.r4.u64 = ctx.r11.u64 | 6507;
	// lis r11,19802
	ctx.r11.s64 = 1297743872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44187
	ctx.r11.u64 = ctx.r11.u64 | 44187;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAB70;
	sub_8279BCE0(ctx, base);
	// lis r11,-10458
	ctx.r11.s64 = -685375488;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37750
	ctx.r4.u64 = ctx.r11.u64 | 37750;
	// lis r11,-12862
	ctx.r11.s64 = -842924032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64360
	ctx.r11.u64 = ctx.r11.u64 | 64360;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AABA0;
	sub_8279BCE0(ctx, base);
	// lis r11,-31009
	ctx.r11.s64 = -2032205824;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32478
	ctx.r4.u64 = ctx.r11.u64 | 32478;
	// lis r11,-27723
	ctx.r11.s64 = -1816854528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20787
	ctx.r11.u64 = ctx.r11.u64 | 20787;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AABD0;
	sub_8279BCE0(ctx, base);
	// lis r11,-22030
	ctx.r11.s64 = -1443758080;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62659
	ctx.r4.u64 = ctx.r11.u64 | 62659;
	// lis r11,4909
	ctx.r11.s64 = 321716224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1728
	ctx.r11.u64 = ctx.r11.u64 | 1728;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAC00;
	sub_8279BCE0(ctx, base);
	// lis r11,-17797
	ctx.r11.s64 = -1166344192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// ori r4,r11,18798
	ctx.r4.u64 = ctx.r11.u64 | 18798;
	// lis r11,1830
	ctx.r11.s64 = 119930880;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,8849
	ctx.r11.u64 = ctx.r11.u64 | 8849;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAC30;
	sub_8279BCE0(ctx, base);
	// lis r11,-27306
	ctx.r11.s64 = -1789526016;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50035
	ctx.r4.u64 = ctx.r11.u64 | 50035;
	// lis r11,-30786
	ctx.r11.s64 = -2017591296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30050
	ctx.r11.u64 = ctx.r11.u64 | 30050;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAC60;
	sub_8279BCE0(ctx, base);
	// lis r11,12201
	ctx.r11.s64 = 799604736;
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11300
	ctx.r4.u64 = ctx.r11.u64 | 11300;
	// lis r11,-17216
	ctx.r11.s64 = -1128267776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24860
	ctx.r11.u64 = ctx.r11.u64 | 24860;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAC90;
	sub_8279BCE0(ctx, base);
	// lis r11,132
	ctx.r11.s64 = 8650752;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42553
	ctx.r4.u64 = ctx.r11.u64 | 42553;
	// lis r11,15448
	ctx.r11.s64 = 1012400128;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14063
	ctx.r11.u64 = ctx.r11.u64 | 14063;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AACC0;
	sub_8279BCE0(ctx, base);
	// lis r11,-17477
	ctx.r11.s64 = -1145372672;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56287
	ctx.r4.u64 = ctx.r11.u64 | 56287;
	// lis r11,30845
	ctx.r11.s64 = 2021457920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54098
	ctx.r11.u64 = ctx.r11.u64 | 54098;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AACF0;
	sub_8279BCE0(ctx, base);
	// lis r11,-27498
	ctx.r11.s64 = -1802108928;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20930
	ctx.r4.u64 = ctx.r11.u64 | 20930;
	// lis r11,-1819
	ctx.r11.s64 = -119209984;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33953
	ctx.r11.u64 = ctx.r11.u64 | 33953;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAD20;
	sub_8279BCE0(ctx, base);
	// lis r11,2871
	ctx.r11.s64 = 188153856;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40775
	ctx.r4.u64 = ctx.r11.u64 | 40775;
	// lis r11,-3692
	ctx.r11.s64 = -241958912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20398
	ctx.r11.u64 = ctx.r11.u64 | 20398;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAD50;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,9242
	ctx.r11.s64 = 605683712;
	// ori r4,r11,5466
	ctx.r4.u64 = ctx.r11.u64 | 5466;
	// lis r11,28940
	ctx.r11.s64 = 1896611840;
	// ori r11,r11,6237
	ctx.r11.u64 = ctx.r11.u64 | 6237;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAD80;
	sub_8279BCE0(ctx, base);
	// lis r11,24109
	ctx.r11.s64 = 1580007424;
	// addi r3,r30,-2152
	ctx.r3.s64 = ctx.r30.s64 + -2152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51957
	ctx.r4.u64 = ctx.r11.u64 | 51957;
	// lis r11,22684
	ctx.r11.s64 = 1486618624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22111
	ctx.r11.u64 = ctx.r11.u64 | 22111;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AADB0;
	sub_8279BCE0(ctx, base);
	// lis r11,28928
	ctx.r11.s64 = 1895825408;
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16616
	ctx.r4.u64 = ctx.r11.u64 | 16616;
	// lis r11,-10236
	ctx.r11.s64 = -670826496;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,428
	ctx.r11.u64 = ctx.r11.u64 | 428;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AADE0;
	sub_8279BCE0(ctx, base);
	// lis r11,-13313
	ctx.r11.s64 = -872480768;
	// addi r3,r30,-696
	ctx.r3.s64 = ctx.r30.s64 + -696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44991
	ctx.r4.u64 = ctx.r11.u64 | 44991;
	// lis r11,-7302
	ctx.r11.s64 = -478543872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5586
	ctx.r11.u64 = ctx.r11.u64 | 5586;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAE10;
	sub_8279BCE0(ctx, base);
	// lis r11,-6958
	ctx.r11.s64 = -455999488;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9634
	ctx.r4.u64 = ctx.r11.u64 | 9634;
	// lis r11,25570
	ctx.r11.s64 = 1675755520;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,16929
	ctx.r11.u64 = ctx.r11.u64 | 16929;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AAE40;
	sub_8279BCE0(ctx, base);
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r28,r11,296
	ctx.r28.s64 = ctx.r11.s64 + 296;
	// lis r11,24557
	ctx.r11.s64 = 1609367552;
	// addi r3,r28,-32392
	ctx.r3.s64 = ctx.r28.s64 + -32392;
	// ori r4,r11,22596
	ctx.r4.u64 = ctx.r11.u64 | 22596;
	// lis r11,10183
	ctx.r11.s64 = 667353088;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,42908
	ctx.r11.u64 = ctx.r11.u64 | 42908;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAE78;
	sub_8279BCE0(ctx, base);
	// lis r11,28864
	ctx.r11.s64 = 1891631104;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53849
	ctx.r4.u64 = ctx.r11.u64 | 53849;
	// lis r11,-22689
	ctx.r11.s64 = -1486946304;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61551
	ctx.r11.u64 = ctx.r11.u64 | 61551;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAEA8;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-30816
	ctx.r3.s64 = ctx.r28.s64 + -30816;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-4255
	ctx.r11.s64 = -278855680;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,7388
	ctx.r4.u64 = ctx.r11.u64 | 7388;
	// lis r11,-20946
	ctx.r11.s64 = -1372717056;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,15200
	ctx.r11.u64 = ctx.r11.u64 | 15200;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAED8;
	sub_8279BCE0(ctx, base);
	// lis r11,-16308
	ctx.r11.s64 = -1068761088;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38593
	ctx.r4.u64 = ctx.r11.u64 | 38593;
	// lis r11,11958
	ctx.r11.s64 = 783679488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27795
	ctx.r11.u64 = ctx.r11.u64 | 27795;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAF08;
	sub_8279BCE0(ctx, base);
	// lis r11,7581
	ctx.r11.s64 = 496828416;
	// addi r3,r28,-29136
	ctx.r3.s64 = ctx.r28.s64 + -29136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2113
	ctx.r4.u64 = ctx.r11.u64 | 2113;
	// lis r11,28091
	ctx.r11.s64 = 1840971776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10646
	ctx.r11.u64 = ctx.r11.u64 | 10646;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAF38;
	sub_8279BCE0(ctx, base);
	// lis r11,12976
	ctx.r11.s64 = 850395136;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33372
	ctx.r4.u64 = ctx.r11.u64 | 33372;
	// lis r11,-4829
	ctx.r11.s64 = -316473344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32357
	ctx.r11.u64 = ctx.r11.u64 | 32357;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAF68;
	sub_8279BCE0(ctx, base);
	// lis r11,17943
	ctx.r11.s64 = 1175912448;
	// addi r3,r28,-27416
	ctx.r3.s64 = ctx.r28.s64 + -27416;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20006
	ctx.r4.u64 = ctx.r11.u64 | 20006;
	// lis r11,-32421
	ctx.r11.s64 = -2124742656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2895
	ctx.r11.u64 = ctx.r11.u64 | 2895;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAF98;
	sub_8279BCE0(ctx, base);
	// lis r11,26938
	ctx.r11.s64 = 1765408768;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50235
	ctx.r4.u64 = ctx.r11.u64 | 50235;
	// lis r11,451
	ctx.r11.s64 = 29556736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23740
	ctx.r11.u64 = ctx.r11.u64 | 23740;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAFC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-11771
	ctx.r11.s64 = -771424256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-25592
	ctx.r3.s64 = ctx.r28.s64 + -25592;
	// ori r4,r11,47581
	ctx.r4.u64 = ctx.r11.u64 | 47581;
	// lis r11,17894
	ctx.r11.s64 = 1172701184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47361
	ctx.r11.u64 = ctx.r11.u64 | 47361;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AAFF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-728
	ctx.r11.s64 = -47710208;
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13248
	ctx.r4.u64 = ctx.r11.u64 | 13248;
	// lis r11,-14978
	ctx.r11.s64 = -981598208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61170
	ctx.r11.u64 = ctx.r11.u64 | 61170;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB028;
	sub_8279BCE0(ctx, base);
	// lis r11,10049
	ctx.r11.s64 = 658571264;
	// addi r3,r28,-23544
	ctx.r3.s64 = ctx.r28.s64 + -23544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58273
	ctx.r4.u64 = ctx.r11.u64 | 58273;
	// lis r11,269
	ctx.r11.s64 = 17629184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1329
	ctx.r11.u64 = ctx.r11.u64 | 1329;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB058;
	sub_8279BCE0(ctx, base);
	// lis r11,2156
	ctx.r11.s64 = 141295616;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27068
	ctx.r4.u64 = ctx.r11.u64 | 27068;
	// lis r11,-32363
	ctx.r11.s64 = -2120941568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21186
	ctx.r11.u64 = ctx.r11.u64 | 21186;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB088;
	sub_8279BCE0(ctx, base);
	// lis r11,20001
	ctx.r11.s64 = 1310785536;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23827
	ctx.r4.u64 = ctx.r11.u64 | 23827;
	// lis r11,-19480
	ctx.r11.s64 = -1276641280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39381
	ctx.r11.u64 = ctx.r11.u64 | 39381;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB0B8;
	sub_8279BCE0(ctx, base);
	// lis r11,24844
	ctx.r11.s64 = 1628176384;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55054
	ctx.r4.u64 = ctx.r11.u64 | 55054;
	// lis r11,13168
	ctx.r11.s64 = 862978048;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52774
	ctx.r11.u64 = ctx.r11.u64 | 52774;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB0E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-9229
	ctx.r11.s64 = -604831744;
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14425
	ctx.r4.u64 = ctx.r11.u64 | 14425;
	// lis r11,2062
	ctx.r11.s64 = 135135232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55896
	ctx.r11.u64 = ctx.r11.u64 | 55896;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB118;
	sub_8279BCE0(ctx, base);
	// lis r11,-2850
	ctx.r11.s64 = -186777600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,45636
	ctx.r4.u64 = ctx.r11.u64 | 45636;
	// lis r11,-30570
	ctx.r11.s64 = -2003435520;
	// ori r11,r11,36267
	ctx.r11.u64 = ctx.r11.u64 | 36267;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB148;
	sub_8279BCE0(ctx, base);
	// lis r11,20449
	ctx.r11.s64 = 1340145664;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53154
	ctx.r4.u64 = ctx.r11.u64 | 53154;
	// lis r11,-13133
	ctx.r11.s64 = -860684288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26646
	ctx.r11.u64 = ctx.r11.u64 | 26646;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB178;
	sub_8279BCE0(ctx, base);
	// lis r11,24780
	ctx.r11.s64 = 1623982080;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17855
	ctx.r4.u64 = ctx.r11.u64 | 17855;
	// lis r11,19499
	ctx.r11.s64 = 1277886464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16357
	ctx.r11.u64 = ctx.r11.u64 | 16357;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB1A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-147
	ctx.r11.s64 = -9633792;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35642
	ctx.r4.u64 = ctx.r11.u64 | 35642;
	// lis r11,17754
	ctx.r11.s64 = 1163526144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62698
	ctx.r11.u64 = ctx.r11.u64 | 62698;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB1D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-12224
	ctx.r11.s64 = -801112064;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,295
	ctx.r4.u64 = ctx.r11.u64 | 295;
	// lis r11,-14910
	ctx.r11.s64 = -977141760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41753
	ctx.r11.u64 = ctx.r11.u64 | 41753;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB208;
	sub_8279BCE0(ctx, base);
	// lis r11,3473
	ctx.r11.s64 = 227606528;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40871
	ctx.r4.u64 = ctx.r11.u64 | 40871;
	// lis r11,-31025
	ctx.r11.s64 = -2033254400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58908
	ctx.r11.u64 = ctx.r11.u64 | 58908;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB238;
	sub_8279BCE0(ctx, base);
	// lis r11,8892
	ctx.r11.s64 = 582746112;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5562
	ctx.r4.u64 = ctx.r11.u64 | 5562;
	// lis r11,1623
	ctx.r11.s64 = 106364928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45551
	ctx.r11.u64 = ctx.r11.u64 | 45551;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB268;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,22043
	ctx.r11.s64 = 1444610048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55744
	ctx.r4.u64 = ctx.r11.u64 | 55744;
	// lis r11,27183
	ctx.r11.s64 = 1781465088;
	// ori r11,r11,50373
	ctx.r11.u64 = ctx.r11.u64 | 50373;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB298;
	sub_8279BCE0(ctx, base);
	// lis r11,31030
	ctx.r11.s64 = 2033582080;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21469
	ctx.r4.u64 = ctx.r11.u64 | 21469;
	// lis r11,-5449
	ctx.r11.s64 = -357105664;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37686
	ctx.r11.u64 = ctx.r11.u64 | 37686;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB2C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-15863
	ctx.r11.s64 = -1039597568;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11835
	ctx.r4.u64 = ctx.r11.u64 | 11835;
	// lis r11,-20846
	ctx.r11.s64 = -1366163456;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30347
	ctx.r11.u64 = ctx.r11.u64 | 30347;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB2F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-4828
	ctx.r11.s64 = -316407808;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42022
	ctx.r4.u64 = ctx.r11.u64 | 42022;
	// lis r11,11786
	ctx.r11.s64 = 772407296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8568
	ctx.r11.u64 = ctx.r11.u64 | 8568;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB328;
	sub_8279BCE0(ctx, base);
	// lis r11,14157
	ctx.r11.s64 = 927793152;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29767
	ctx.r4.u64 = ctx.r11.u64 | 29767;
	// lis r11,-5511
	ctx.r11.s64 = -361168896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51899
	ctx.r11.u64 = ctx.r11.u64 | 51899;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB358;
	sub_8279BCE0(ctx, base);
	// lis r11,6240
	ctx.r11.s64 = 408944640;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65114
	ctx.r4.u64 = ctx.r11.u64 | 65114;
	// lis r11,27361
	ctx.r11.s64 = 1793130496;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40264
	ctx.r11.u64 = ctx.r11.u64 | 40264;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB388;
	sub_8279BCE0(ctx, base);
	// lis r11,-5689
	ctx.r11.s64 = -372834304;
	// addi r3,r30,-2152
	ctx.r3.s64 = ctx.r30.s64 + -2152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7228
	ctx.r4.u64 = ctx.r11.u64 | 7228;
	// lis r11,-9867
	ctx.r11.s64 = -646643712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37586
	ctx.r11.u64 = ctx.r11.u64 | 37586;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB3B8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-14614
	ctx.r11.s64 = -957743104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,38433
	ctx.r4.u64 = ctx.r11.u64 | 38433;
	// lis r11,23021
	ctx.r11.s64 = 1508704256;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,50465
	ctx.r11.u64 = ctx.r11.u64 | 50465;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB3E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19891
	ctx.r11.s64 = -1303576576;
	// addi r3,r30,-696
	ctx.r3.s64 = ctx.r30.s64 + -696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23131
	ctx.r4.u64 = ctx.r11.u64 | 23131;
	// lis r11,13717
	ctx.r11.s64 = 898957312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45067
	ctx.r11.u64 = ctx.r11.u64 | 45067;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB418;
	sub_8279BCE0(ctx, base);
	// lis r11,-25248
	ctx.r11.s64 = -1654652928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53318
	ctx.r4.u64 = ctx.r11.u64 | 53318;
	// lis r11,-19187
	ctx.r11.s64 = -1257439232;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,59384
	ctx.r11.u64 = ctx.r11.u64 | 59384;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AB448;
	sub_8279BCE0(ctx, base);
	// lis r11,9823
	ctx.r11.s64 = 643760128;
	// addi r3,r28,-32392
	ctx.r3.s64 = ctx.r28.s64 + -32392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44448
	ctx.r4.u64 = ctx.r11.u64 | 44448;
	// lis r11,-3800
	ctx.r11.s64 = -249036800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,581
	ctx.r11.u64 = ctx.r11.u64 | 581;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB478;
	sub_8279BCE0(ctx, base);
	// lis r11,2418
	ctx.r11.s64 = 158466048;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10173
	ctx.r4.u64 = ctx.r11.u64 | 10173;
	// lis r11,29104
	ctx.r11.s64 = 1907359744;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21942
	ctx.r11.u64 = ctx.r11.u64 | 21942;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB4A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-11493
	ctx.r11.s64 = -753205248;
	// addi r3,r28,-30816
	ctx.r3.s64 = ctx.r28.s64 + -30816;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63452
	ctx.r4.u64 = ctx.r11.u64 | 63452;
	// lis r11,-19005
	ctx.r11.s64 = -1245511680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48757
	ctx.r11.u64 = ctx.r11.u64 | 48757;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB4D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-970
	ctx.r11.s64 = -63569920;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// ori r4,r11,32193
	ctx.r4.u64 = ctx.r11.u64 | 32193;
	// lis r11,13659
	ctx.r11.s64 = 895156224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59782
	ctx.r11.u64 = ctx.r11.u64 | 59782;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB508;
	sub_8279BCE0(ctx, base);
	// lis r11,25647
	ctx.r11.s64 = 1680801792;
	// addi r3,r28,-29136
	ctx.r3.s64 = ctx.r28.s64 + -29136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64933
	ctx.r4.u64 = ctx.r11.u64 | 64933;
	// lis r11,-17580
	ctx.r11.s64 = -1152122880;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35919
	ctx.r11.u64 = ctx.r11.u64 | 35919;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB538;
	sub_8279BCE0(ctx, base);
	// lis r11,19202
	ctx.r11.s64 = 1258422272;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30648
	ctx.r4.u64 = ctx.r11.u64 | 30648;
	// lis r11,15308
	ctx.r11.s64 = 1003225088;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56252
	ctx.r11.u64 = ctx.r11.u64 | 56252;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB568;
	sub_8279BCE0(ctx, base);
	// lis r11,31341
	ctx.r11.s64 = 2053963776;
	// addi r3,r28,-27416
	ctx.r3.s64 = ctx.r28.s64 + -27416;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42278
	ctx.r4.u64 = ctx.r11.u64 | 42278;
	// lis r11,-25930
	ctx.r11.s64 = -1699348480;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36442
	ctx.r11.u64 = ctx.r11.u64 | 36442;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB598;
	sub_8279BCE0(ctx, base);
	// lis r11,21824
	ctx.r11.s64 = 1430257664;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12091
	ctx.r4.u64 = ctx.r11.u64 | 12091;
	// lis r11,6702
	ctx.r11.s64 = 439222272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55721
	ctx.r11.u64 = ctx.r11.u64 | 55721;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB5C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-4481
	ctx.r11.s64 = -293666816;
	// addi r3,r28,-25592
	ctx.r3.s64 = ctx.r28.s64 + -25592;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21213
	ctx.r4.u64 = ctx.r11.u64 | 21213;
	// lis r11,24075
	ctx.r11.s64 = 1577779200;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15380
	ctx.r11.u64 = ctx.r11.u64 | 15380;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB5F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-16046
	ctx.r11.s64 = -1051590656;
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55488
	ctx.r4.u64 = ctx.r11.u64 | 55488;
	// lis r11,-8557
	ctx.r11.s64 = -560791552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27623
	ctx.r11.u64 = ctx.r11.u64 | 27623;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB628;
	sub_8279BCE0(ctx, base);
	// lis r11,24307
	ctx.r11.s64 = 1592983552;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-23544
	ctx.r3.s64 = ctx.r28.s64 + -23544;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,5701
	ctx.r4.u64 = ctx.r11.u64 | 5701;
	// lis r11,-10270
	ctx.r11.s64 = -673054720;
	// ori r11,r11,41192
	ctx.r11.u64 = ctx.r11.u64 | 41192;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB658;
	sub_8279BCE0(ctx, base);
	// lis r11,29150
	ctx.r11.s64 = 1910374400;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40024
	ctx.r4.u64 = ctx.r11.u64 | 40024;
	// lis r11,22394
	ctx.r11.s64 = 1467613184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63259
	ctx.r11.u64 = ctx.r11.u64 | 63259;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB688;
	sub_8279BCE0(ctx, base);
	// lis r11,4641
	ctx.r11.s64 = 304152576;
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36614
	ctx.r4.u64 = ctx.r11.u64 | 36614;
	// lis r11,5237
	ctx.r11.s64 = 343212032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61493
	ctx.r11.u64 = ctx.r11.u64 | 61493;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB6B8;
	sub_8279BCE0(ctx, base);
	// lis r11,15628
	ctx.r11.s64 = 1024196608;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1307
	ctx.r4.u64 = ctx.r11.u64 | 1307;
	// lis r11,-27411
	ctx.r11.s64 = -1796407296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42950
	ctx.r11.u64 = ctx.r11.u64 | 42950;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB6E8;
	sub_8279BCE0(ctx, base);
	// lis r11,21857
	ctx.r11.s64 = 1432420352;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54831
	ctx.r4.u64 = ctx.r11.u64 | 54831;
	// lis r11,-5777
	ctx.r11.s64 = -378601472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26563
	ctx.r11.u64 = ctx.r11.u64 | 26563;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB718;
	sub_8279BCE0(ctx, base);
	// lis r11,31308
	ctx.r11.s64 = 2051801088;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23602
	ctx.r4.u64 = ctx.r11.u64 | 23602;
	// lis r11,27127
	ctx.r11.s64 = 1777795072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12336
	ctx.r11.u64 = ctx.r11.u64 | 12336;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB748;
	sub_8279BCE0(ctx, base);
	// lis r11,-16013
	ctx.r11.s64 = -1049427968;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8660
	ctx.r4.u64 = ctx.r11.u64 | 8660;
	// lis r11,11730
	ctx.r11.s64 = 768737280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54669
	ctx.r11.u64 = ctx.r11.u64 | 54669;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB778;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-4514
	ctx.r11.s64 = -295829504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43977
	ctx.r4.u64 = ctx.r11.u64 | 43977;
	// lis r11,-21174
	ctx.r11.s64 = -1387659264;
	// ori r11,r11,33406
	ctx.r11.u64 = ctx.r11.u64 | 33406;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB7A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25863
	ctx.r11.s64 = -1694957568;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26547
	ctx.r4.u64 = ctx.r11.u64 | 26547;
	// lis r11,-16078
	ctx.r11.s64 = -1053687808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63316
	ctx.r11.u64 = ctx.r11.u64 | 63316;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB7D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18988
	ctx.r11.s64 = -1244397568;
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60846
	ctx.r4.u64 = ctx.r11.u64 | 60846;
	// lis r11,16810
	ctx.r11.s64 = 1101660160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41127
	ctx.r11.u64 = ctx.r11.u64 | 41127;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB808;
	sub_8279BCE0(ctx, base);
	// lis r11,-9727
	ctx.r11.s64 = -637468672;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28795
	ctx.r4.u64 = ctx.r11.u64 | 28795;
	// lis r11,-17578
	ctx.r11.s64 = -1151991808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52836
	ctx.r11.u64 = ctx.r11.u64 | 52836;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB838;
	sub_8279BCE0(ctx, base);
	// lis r11,-2772
	ctx.r11.s64 = -181665792;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64102
	ctx.r4.u64 = ctx.r11.u64 | 64102;
	// lis r11,15310
	ctx.r11.s64 = 1003356160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39319
	ctx.r11.u64 = ctx.r11.u64 | 39319;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB868;
	sub_8279BCE0(ctx, base);
	// lis r11,-10103
	ctx.r11.s64 = -662110208;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14262
	ctx.r4.u64 = ctx.r11.u64 | 14262;
	// lis r11,-29874
	ctx.r11.s64 = -1957822464;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,31070
	ctx.r11.u64 = ctx.r11.u64 | 31070;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AB898;
	sub_8279BCE0(ctx, base);
	// lis r11,-2140
	ctx.r11.s64 = -140247040;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48555
	ctx.r4.u64 = ctx.r11.u64 | 48555;
	// lis r11,3030
	ctx.r11.s64 = 198574080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11949
	ctx.r11.u64 = ctx.r11.u64 | 11949;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB8C8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,19611
	ctx.r11.s64 = 1285226496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r4,r11,49229
	ctx.r4.u64 = ctx.r11.u64 | 49229;
	// lis r11,20467
	ctx.r11.s64 = 1341325312;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,51984
	ctx.r11.u64 = ctx.r11.u64 | 51984;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB8F8;
	sub_8279BCE0(ctx, base);
	// lis r11,25526
	ctx.r11.s64 = 1672871936;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19024
	ctx.r4.u64 = ctx.r11.u64 | 19024;
	// lis r11,-12437
	ctx.r11.s64 = -815071232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40163
	ctx.r11.u64 = ctx.r11.u64 | 40163;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB928;
	sub_8279BCE0(ctx, base);
	// lis r11,-9911
	ctx.r11.s64 = -649527296;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42247
	ctx.r4.u64 = ctx.r11.u64 | 42247;
	// lis r11,-3051
	ctx.r11.s64 = -199950336;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34973
	ctx.r11.u64 = ctx.r11.u64 | 34973;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB958;
	sub_8279BCE0(ctx, base);
	// lis r11,-2460
	ctx.r11.s64 = -161218560;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12058
	ctx.r4.u64 = ctx.r11.u64 | 12058;
	// lis r11,29837
	ctx.r11.s64 = 1955397632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57198
	ctx.r11.u64 = ctx.r11.u64 | 57198;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB988;
	sub_8279BCE0(ctx, base);
	// lis r11,15959
	ctx.r11.s64 = 1045889024;
	// addi r3,r28,-21392
	ctx.r3.s64 = ctx.r28.s64 + -21392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62432
	ctx.r4.u64 = ctx.r11.u64 | 62432;
	// lis r11,-6932
	ctx.r11.s64 = -454295552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47786
	ctx.r11.u64 = ctx.r11.u64 | 47786;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB9B8;
	sub_8279BCE0(ctx, base);
	// lis r11,4474
	ctx.r11.s64 = 293208064;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31229
	ctx.r4.u64 = ctx.r11.u64 | 31229;
	// lis r11,25716
	ctx.r11.s64 = 1685323776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60761
	ctx.r11.u64 = ctx.r11.u64 | 60761;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AB9E8;
	sub_8279BCE0(ctx, base);
	// lis r11,15583
	ctx.r11.s64 = 1021247488;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-20912
	ctx.r3.s64 = ctx.r28.s64 + -20912;
	// ori r4,r11,46125
	ctx.r4.u64 = ctx.r11.u64 | 46125;
	// lis r11,-11020
	ctx.r11.s64 = -722206720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3472
	ctx.r11.u64 = ctx.r11.u64 | 3472;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABA18;
	sub_8279BCE0(ctx, base);
	// lis r11,5106
	ctx.r11.s64 = 334626816;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15920
	ctx.r4.u64 = ctx.r11.u64 | 15920;
	// lis r11,21612
	ctx.r11.s64 = 1416364032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23139
	ctx.r11.u64 = ctx.r11.u64 | 23139;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABA48;
	sub_8279BCE0(ctx, base);
	// lis r11,-22323
	ctx.r11.s64 = -1462960128;
	// addi r3,r28,-20304
	ctx.r3.s64 = ctx.r28.s64 + -20304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17366
	ctx.r4.u64 = ctx.r11.u64 | 17366;
	// lis r11,4169
	ctx.r11.s64 = 273219584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49118
	ctx.r11.u64 = ctx.r11.u64 | 49118;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABA78;
	sub_8279BCE0(ctx, base);
	// lis r11,-30752
	ctx.r11.s64 = -2015363072;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51659
	ctx.r4.u64 = ctx.r11.u64 | 51659;
	// lis r11,-28463
	ctx.r11.s64 = -1865351168;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59437
	ctx.r11.u64 = ctx.r11.u64 | 59437;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABAA8;
	sub_8279BCE0(ctx, base);
	// lis r11,15647
	ctx.r11.s64 = 1025441792;
	// addi r3,r28,-19728
	ctx.r3.s64 = ctx.r28.s64 + -19728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9884
	ctx.r4.u64 = ctx.r11.u64 | 9884;
	// lis r11,-21585
	ctx.r11.s64 = -1414594560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64595
	ctx.r11.u64 = ctx.r11.u64 | 64595;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABAD8;
	sub_8279BCE0(ctx, base);
	// lis r11,4658
	ctx.r11.s64 = 305266688;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44161
	ctx.r4.u64 = ctx.r11.u64 | 44161;
	// lis r11,11063
	ctx.r11.s64 = 725024768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43936
	ctx.r11.u64 = ctx.r11.u64 | 43936;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABB08;
	sub_8279BCE0(ctx, base);
	// lis r11,-19521
	ctx.r11.s64 = -1279328256;
	// addi r3,r28,-19032
	ctx.r3.s64 = ctx.r28.s64 + -19032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4729
	ctx.r4.u64 = ctx.r11.u64 | 4729;
	// lis r11,-31027
	ctx.r11.s64 = -2033385472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42039
	ctx.r11.u64 = ctx.r11.u64 | 42039;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABB38;
	sub_8279BCE0(ctx, base);
	// lis r11,-25454
	ctx.r11.s64 = -1668153344;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,39012
	ctx.r4.u64 = ctx.r11.u64 | 39012;
	// lis r11,1621
	ctx.r11.s64 = 106233856;
	// ori r11,r11,62404
	ctx.r11.u64 = ctx.r11.u64 | 62404;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABB68;
	sub_8279BCE0(ctx, base);
	// lis r11,32623
	ctx.r11.s64 = 2137980928;
	// addi r3,r28,-18464
	ctx.r3.s64 = ctx.r28.s64 + -18464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30361
	ctx.r4.u64 = ctx.r11.u64 | 30361;
	// lis r11,-7725
	ctx.r11.s64 = -506265600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29273
	ctx.r11.u64 = ctx.r11.u64 | 29273;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABB98;
	sub_8279BCE0(ctx, base);
	// lis r11,20546
	ctx.r11.s64 = 1346502656;
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64644
	ctx.r4.u64 = ctx.r11.u64 | 64644;
	// lis r11,24907
	ctx.r11.s64 = 1632305152;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9642
	ctx.r11.u64 = ctx.r11.u64 | 9642;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABBC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5251
	ctx.r11.s64 = -344129536;
	// addi r3,r28,-17768
	ctx.r3.s64 = ctx.r28.s64 + -17768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33122
	ctx.r4.u64 = ctx.r11.u64 | 33122;
	// lis r11,9582
	ctx.r11.s64 = 627965952;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49175
	ctx.r11.u64 = ctx.r11.u64 | 49175;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABBF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-15280
	ctx.r11.s64 = -1001390080;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2943
	ctx.r4.u64 = ctx.r11.u64 | 2943;
	// lis r11,-23050
	ctx.r11.s64 = -1510604800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38884
	ctx.r11.u64 = ctx.r11.u64 | 38884;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABC28;
	sub_8279BCE0(ctx, base);
	// lis r11,-20233
	ctx.r11.s64 = -1325989888;
	// addi r3,r28,-16920
	ctx.r3.s64 = ctx.r28.s64 + -16920;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50949
	ctx.r4.u64 = ctx.r11.u64 | 50949;
	// lis r11,-13938
	ctx.r11.s64 = -913440768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58062
	ctx.r11.u64 = ctx.r11.u64 | 58062;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABC58;
	sub_8279BCE0(ctx, base);
	// lis r11,-24614
	ctx.r11.s64 = -1613103104;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19736
	ctx.r4.u64 = ctx.r11.u64 | 19736;
	// lis r11,18710
	ctx.r11.s64 = 1226178560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46397
	ctx.r11.u64 = ctx.r11.u64 | 46397;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABC88;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,11867
	ctx.r11.s64 = 777715712;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25606
	ctx.r4.u64 = ctx.r11.u64 | 25606;
	// lis r11,3992
	ctx.r11.s64 = 261619712;
	// ori r11,r11,29984
	ctx.r11.u64 = ctx.r11.u64 | 29984;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABCB8;
	sub_8279BCE0(ctx, base);
	// lis r11,374
	ctx.r11.s64 = 24510464;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60955
	ctx.r4.u64 = ctx.r11.u64 | 60955;
	// lis r11,-28928
	ctx.r11.s64 = -1895825408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8915
	ctx.r11.u64 = ctx.r11.u64 | 8915;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABCE8;
	sub_8279BCE0(ctx, base);
	// lis r11,11475
	ctx.r11.s64 = 752025600;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9163
	ctx.r4.u64 = ctx.r11.u64 | 9163;
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49690
	ctx.r11.u64 = ctx.r11.u64 | 49690;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABD18;
	sub_8279BCE0(ctx, base);
	// lis r11,1022
	ctx.r11.s64 = 66977792;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43478
	ctx.r4.u64 = ctx.r11.u64 | 43478;
	// lis r11,-16616
	ctx.r11.s64 = -1088946176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38377
	ctx.r11.u64 = ctx.r11.u64 | 38377;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABD48;
	sub_8279BCE0(ctx, base);
	// lis r11,-18239
	ctx.r11.s64 = -1195311104;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54320
	ctx.r4.u64 = ctx.r11.u64 | 54320;
	// lis r11,-1219
	ctx.r11.s64 = -79888384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28756
	ctx.r11.u64 = ctx.r11.u64 | 28756;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABD78;
	sub_8279BCE0(ctx, base);
	// lis r11,-26644
	ctx.r11.s64 = -1746141184;
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24109
	ctx.r4.u64 = ctx.r11.u64 | 24109;
	// lis r11,31653
	ctx.r11.s64 = 2074411008;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10151
	ctx.r11.u64 = ctx.r11.u64 | 10151;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABDA8;
	sub_8279BCE0(ctx, base);
	// lis r11,11539
	ctx.r11.s64 = 756219904;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45434
	ctx.r4.u64 = ctx.r11.u64 | 45434;
	// lis r11,16603
	ctx.r11.s64 = 1088094208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13273
	ctx.r11.u64 = ctx.r11.u64 | 13273;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABDD8;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,574
	ctx.r11.s64 = 37617664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,15207
	ctx.r4.u64 = ctx.r11.u64 | 15207;
	// lis r11,-16317
	ctx.r11.s64 = -1069350912;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,25642
	ctx.r11.u64 = ctx.r11.u64 | 25642;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABE08;
	sub_8279BCE0(ctx, base);
	// lis r11,-23629
	ctx.r11.s64 = -1548550144;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34207
	ctx.r4.u64 = ctx.r11.u64 | 34207;
	// lis r11,28089
	ctx.r11.s64 = 1840840704;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27581
	ctx.r11.u64 = ctx.r11.u64 | 27581;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABE38;
	sub_8279BCE0(ctx, base);
	// lis r11,-29538
	ctx.r11.s64 = -1935802368;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3970
	ctx.r4.u64 = ctx.r11.u64 | 3970;
	// lis r11,-4831
	ctx.r11.s64 = -316604416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15438
	ctx.r11.u64 = ctx.r11.u64 | 15438;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABE68;
	sub_8279BCE0(ctx, base);
	// lis r11,28515
	ctx.r11.s64 = 1868759040;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57727
	ctx.r4.u64 = ctx.r11.u64 | 57727;
	// lis r11,2727
	ctx.r11.s64 = 178716672;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,48595
	ctx.r11.u64 = ctx.r11.u64 | 48595;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824ABE98;
	sub_8279BCE0(ctx, base);
	// lis r11,16462
	ctx.r11.s64 = 1078853632;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27490
	ctx.r4.u64 = ctx.r11.u64 | 27490;
	// lis r11,-30145
	ctx.r11.s64 = -1975582720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59936
	ctx.r11.u64 = ctx.r11.u64 | 59936;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABEC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-1167
	ctx.r11.s64 = -76480512;
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5764
	ctx.r4.u64 = ctx.r11.u64 | 5764;
	// lis r11,-12774
	ctx.r11.s64 = -837156864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3997
	ctx.r11.u64 = ctx.r11.u64 | 3997;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABEF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-11172
	ctx.r11.s64 = -732168192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// ori r4,r11,40089
	ctx.r4.u64 = ctx.r11.u64 | 40089;
	// lis r11,20098
	ctx.r11.s64 = 1317142528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22638
	ctx.r11.u64 = ctx.r11.u64 | 22638;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABF28;
	sub_8279BCE0(ctx, base);
	// lis r11,-24325
	ctx.r11.s64 = -1594163200;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20707
	ctx.r4.u64 = ctx.r11.u64 | 20707;
	// lis r11,8954
	ctx.r11.s64 = 586809344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11588
	ctx.r11.u64 = ctx.r11.u64 | 11588;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABF58;
	sub_8279BCE0(ctx, base);
	// lis r11,-28714
	ctx.r11.s64 = -1881800704;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56062
	ctx.r4.u64 = ctx.r11.u64 | 56062;
	// lis r11,-23966
	ctx.r11.s64 = -1570635776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31415
	ctx.r11.u64 = ctx.r11.u64 | 31415;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABF88;
	sub_8279BCE0(ctx, base);
	// lis r11,18405
	ctx.r11.s64 = 1206190080;
	// addi r3,r28,-21392
	ctx.r3.s64 = ctx.r28.s64 + -21392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1540
	ctx.r4.u64 = ctx.r11.u64 | 1540;
	// lis r11,12803
	ctx.r11.s64 = 839057408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8051
	ctx.r11.u64 = ctx.r11.u64 | 8051;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABFB8;
	sub_8279BCE0(ctx, base);
	// lis r11,26824
	ctx.r11.s64 = 1757937664;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35865
	ctx.r4.u64 = ctx.r11.u64 | 35865;
	// lis r11,-19813
	ctx.r11.s64 = -1298464768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18560
	ctx.r11.u64 = ctx.r11.u64 | 18560;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ABFE8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29899
	ctx.r11.s64 = -1959460864;
	// addi r3,r28,-20912
	ctx.r3.s64 = ctx.r28.s64 + -20912;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25316
	ctx.r4.u64 = ctx.r11.u64 | 25316;
	// lis r11,21789
	ctx.r11.s64 = 1427963904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51485
	ctx.r11.u64 = ctx.r11.u64 | 51485;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC018;
	sub_8279BCE0(ctx, base);
	// lis r11,-23528
	ctx.r11.s64 = -1541931008;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59641
	ctx.r4.u64 = ctx.r11.u64 | 59641;
	// lis r11,-10875
	ctx.r11.s64 = -712704000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40686
	ctx.r11.u64 = ctx.r11.u64 | 40686;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC048;
	sub_8279BCE0(ctx, base);
	// lis r11,7975
	ctx.r11.s64 = 522649600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-20304
	ctx.r3.s64 = ctx.r28.s64 + -20304;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,38175
	ctx.r4.u64 = ctx.r11.u64 | 38175;
	// lis r11,-28256
	ctx.r11.s64 = -1851785216;
	// ori r11,r11,31571
	ctx.r11.u64 = ctx.r11.u64 | 31571;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC078;
	sub_8279BCE0(ctx, base);
	// lis r11,12298
	ctx.r11.s64 = 805961728;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7938
	ctx.r4.u64 = ctx.r11.u64 | 7938;
	// lis r11,4408
	ctx.r11.s64 = 288882688;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11424
	ctx.r11.u64 = ctx.r11.u64 | 11424;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC0A8;
	sub_8279BCE0(ctx, base);
	// lis r11,17581
	ctx.r11.s64 = 1152188416;
	// addi r3,r28,-19728
	ctx.r3.s64 = ctx.r28.s64 + -19728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54136
	ctx.r4.u64 = ctx.r11.u64 | 54136;
	// lis r11,32064
	ctx.r11.s64 = 2101346304;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22922
	ctx.r11.u64 = ctx.r11.u64 | 22922;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC0D8;
	sub_8279BCE0(ctx, base);
	// lis r11,27520
	ctx.r11.s64 = 1803550720;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22885
	ctx.r4.u64 = ctx.r11.u64 | 22885;
	// lis r11,-552
	ctx.r11.s64 = -36175872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3705
	ctx.r11.u64 = ctx.r11.u64 | 3705;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC108;
	sub_8279BCE0(ctx, base);
	// lis r11,1109
	ctx.r11.s64 = 72679424;
	// addi r3,r28,-19032
	ctx.r3.s64 = ctx.r28.s64 + -19032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50352
	ctx.r4.u64 = ctx.r11.u64 | 50352;
	// lis r11,1828
	ctx.r11.s64 = 119799808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24762
	ctx.r11.u64 = ctx.r11.u64 | 24762;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC138;
	sub_8279BCE0(ctx, base);
	// lis r11,11128
	ctx.r11.s64 = 729284608;
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20141
	ctx.r4.u64 = ctx.r11.u64 | 20141;
	// lis r11,-30788
	ctx.r11.s64 = -2017722368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14153
	ctx.r11.u64 = ctx.r11.u64 | 14153;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC168;
	sub_8279BCE0(ctx, base);
	// lis r11,1757
	ctx.r11.s64 = 115146752;
	// addi r3,r28,-18464
	ctx.r3.s64 = ctx.r28.s64 + -18464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33661
	ctx.r4.u64 = ctx.r11.u64 | 33661;
	// lis r11,14140
	ctx.r11.s64 = 926679040;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55168
	ctx.r11.u64 = ctx.r11.u64 | 55168;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC198;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,10736
	ctx.r11.s64 = 703594496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2400
	ctx.r4.u64 = ctx.r11.u64 | 2400;
	// lis r11,-18524
	ctx.r11.s64 = -1213988864;
	// ori r11,r11,32883
	ctx.r11.u64 = ctx.r11.u64 | 32883;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC1C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-27953
	ctx.r11.s64 = -1831927808;
	// addi r3,r28,-17768
	ctx.r3.s64 = ctx.r28.s64 + -17768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29830
	ctx.r4.u64 = ctx.r11.u64 | 29830;
	// lis r11,-3199
	ctx.r11.s64 = -209649664;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26062
	ctx.r11.u64 = ctx.r11.u64 | 26062;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC1F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-16926
	ctx.r11.s64 = -1109262336;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65179
	ctx.r4.u64 = ctx.r11.u64 | 65179;
	// lis r11,29465
	ctx.r11.s64 = 1931018240;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12861
	ctx.r11.u64 = ctx.r11.u64 | 12861;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC228;
	sub_8279BCE0(ctx, base);
	// lis r11,-29555
	ctx.r11.s64 = -1936916480;
	// addi r3,r28,-16920
	ctx.r3.s64 = ctx.r28.s64 + -16920;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11269
	ctx.r4.u64 = ctx.r11.u64 | 11269;
	// lis r11,-11677
	ctx.r11.s64 = -765263872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26587
	ctx.r11.u64 = ctx.r11.u64 | 26587;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC258;
	sub_8279BCE0(ctx, base);
	// lis r11,-23648
	ctx.r11.s64 = -1549795328;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42520
	ctx.r4.u64 = ctx.r11.u64 | 42520;
	// lis r11,21243
	ctx.r11.s64 = 1392181248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12328
	ctx.r11.u64 = ctx.r11.u64 | 12328;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC288;
	sub_8279BCE0(ctx, base);
	// lis r11,-12801
	ctx.r11.s64 = -838926336;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10353
	ctx.r4.u64 = ctx.r11.u64 | 10353;
	// lis r11,-9342
	ctx.r11.s64 = -612237312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39894
	ctx.r11.u64 = ctx.r11.u64 | 39894;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC2B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-7470
	ctx.r11.s64 = -489553920;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41580
	ctx.r4.u64 = ctx.r11.u64 | 41580;
	// lis r11,23322
	ctx.r11.s64 = 1528430592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52261
	ctx.r11.u64 = ctx.r11.u64 | 52261;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC2E8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-27019
	ctx.r11.s64 = -1770717184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,28182
	ctx.r4.u64 = ctx.r11.u64 | 28182;
	// lis r11,14178
	ctx.r11.s64 = 929169408;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,47375
	ctx.r11.u64 = ctx.r11.u64 | 47375;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC318;
	sub_8279BCE0(ctx, base);
	// lis r11,-18088
	ctx.r11.s64 = -1185415168;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58379
	ctx.r4.u64 = ctx.r11.u64 | 58379;
	// lis r11,-18438
	ctx.r11.s64 = -1208352768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61180
	ctx.r11.u64 = ctx.r11.u64 | 61180;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC348;
	sub_8279BCE0(ctx, base);
	// lis r11,615
	ctx.r11.s64 = 40304640;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39405
	ctx.r4.u64 = ctx.r11.u64 | 39405;
	// lis r11,-3105
	ctx.r11.s64 = -203489280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2881
	ctx.r11.u64 = ctx.r11.u64 | 2881;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC378;
	sub_8279BCE0(ctx, base);
	// lis r11,11594
	ctx.r11.s64 = 759824384;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5104
	ctx.r4.u64 = ctx.r11.u64 | 5104;
	// lis r11,29511
	ctx.r11.s64 = 1934032896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23730
	ctx.r11.u64 = ctx.r11.u64 | 23730;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC3A8;
	sub_8279BCE0(ctx, base);
	// lis r11,31923
	ctx.r11.s64 = 2092105728;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65112
	ctx.r4.u64 = ctx.r11.u64 | 65112;
	// lis r11,11568
	ctx.r11.s64 = 758120448;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63209
	ctx.r11.u64 = ctx.r11.u64 | 63209;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC3D8;
	sub_8279BCE0(ctx, base);
	// lis r11,21406
	ctx.r11.s64 = 1402863616;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29765
	ctx.r4.u64 = ctx.r11.u64 | 29765;
	// lis r11,-21080
	ctx.r11.s64 = -1381498880;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41242
	ctx.r11.u64 = ctx.r11.u64 | 41242;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC408;
	sub_8279BCE0(ctx, base);
	// lis r11,16407
	ctx.r11.s64 = 1075249152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// ori r4,r11,51688
	ctx.r4.u64 = ctx.r11.u64 | 51688;
	// lis r11,-18013
	ctx.r11.s64 = -1180499968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34123
	ctx.r11.u64 = ctx.r11.u64 | 34123;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC438;
	sub_8279BCE0(ctx, base);
	// lis r11,28474
	ctx.r11.s64 = 1866072064;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17397
	ctx.r4.u64 = ctx.r11.u64 | 17397;
	// lis r11,14651
	ctx.r11.s64 = 960167936;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53944
	ctx.r11.u64 = ctx.r11.u64 | 53944;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC468;
	sub_8279BCE0(ctx, base);
	// lis r11,-10811
	ctx.r11.s64 = -708509696;
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44194
	ctx.r4.u64 = ctx.r11.u64 | 44194;
	// lis r11,581
	ctx.r11.s64 = 38076416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50886
	ctx.r11.u64 = ctx.r11.u64 | 50886;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC498;
	sub_8279BCE0(ctx, base);
	// lis r11,-1304
	ctx.r11.s64 = -85458944;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9919
	ctx.r4.u64 = ctx.r11.u64 | 9919;
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37173
	ctx.r11.u64 = ctx.r11.u64 | 37173;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC4C8;
	sub_8279BCE0(ctx, base);
	// lis r11,16855
	ctx.r11.s64 = 1104609280;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23385
	ctx.r4.u64 = ctx.r11.u64 | 23385;
	// lis r11,-14600
	ctx.r11.s64 = -956825600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29832
	ctx.r11.u64 = ctx.r11.u64 | 29832;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC4F8;
	sub_8279BCE0(ctx, base);
	// lis r11,28410
	ctx.r11.s64 = 1861877760;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53572
	ctx.r4.u64 = ctx.r11.u64 | 53572;
	// lis r11,18016
	ctx.r11.s64 = 1180696576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9083
	ctx.r11.u64 = ctx.r11.u64 | 9083;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC528;
	sub_8279BCE0(ctx, base);
	// lis r11,-3749
	ctx.r11.s64 = -245694464;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8129
	ctx.r4.u64 = ctx.r11.u64 | 8129;
	// lis r11,20241
	ctx.r11.s64 = 1326514176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59508
	ctx.r11.u64 = ctx.r11.u64 | 59508;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC558;
	sub_8279BCE0(ctx, base);
	// lis r11,-8586
	ctx.r11.s64 = -562692096;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,38364
	ctx.r4.u64 = ctx.r11.u64 | 38364;
	// lis r11,-12407
	ctx.r11.s64 = -813105152;
	// ori r11,r11,49031
	ctx.r11.u64 = ctx.r11.u64 | 49031;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC588;
	sub_8279BCE0(ctx, base);
	// lis r11,-23487
	ctx.r11.s64 = -1539244032;
	// addi r3,r28,-15936
	ctx.r3.s64 = ctx.r28.s64 + -15936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19059
	ctx.r4.u64 = ctx.r11.u64 | 19059;
	// lis r11,-6631
	ctx.r11.s64 = -434569216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61829
	ctx.r11.u64 = ctx.r11.u64 | 61829;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC5B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29844
	ctx.r11.s64 = -1955856384;
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49262
	ctx.r4.u64 = ctx.r11.u64 | 49262;
	// lis r11,26241
	ctx.r11.s64 = 1719730176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42614
	ctx.r11.u64 = ctx.r11.u64 | 42614;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC5E8;
	sub_8279BCE0(ctx, base);
	// lis r11,12691
	ctx.r11.s64 = 831717376;
	// addi r3,r28,-15328
	ctx.r3.s64 = ctx.r28.s64 + -15328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12089
	ctx.r4.u64 = ctx.r11.u64 | 12089;
	// lis r11,24063
	ctx.r11.s64 = 1576992768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45576
	ctx.r11.u64 = ctx.r11.u64 | 45576;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC618;
	sub_8279BCE0(ctx, base);
	// lis r11,7870
	ctx.r11.s64 = 515768320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42276
	ctx.r4.u64 = ctx.r11.u64 | 42276;
	// lis r11,-8857
	ctx.r11.s64 = -580452352;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,58875
	ctx.r11.u64 = ctx.r11.u64 | 58875;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AC648;
	sub_8279BCE0(ctx, base);
	// lis r11,-23167
	ctx.r11.s64 = -1518272512;
	// addi r3,r28,-14632
	ctx.r3.s64 = ctx.r28.s64 + -14632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55490
	ctx.r4.u64 = ctx.r11.u64 | 55490;
	// lis r11,-26302
	ctx.r11.s64 = -1723727872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,70
	ctx.r11.u64 = ctx.r11.u64 | 70;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC678;
	sub_8279BCE0(ctx, base);
	// lis r11,-30036
	ctx.r11.s64 = -1968439296;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21215
	ctx.r4.u64 = ctx.r11.u64 | 21215;
	// lis r11,6618
	ctx.r11.s64 = 433717248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22453
	ctx.r11.u64 = ctx.r11.u64 | 22453;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC6A8;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-13936
	ctx.r3.s64 = ctx.r28.s64 + -13936;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,5389
	ctx.r11.s64 = 353173504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40026
	ctx.r4.u64 = ctx.r11.u64 | 40026;
	// lis r11,4267
	ctx.r11.s64 = 279642112;
	// ori r11,r11,40122
	ctx.r11.u64 = ctx.r11.u64 | 40122;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC6D8;
	sub_8279BCE0(ctx, base);
	// lis r11,14880
	ctx.r11.s64 = 975175680;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5703
	ctx.r4.u64 = ctx.r11.u64 | 5703;
	// lis r11,-28621
	ctx.r11.s64 = -1875705856;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52041
	ctx.r11.u64 = ctx.r11.u64 | 52041;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC708;
	sub_8279BCE0(ctx, base);
	// lis r11,-6159
	ctx.r11.s64 = -403636224;
	// addi r3,r28,-13152
	ctx.r3.s64 = ctx.r28.s64 + -13152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35015
	ctx.r4.u64 = ctx.r11.u64 | 35015;
	// lis r11,-11458
	ctx.r11.s64 = -750911488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36428
	ctx.r11.u64 = ctx.r11.u64 | 36428;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC738;
	sub_8279BCE0(ctx, base);
	// lis r11,-14116
	ctx.r11.s64 = -925106176;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,730
	ctx.r4.u64 = ctx.r11.u64 | 730;
	// lis r11,21414
	ctx.r11.s64 = 1403387904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55743
	ctx.r11.u64 = ctx.r11.u64 | 55743;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC768;
	sub_8279BCE0(ctx, base);
	// lis r11,-17285
	ctx.r11.s64 = -1132789760;
	// addi r3,r28,-12456
	ctx.r3.s64 = ctx.r28.s64 + -12456;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52896
	ctx.r4.u64 = ctx.r11.u64 | 52896;
	// lis r11,16350
	ctx.r11.s64 = 1071513600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44181
	ctx.r11.u64 = ctx.r11.u64 | 44181;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC798;
	sub_8279BCE0(ctx, base);
	// lis r11,-27818
	ctx.r11.s64 = -1823080448;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17597
	ctx.r4.u64 = ctx.r11.u64 | 17597;
	// lis r11,-16570
	ctx.r11.s64 = -1085931520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64358
	ctx.r11.u64 = ctx.r11.u64 | 64358;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC7C8;
	sub_8279BCE0(ctx, base);
	// lis r11,10345
	ctx.r11.s64 = 677969920;
	// addi r3,r28,-11672
	ctx.r3.s64 = ctx.r28.s64 + -11672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14683
	ctx.r4.u64 = ctx.r11.u64 | 14683;
	// lis r11,-1181
	ctx.r11.s64 = -77398016;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7899
	ctx.r11.u64 = ctx.r11.u64 | 7899;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC7F8;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,1860
	ctx.r11.s64 = 121896960;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,45894
	ctx.r4.u64 = ctx.r11.u64 | 45894;
	// lis r11,31739
	ctx.r11.s64 = 2080047104;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r11,r11,18728
	ctx.r11.u64 = ctx.r11.u64 | 18728;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC828;
	sub_8279BCE0(ctx, base);
	// lis r11,-8915
	ctx.r11.s64 = -584253440;
	// addi r3,r28,-10688
	ctx.r3.s64 = ctx.r28.s64 + -10688;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25383
	ctx.r4.u64 = ctx.r11.u64 | 25383;
	// lis r11,-16504
	ctx.r11.s64 = -1081606144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41707
	ctx.r11.u64 = ctx.r11.u64 | 41707;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC858;
	sub_8279BCE0(ctx, base);
	// lis r11,-3584
	ctx.r11.s64 = -234881024;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59706
	ctx.r4.u64 = ctx.r11.u64 | 59706;
	// lis r11,16144
	ctx.r11.s64 = 1058013184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62744
	ctx.r11.u64 = ctx.r11.u64 | 62744;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC888;
	sub_8279BCE0(ctx, base);
	// lis r11,-19379
	ctx.r11.s64 = -1270022144;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56725
	ctx.r4.u64 = ctx.r11.u64 | 56725;
	// lis r11,3437
	ctx.r11.s64 = 225247232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15887
	ctx.r11.u64 = ctx.r11.u64 | 15887;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC8B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25760
	ctx.r11.s64 = -1688207360;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22408
	ctx.r4.u64 = ctx.r11.u64 | 22408;
	// lis r11,-29195
	ctx.r11.s64 = -1913323520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27132
	ctx.r11.u64 = ctx.r11.u64 | 27132;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC8E8;
	sub_8279BCE0(ctx, base);
	// lis r11,8607
	ctx.r11.s64 = 564068352;
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47327
	ctx.r4.u64 = ctx.r11.u64 | 47327;
	// lis r11,-18805
	ctx.r11.s64 = -1232404480;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32130
	ctx.r11.u64 = ctx.r11.u64 | 32130;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC918;
	sub_8279BCE0(ctx, base);
	// lis r11,3762
	ctx.r11.s64 = 246546432;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// ori r4,r11,12994
	ctx.r4.u64 = ctx.r11.u64 | 12994;
	// lis r11,13843
	ctx.r11.s64 = 907214848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10865
	ctx.r11.u64 = ctx.r11.u64 | 10865;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC948;
	sub_8279BCE0(ctx, base);
	// lis r11,-19059
	ctx.r11.s64 = -1249050624;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20260
	ctx.r4.u64 = ctx.r11.u64 | 20260;
	// lis r11,29238
	ctx.r11.s64 = 1916141568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53196
	ctx.r11.u64 = ctx.r11.u64 | 53196;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC978;
	sub_8279BCE0(ctx, base);
	// lis r11,-25952
	ctx.r11.s64 = -1700790272;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50489
	ctx.r4.u64 = ctx.r11.u64 | 50489;
	// lis r11,-3410
	ctx.r11.s64 = -223477760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38975
	ctx.r11.u64 = ctx.r11.u64 | 38975;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC9A8;
	sub_8279BCE0(ctx, base);
	// lis r11,1281
	ctx.r11.s64 = 83951616;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3004
	ctx.r4.u64 = ctx.r11.u64 | 3004;
	// lis r11,-1057
	ctx.r11.s64 = -69271552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21296
	ctx.r11.u64 = ctx.r11.u64 | 21296;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AC9D8;
	sub_8279BCE0(ctx, base);
	// lis r11,10796
	ctx.r11.s64 = 707526656;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33185
	ctx.r4.u64 = ctx.r11.u64 | 33185;
	// lis r11,31559
	ctx.r11.s64 = 2068250624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1219
	ctx.r11.u64 = ctx.r11.u64 | 1219;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACA08;
	sub_8279BCE0(ctx, base);
	// lis r11,-2051
	ctx.r11.s64 = -134414336;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7969
	ctx.r4.u64 = ctx.r11.u64 | 7969;
	// lis r11,14410
	ctx.r11.s64 = 944373760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16838
	ctx.r11.u64 = ctx.r11.u64 | 16838;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACA38;
	sub_8279BCE0(ctx, base);
	// lis r11,-10032
	ctx.r11.s64 = -657457152;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38204
	ctx.r4.u64 = ctx.r11.u64 | 38204;
	// lis r11,-18222
	ctx.r11.s64 = -1194196992;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5685
	ctx.r11.u64 = ctx.r11.u64 | 5685;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACA68;
	sub_8279BCE0(ctx, base);
	// lis r11,-21385
	ctx.r11.s64 = -1401487360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,22854
	ctx.r4.u64 = ctx.r11.u64 | 22854;
	// lis r11,-11094
	ctx.r11.s64 = -727056384;
	// ori r11,r11,25375
	ctx.r11.u64 = ctx.r11.u64 | 25375;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACA98;
	sub_8279BCE0(ctx, base);
	// lis r11,-31910
	ctx.r11.s64 = -2091253760;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54107
	ctx.r4.u64 = ctx.r11.u64 | 54107;
	// lis r11,21554
	ctx.r11.s64 = 1412562944;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13548
	ctx.r11.u64 = ctx.r11.u64 | 13548;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACAC8;
	sub_8279BCE0(ctx, base);
	// lis r11,14437
	ctx.r11.s64 = 946143232;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44733
	ctx.r4.u64 = ctx.r11.u64 | 44733;
	// lis r11,4119
	ctx.r11.s64 = 269942784;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53585
	ctx.r11.u64 = ctx.r11.u64 | 53585;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACAF8;
	sub_8279BCE0(ctx, base);
	// lis r11,5960
	ctx.r11.s64 = 390594560;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9376
	ctx.r4.u64 = ctx.r11.u64 | 9376;
	// lis r11,-28529
	ctx.r11.s64 = -1869676544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34466
	ctx.r11.u64 = ctx.r11.u64 | 34466;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACB28;
	sub_8279BCE0(ctx, base);
	// lis r11,-13023
	ctx.r11.s64 = -853475328;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62657
	ctx.r4.u64 = ctx.r11.u64 | 62657;
	// lis r11,21756
	ctx.r11.s64 = 1425801216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28001
	ctx.r11.u64 = ctx.r11.u64 | 28001;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACB58;
	sub_8279BCE0(ctx, base);
	// lis r11,-7668
	ctx.r11.s64 = -502530048;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32476
	ctx.r4.u64 = ctx.r11.u64 | 32476;
	// lis r11,-11164
	ctx.r11.s64 = -731643904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14994
	ctx.r11.u64 = ctx.r11.u64 | 14994;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACB88;
	sub_8279BCE0(ctx, base);
	// lis r11,5035
	ctx.r11.s64 = 329973760;
	// addi r3,r28,-15936
	ctx.r3.s64 = ctx.r28.s64 + -15936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40122
	ctx.r4.u64 = ctx.r11.u64 | 40122;
	// lis r11,26608
	ctx.r11.s64 = 1743781888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13576
	ctx.r11.u64 = ctx.r11.u64 | 13576;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACBB8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,15494
	ctx.r11.s64 = 1015414784;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5799
	ctx.r4.u64 = ctx.r11.u64 | 5799;
	// lis r11,-6296
	ctx.r11.s64 = -412614656;
	// ori r11,r11,25339
	ctx.r11.u64 = ctx.r11.u64 | 25339;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACBE8;
	sub_8279BCE0(ctx, base);
	// lis r11,18465
	ctx.r11.s64 = 1210122240;
	// addi r3,r28,-15328
	ctx.r3.s64 = ctx.r28.s64 + -15328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56029
	ctx.r4.u64 = ctx.r11.u64 | 56029;
	// lis r11,-29936
	ctx.r11.s64 = -1961885696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6097
	ctx.r11.u64 = ctx.r11.u64 | 6097;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACC18;
	sub_8279BCE0(ctx, base);
	// lis r11,26380
	ctx.r11.s64 = 1728839680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20672
	ctx.r4.u64 = ctx.r11.u64 | 20672;
	// lis r11,2952
	ctx.r11.s64 = 193462272;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,16418
	ctx.r11.u64 = ctx.r11.u64 | 16418;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824ACC48;
	sub_8279BCE0(ctx, base);
	// lis r11,-9165
	ctx.r11.s64 = -600637440;
	// addi r3,r28,-14632
	ctx.r3.s64 = ctx.r28.s64 + -14632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11558
	ctx.r4.u64 = ctx.r11.u64 | 11558;
	// lis r11,20397
	ctx.r11.s64 = 1336737792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42399
	ctx.r11.u64 = ctx.r11.u64 | 42399;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACC78;
	sub_8279BCE0(ctx, base);
	// lis r11,-3298
	ctx.r11.s64 = -216137728;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42811
	ctx.r4.u64 = ctx.r11.u64 | 42811;
	// lis r11,-12491
	ctx.r11.s64 = -818610176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62060
	ctx.r11.u64 = ctx.r11.u64 | 62060;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACCA8;
	sub_8279BCE0(ctx, base);
	// lis r11,10615
	ctx.r11.s64 = 695664640;
	// addi r3,r28,-13936
	ctx.r3.s64 = ctx.r28.s64 + -13936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30554
	ctx.r4.u64 = ctx.r11.u64 | 30554;
	// lis r11,2886
	ctx.r11.s64 = 189136896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6575
	ctx.r11.u64 = ctx.r11.u64 | 6575;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACCD8;
	sub_8279BCE0(ctx, base);
	// lis r11,1626
	ctx.r11.s64 = 106561536;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64839
	ctx.r4.u64 = ctx.r11.u64 | 64839;
	// lis r11,-29730
	ctx.r11.s64 = -1948385280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20060
	ctx.r11.u64 = ctx.r11.u64 | 20060;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACD08;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-13152
	ctx.r3.s64 = ctx.r28.s64 + -13152;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-25021
	ctx.r11.s64 = -1639776256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,32035
	ctx.r4.u64 = ctx.r11.u64 | 32035;
	// lis r11,1489
	ctx.r11.s64 = 97583104;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,11157
	ctx.r11.u64 = ctx.r11.u64 | 11157;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACD38;
	sub_8279BCE0(ctx, base);
	// lis r11,-20114
	ctx.r11.s64 = -1318191104;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63294
	ctx.r4.u64 = ctx.r11.u64 | 63294;
	// lis r11,-31415
	ctx.r11.s64 = -2058813440;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31846
	ctx.r11.u64 = ctx.r11.u64 | 31846;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACD68;
	sub_8279BCE0(ctx, base);
	// lis r11,-32767
	ctx.r11.s64 = -2147418112;
	// addi r3,r28,-12456
	ctx.r3.s64 = ctx.r28.s64 + -12456;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9632
	ctx.r4.u64 = ctx.r11.u64 | 9632;
	// lis r11,9267
	ctx.r11.s64 = 607322112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10624
	ctx.r11.u64 = ctx.r11.u64 | 10624;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACD98;
	sub_8279BCE0(ctx, base);
	// lis r11,-20692
	ctx.r11.s64 = -1356070912;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44989
	ctx.r4.u64 = ctx.r11.u64 | 44989;
	// lis r11,-23381
	ctx.r11.s64 = -1532297216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32371
	ctx.r11.u64 = ctx.r11.u64 | 32371;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACDC8;
	sub_8279BCE0(ctx, base);
	// lis r11,5139
	ctx.r11.s64 = 336789504;
	// addi r3,r28,-11672
	ctx.r3.s64 = ctx.r28.s64 + -11672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53851
	ctx.r4.u64 = ctx.r11.u64 | 53851;
	// lis r11,-8050
	ctx.r11.s64 = -527564800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39886
	ctx.r11.u64 = ctx.r11.u64 | 39886;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACDF8;
	sub_8279BCE0(ctx, base);
	// lis r11,15166
	ctx.r11.s64 = 993918976;
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22598
	ctx.r4.u64 = ctx.r11.u64 | 22598;
	// lis r11,24598
	ctx.r11.s64 = 1612054528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52285
	ctx.r11.u64 = ctx.r11.u64 | 52285;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACE28;
	sub_8279BCE0(ctx, base);
	// lis r11,-23393
	ctx.r11.s64 = -1533083648;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-10688
	ctx.r3.s64 = ctx.r28.s64 + -10688;
	// ori r4,r11,38595
	ctx.r4.u64 = ctx.r11.u64 | 38595;
	// lis r11,26983
	ctx.r11.s64 = 1768357888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1842
	ctx.r11.u64 = ctx.r11.u64 | 1842;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACE58;
	sub_8279BCE0(ctx, base);
	// lis r11,-29774
	ctx.r11.s64 = -1951268864;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7390
	ctx.r4.u64 = ctx.r11.u64 | 7390;
	// lis r11,-5633
	ctx.r11.s64 = -369164288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20673
	ctx.r11.u64 = ctx.r11.u64 | 20673;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACE88;
	sub_8279BCE0(ctx, base);
	// lis r11,20106
	ctx.r11.s64 = 1317666816;
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8899
	ctx.r4.u64 = ctx.r11.u64 | 8899;
	// lis r11,-21462
	ctx.r11.s64 = -1406533632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32914
	ctx.r11.u64 = ctx.r11.u64 | 32914;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACEB8;
	sub_8279BCE0(ctx, base);
	// lis r11,24999
	ctx.r11.s64 = 1638334464;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43230
	ctx.r4.u64 = ctx.r11.u64 | 43230;
	// lis r11,11442
	ctx.r11.s64 = 749862912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55137
	ctx.r11.u64 = ctx.r11.u64 | 55137;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACEE8;
	sub_8279BCE0(ctx, base);
	// lis r11,2506
	ctx.r11.s64 = 164233216;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31722
	ctx.r4.u64 = ctx.r11.u64 | 31722;
	// lis r11,20784
	ctx.r11.s64 = 1362100224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5988
	ctx.r11.u64 = ctx.r11.u64 | 5988;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACF18;
	sub_8279BCE0(ctx, base);
	// lis r11,9959
	ctx.r11.s64 = 652673024;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61943
	ctx.r4.u64 = ctx.r11.u64 | 61943;
	// lis r11,-11864
	ctx.r11.s64 = -777519104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16535
	ctx.r11.u64 = ctx.r11.u64 | 16535;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACF48;
	sub_8279BCE0(ctx, base);
	// lis r11,-25128
	ctx.r11.s64 = -1646788608;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35857
	ctx.r4.u64 = ctx.r11.u64 | 35857;
	// lis r11,-27251
	ctx.r11.s64 = -1785921536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42282
	ctx.r11.u64 = ctx.r11.u64 | 42282;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACF78;
	sub_8279BCE0(ctx, base);
	// lis r11,-19723
	ctx.r11.s64 = -1292566528;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,1548
	ctx.r4.u64 = ctx.r11.u64 | 1548;
	// lis r11,5397
	ctx.r11.s64 = 353697792;
	// ori r11,r11,62169
	ctx.r11.u64 = ctx.r11.u64 | 62169;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACFA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-14766
	ctx.r11.s64 = -967704576;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51830
	ctx.r4.u64 = ctx.r11.u64 | 51830;
	// lis r11,31085
	ctx.r11.s64 = 2037186560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34803
	ctx.r11.u64 = ctx.r11.u64 | 34803;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ACFD8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5761
	ctx.r11.s64 = -377552896;
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16491
	ctx.r4.u64 = ctx.r11.u64 | 16491;
	// lis r11,-1547
	ctx.r11.s64 = -101384192;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53248
	ctx.r11.u64 = ctx.r11.u64 | 53248;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD008;
	sub_8279BCE0(ctx, base);
	// lis r11,-31062
	ctx.r11.s64 = -2035679232;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56766
	ctx.r4.u64 = ctx.r11.u64 | 56766;
	// lis r11,777
	ctx.r11.s64 = 50921472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48835
	ctx.r11.u64 = ctx.r11.u64 | 48835;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD038;
	sub_8279BCE0(ctx, base);
	// lis r11,-22137
	ctx.r11.s64 = -1450770432;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22435
	ctx.r4.u64 = ctx.r11.u64 | 22435;
	// lis r11,-31855
	ctx.r11.s64 = -2087649280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59696
	ctx.r11.u64 = ctx.r11.u64 | 59696;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD068;
	sub_8279BCE0(ctx, base);
	// lis r11,-31710
	ctx.r11.s64 = -2078146560;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39539
	ctx.r4.u64 = ctx.r11.u64 | 39539;
	// lis r11,13073
	ctx.r11.s64 = 856752128;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,2553
	ctx.r11.u64 = ctx.r11.u64 | 2553;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AD098;
	sub_8279BCE0(ctx, base);
	// lis r11,-21745
	ctx.r11.s64 = -1425080320;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4206
	ctx.r4.u64 = ctx.r11.u64 | 4206;
	// lis r11,-19575
	ctx.r11.s64 = -1282867200;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24074
	ctx.r11.u64 = ctx.r11.u64 | 24074;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD0C8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,4144
	ctx.r11.s64 = 271581184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28040
	ctx.r4.u64 = ctx.r11.u64 | 28040;
	// lis r11,-2132
	ctx.r11.s64 = -139722752;
	// ori r11,r11,48055
	ctx.r11.u64 = ctx.r11.u64 | 48055;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD0F8;
	sub_8279BCE0(ctx, base);
	// lis r11,16157
	ctx.r11.s64 = 1058865152;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59285
	ctx.r4.u64 = ctx.r11.u64 | 59285;
	// lis r11,30516
	ctx.r11.s64 = 1999896576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60484
	ctx.r11.u64 = ctx.r11.u64 | 60484;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD128;
	sub_8279BCE0(ctx, base);
	// lis r11,-31262
	ctx.r11.s64 = -2048786432;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2242
	ctx.r4.u64 = ctx.r11.u64 | 2242;
	// lis r11,19530
	ctx.r11.s64 = 1279918080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63546
	ctx.r11.u64 = ctx.r11.u64 | 63546;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD158;
	sub_8279BCE0(ctx, base);
	// lis r11,-21809
	ctx.r11.s64 = -1429274624;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33503
	ctx.r4.u64 = ctx.r11.u64 | 33503;
	// lis r11,-13102
	ctx.r11.s64 = -858652672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45001
	ctx.r11.u64 = ctx.r11.u64 | 45001;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD188;
	sub_8279BCE0(ctx, base);
	// lis r11,25340
	ctx.r11.s64 = 1660682240;
	// addi r3,r28,-9616
	ctx.r3.s64 = ctx.r28.s64 + -9616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24101
	ctx.r4.u64 = ctx.r11.u64 | 24101;
	// lis r11,23731
	ctx.r11.s64 = 1555234816;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51725
	ctx.r11.u64 = ctx.r11.u64 | 51725;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD1B8;
	sub_8279BCE0(ctx, base);
	// lis r11,19921
	ctx.r11.s64 = 1305542656;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54328
	ctx.r4.u64 = ctx.r11.u64 | 54328;
	// lis r11,-9173
	ctx.r11.s64 = -601161728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40446
	ctx.r11.u64 = ctx.r11.u64 | 40446;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD1E8;
	sub_8279BCE0(ctx, base);
	// lis r11,24692
	ctx.r11.s64 = 1618214912;
	// addi r3,r28,-9224
	ctx.r3.s64 = ctx.r28.s64 + -9224;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6632
	ctx.r4.u64 = ctx.r11.u64 | 6632;
	// lis r11,27819
	ctx.r11.s64 = 1823145984;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32055
	ctx.r11.u64 = ctx.r11.u64 | 32055;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD218;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,20313
	ctx.r11.s64 = 1331232768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,37877
	ctx.r4.u64 = ctx.r11.u64 | 37877;
	// lis r11,-5069
	ctx.r11.s64 = -332201984;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,10948
	ctx.r11.u64 = ctx.r11.u64 | 10948;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD248;
	sub_8279BCE0(ctx, base);
	// lis r11,-2970
	ctx.r11.s64 = -194641920;
	// addi r3,r28,-8656
	ctx.r3.s64 = ctx.r28.s64 + -8656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60947
	ctx.r4.u64 = ctx.r11.u64 | 60947;
	// lis r11,-22506
	ctx.r11.s64 = -1474953216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53113
	ctx.r11.u64 = ctx.r11.u64 | 53113;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD278;
	sub_8279BCE0(ctx, base);
	// lis r11,-9397
	ctx.r11.s64 = -615841792;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25614
	ctx.r4.u64 = ctx.r11.u64 | 25614;
	// lis r11,10382
	ctx.r11.s64 = 680394752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39050
	ctx.r11.u64 = ctx.r11.u64 | 39050;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD2A8;
	sub_8279BCE0(ctx, base);
	// lis r11,25012
	ctx.r11.s64 = 1639186432;
	// addi r3,r28,-8192
	ctx.r3.s64 = ctx.r28.s64 + -8192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35673
	ctx.r4.u64 = ctx.r11.u64 | 35673;
	// lis r11,5104
	ctx.r11.s64 = 334495744;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36084
	ctx.r11.u64 = ctx.r11.u64 | 36084;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD2D8;
	sub_8279BCE0(ctx, base);
	// lis r11,20121
	ctx.r11.s64 = 1318649856;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,324
	ctx.r4.u64 = ctx.r11.u64 | 324;
	// lis r11,-27800
	ctx.r11.s64 = -1821900800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56071
	ctx.r11.u64 = ctx.r11.u64 | 56071;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD308;
	sub_8279BCE0(ctx, base);
	// lis r11,-4332
	ctx.r11.s64 = -283901952;
	// addi r3,r28,-7552
	ctx.r3.s64 = ctx.r28.s64 + -7552;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49084
	ctx.r4.u64 = ctx.r11.u64 | 49084;
	// lis r11,16018
	ctx.r11.s64 = 1049755648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54416
	ctx.r11.u64 = ctx.r11.u64 | 54416;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD338;
	sub_8279BCE0(ctx, base);
	// lis r11,-16327
	ctx.r11.s64 = -1070006272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// ori r4,r11,13729
	ctx.r4.u64 = ctx.r11.u64 | 13729;
	// lis r11,-16886
	ctx.r11.s64 = -1106640896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33635
	ctx.r11.u64 = ctx.r11.u64 | 33635;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD368;
	sub_8279BCE0(ctx, base);
	// lis r11,9156
	ctx.r11.s64 = 600047616;
	// addi r3,r28,-7144
	ctx.r3.s64 = ctx.r28.s64 + -7144;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56156
	ctx.r4.u64 = ctx.r11.u64 | 56156;
	// lis r11,22924
	ctx.r11.s64 = 1502347264;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,766
	ctx.r11.u64 = ctx.r11.u64 | 766;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD398;
	sub_8279BCE0(ctx, base);
	// lis r11,3305
	ctx.r11.s64 = 216596480;
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20801
	ctx.r4.u64 = ctx.r11.u64 | 20801;
	// lis r11,-9964
	ctx.r11.s64 = -653000704;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21773
	ctx.r11.u64 = ctx.r11.u64 | 21773;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD3C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18474
	ctx.r11.s64 = -1210712064;
	// addi r3,r28,-6560
	ctx.r3.s64 = ctx.r28.s64 + -6560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11431
	ctx.r4.u64 = ctx.r11.u64 | 11431;
	// lis r11,-25295
	ctx.r11.s64 = -1657733120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45232
	ctx.r11.u64 = ctx.r11.u64 | 45232;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD3F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26373
	ctx.r11.s64 = -1728380928;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42682
	ctx.r4.u64 = ctx.r11.u64 | 42682;
	// lis r11,7593
	ctx.r11.s64 = 497614848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59203
	ctx.r11.u64 = ctx.r11.u64 | 59203;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD428;
	sub_8279BCE0(ctx, base);
	// lis r11,-5028
	ctx.r11.s64 = -329515008;
	// addi r3,r28,-5760
	ctx.r3.s64 = ctx.r28.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27328
	ctx.r4.u64 = ctx.r11.u64 | 27328;
	// lis r11,29137
	ctx.r11.s64 = 1909522432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37481
	ctx.r11.u64 = ctx.r11.u64 | 37481;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD458;
	sub_8279BCE0(ctx, base);
	// lis r11,-15503
	ctx.r11.s64 = -1016004608;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57565
	ctx.r4.u64 = ctx.r11.u64 | 57565;
	// lis r11,-3767
	ctx.r11.s64 = -246874112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50586
	ctx.r11.u64 = ctx.r11.u64 | 50586;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD488;
	sub_8279BCE0(ctx, base);
	// lis r11,29424
	ctx.r11.s64 = 1928331264;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,51651
	ctx.r4.u64 = ctx.r11.u64 | 51651;
	// lis r11,-18489
	ctx.r11.s64 = -1211695104;
	// ori r11,r11,1415
	ctx.r11.u64 = ctx.r11.u64 | 1415;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD4B8;
	sub_8279BCE0(ctx, base);
	// lis r11,24029
	ctx.r11.s64 = 1574764544;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17374
	ctx.r4.u64 = ctx.r11.u64 | 17374;
	// lis r11,14175
	ctx.r11.s64 = 928972800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21108
	ctx.r11.u64 = ctx.r11.u64 | 21108;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD4E8;
	sub_8279BCE0(ctx, base);
	// lis r11,28792
	ctx.r11.s64 = 1886912512;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36366
	ctx.r4.u64 = ctx.r11.u64 | 36366;
	// lis r11,-30753
	ctx.r11.s64 = -2015428608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45757
	ctx.r11.u64 = ctx.r11.u64 | 45757;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD518;
	sub_8279BCE0(ctx, base);
	// lis r11,24405
	ctx.r11.s64 = 1599406080;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1043
	ctx.r4.u64 = ctx.r11.u64 | 1043;
	// lis r11,1863
	ctx.r11.s64 = 122093568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58702
	ctx.r11.u64 = ctx.r11.u64 | 58702;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD548;
	sub_8279BCE0(ctx, base);
	// lis r11,-7062
	ctx.r11.s64 = -462815232;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31221
	ctx.r4.u64 = ctx.r11.u64 | 31221;
	// lis r11,17250
	ctx.r11.s64 = 1130496000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,243
	ctx.r11.u64 = ctx.r11.u64 | 243;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD578;
	sub_8279BCE0(ctx, base);
	// lis r11,-13497
	ctx.r11.s64 = -884539392;
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62440
	ctx.r4.u64 = ctx.r11.u64 | 62440;
	// lis r11,-15366
	ctx.r11.s64 = -1007026176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22272
	ctx.r11.u64 = ctx.r11.u64 | 22272;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD5A8;
	sub_8279BCE0(ctx, base);
	// lis r11,29112
	ctx.r11.s64 = 1907884032;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7359
	ctx.r4.u64 = ctx.r11.u64 | 7359;
	// lis r11,-1916
	ctx.r11.s64 = -125566976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17278
	ctx.r11.u64 = ctx.r11.u64 | 17278;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD5D8;
	sub_8279BCE0(ctx, base);
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,24213
	ctx.r11.s64 = 1586823168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38562
	ctx.r4.u64 = ctx.r11.u64 | 38562;
	// lis r11,30748
	ctx.r11.s64 = 2015100928;
	// ori r11,r11,5261
	ctx.r11.u64 = ctx.r11.u64 | 5261;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD608;
	sub_8279BCE0(ctx, base);
	// lis r11,-232
	ctx.r11.s64 = -15204352;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10330
	ctx.r4.u64 = ctx.r11.u64 | 10330;
	// lis r11,-10778
	ctx.r11.s64 = -706347008;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6938
	ctx.r11.u64 = ctx.r11.u64 | 6938;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD638;
	sub_8279BCE0(ctx, base);
	// lis r11,-12235
	ctx.r11.s64 = -801832960;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41543
	ctx.r4.u64 = ctx.r11.u64 | 41543;
	// lis r11,21886
	ctx.r11.s64 = 1434320896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19689
	ctx.r11.u64 = ctx.r11.u64 | 19689;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD668;
	sub_8279BCE0(ctx, base);
	// lis r11,13256
	ctx.r11.s64 = 868745216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19642
	ctx.r4.u64 = ctx.r11.u64 | 19642;
	// lis r11,-19720
	ctx.r11.s64 = -1292369920;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,52596
	ctx.r11.u64 = ctx.r11.u64 | 52596;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AD698;
	sub_8279BCE0(ctx, base);
	// lis r11,7397
	ctx.r11.s64 = 484769792;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50855
	ctx.r4.u64 = ctx.r11.u64 | 50855;
	// lis r11,12896
	ctx.r11.s64 = 845152256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39559
	ctx.r11.u64 = ctx.r11.u64 | 39559;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD6C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-22566
	ctx.r11.s64 = -1478885376;
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47937
	ctx.r4.u64 = ctx.r11.u64 | 47937;
	// lis r11,30277
	ctx.r11.s64 = 1984233472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32570
	ctx.r11.u64 = ctx.r11.u64 | 32570;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD6F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-30473
	ctx.r11.s64 = -1997078528;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12636
	ctx.r4.u64 = ctx.r11.u64 | 12636;
	// lis r11,-2339
	ctx.r11.s64 = -153288704;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10441
	ctx.r11.u64 = ctx.r11.u64 | 10441;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD728;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-944
	ctx.r11.s64 = -61865984;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r4,r11,64806
	ctx.r4.u64 = ctx.r11.u64 | 64806;
	// lis r11,-25947
	ctx.r11.s64 = -1700462592;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,24035
	ctx.r11.u64 = ctx.r11.u64 | 24035;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD758;
	sub_8279BCE0(ctx, base);
	// lis r11,-11395
	ctx.r11.s64 = -746782720;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30523
	ctx.r4.u64 = ctx.r11.u64 | 30523;
	// lis r11,6717
	ctx.r11.s64 = 440205312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2576
	ctx.r11.u64 = ctx.r11.u64 | 2576;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD788;
	sub_8279BCE0(ctx, base);
	// lis r11,6990
	ctx.r11.s64 = 458096640;
	// addi r3,r28,-9616
	ctx.r3.s64 = ctx.r28.s64 + -9616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43969
	ctx.r4.u64 = ctx.r11.u64 | 43969;
	// lis r11,-30116
	ctx.r11.s64 = -1973682176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28628
	ctx.r11.u64 = ctx.r11.u64 | 28628;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD7B8;
	sub_8279BCE0(ctx, base);
	// lis r11,13411
	ctx.r11.s64 = 878903296;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8668
	ctx.r4.u64 = ctx.r11.u64 | 8668;
	// lis r11,2756
	ctx.r11.s64 = 180617216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14375
	ctx.r11.u64 = ctx.r11.u64 | 14375;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD7E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-10338
	ctx.r11.s64 = -677511168;
	// addi r3,r28,-9224
	ctx.r3.s64 = ctx.r28.s64 + -9224;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53025
	ctx.r4.u64 = ctx.r11.u64 | 53025;
	// lis r11,-4798
	ctx.r11.s64 = -314441728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47546
	ctx.r11.u64 = ctx.r11.u64 | 47546;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD818;
	sub_8279BCE0(ctx, base);
	// lis r11,-1869
	ctx.r11.s64 = -122486784;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17724
	ctx.r4.u64 = ctx.r11.u64 | 17724;
	// lis r11,28122
	ctx.r11.s64 = 1843003392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61001
	ctx.r11.u64 = ctx.r11.u64 | 61001;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD848;
	sub_8279BCE0(ctx, base);
	// lis r11,17292
	ctx.r11.s64 = 1133248512;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-8656
	ctx.r3.s64 = ctx.r28.s64 + -8656;
	// ori r4,r11,14554
	ctx.r4.u64 = ctx.r11.u64 | 14554;
	// lis r11,10751
	ctx.r11.s64 = 704577536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3060
	ctx.r11.u64 = ctx.r11.u64 | 3060;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD878;
	sub_8279BCE0(ctx, base);
	// lis r11,27809
	ctx.r11.s64 = 1822490624;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45767
	ctx.r4.u64 = ctx.r11.u64 | 45767;
	// lis r11,-22169
	ctx.r11.s64 = -1452867584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23559
	ctx.r11.u64 = ctx.r11.u64 | 23559;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD8A8;
	sub_8279BCE0(ctx, base);
	// lis r11,6150
	ctx.r11.s64 = 403046400;
	// addi r3,r28,-8192
	ctx.r3.s64 = ctx.r28.s64 + -8192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32445
	ctx.r4.u64 = ctx.r11.u64 | 32445;
	// lis r11,-15073
	ctx.r11.s64 = -987824128;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10541
	ctx.r11.u64 = ctx.r11.u64 | 10541;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD8D8;
	sub_8279BCE0(ctx, base);
	// lis r11,14123
	ctx.r11.s64 = 925564928;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62624
	ctx.r4.u64 = ctx.r11.u64 | 62624;
	// lis r11,17799
	ctx.r11.s64 = 1166475264;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32478
	ctx.r11.u64 = ctx.r11.u64 | 32478;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD908;
	sub_8279BCE0(ctx, base);
	// lis r11,22782
	ctx.r11.s64 = 1493041152;
	// addi r3,r28,-7552
	ctx.r3.s64 = ctx.r28.s64 + -7552;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26997
	ctx.r4.u64 = ctx.r11.u64 | 26997;
	// lis r11,-16517
	ctx.r11.s64 = -1082458112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4125
	ctx.r11.u64 = ctx.r11.u64 | 4125;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD938;
	sub_8279BCE0(ctx, base);
	// lis r11,30675
	ctx.r11.s64 = 2010316800;
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58216
	ctx.r4.u64 = ctx.r11.u64 | 58216;
	// lis r11,16355
	ctx.r11.s64 = 1071841280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18414
	ctx.r11.u64 = ctx.r11.u64 | 18414;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD968;
	sub_8279BCE0(ctx, base);
	// lis r11,23158
	ctx.r11.s64 = 1517682688;
	// addi r3,r28,-7144
	ctx.r3.s64 = ctx.r28.s64 + -7144;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11960
	ctx.r4.u64 = ctx.r11.u64 | 11960;
	// lis r11,-28829
	ctx.r11.s64 = -1889337344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42791
	ctx.r11.u64 = ctx.r11.u64 | 42791;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD998;
	sub_8279BCE0(ctx, base);
	// lis r11,30043
	ctx.r11.s64 = 1968898048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,42149
	ctx.r4.u64 = ctx.r11.u64 | 42149;
	// lis r11,4091
	ctx.r11.s64 = 268107776;
	// ori r11,r11,61652
	ctx.r11.u64 = ctx.r11.u64 | 61652;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD9C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-12700
	ctx.r11.s64 = -832307200;
	// addi r3,r28,-6560
	ctx.r3.s64 = ctx.r28.s64 + -6560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55619
	ctx.r4.u64 = ctx.r11.u64 | 55619;
	// lis r11,19422
	ctx.r11.s64 = 1272840192;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5481
	ctx.r11.u64 = ctx.r11.u64 | 5481;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AD9F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-7863
	ctx.r11.s64 = -515309568;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21342
	ctx.r4.u64 = ctx.r11.u64 | 21342;
	// lis r11,-13498
	ctx.r11.s64 = -884604928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17050
	ctx.r11.u64 = ctx.r11.u64 | 17050;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADA28;
	sub_8279BCE0(ctx, base);
	// lis r11,-12250
	ctx.r11.s64 = -802816000;
	// addi r3,r28,-5760
	ctx.r3.s64 = ctx.r28.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33216
	ctx.r4.u64 = ctx.r11.u64 | 33216;
	// lis r11,27196
	ctx.r11.s64 = 1782317056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6012
	ctx.r11.u64 = ctx.r11.u64 | 6012;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADA58;
	sub_8279BCE0(ctx, base);
	// lis r11,-245
	ctx.r11.s64 = -16056320;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3037
	ctx.r4.u64 = ctx.r11.u64 | 3037;
	// lis r11,-5468
	ctx.r11.s64 = -358350848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16527
	ctx.r11.u64 = ctx.r11.u64 | 16527;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADA88;
	sub_8279BCE0(ctx, base);
	// lis r11,-28332
	ctx.r11.s64 = -1856765952;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34228
	ctx.r4.u64 = ctx.r11.u64 | 34228;
	// lis r11,25565
	ctx.r11.s64 = 1675427840;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60273
	ctx.r11.u64 = ctx.r11.u64 | 60273;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADAB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-16775
	ctx.r11.s64 = -1099366400;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4009
	ctx.r4.u64 = ctx.r11.u64 | 4009;
	// lis r11,-7355
	ctx.r11.s64 = -482017280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48258
	ctx.r11.u64 = ctx.r11.u64 | 48258;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADAE8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-13602
	ctx.r11.s64 = -891420672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50131
	ctx.r4.u64 = ctx.r11.u64 | 50131;
	// lis r11,-28867
	ctx.r11.s64 = -1891827712;
	// ori r11,r11,51624
	ctx.r11.u64 = ctx.r11.u64 | 51624;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADB18;
	sub_8279BCE0(ctx, base);
	// lis r11,-6669
	ctx.r11.s64 = -437059584;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18894
	ctx.r4.u64 = ctx.r11.u64 | 18894;
	// lis r11,4005
	ctx.r11.s64 = 262471680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40539
	ctx.r11.u64 = ctx.r11.u64 | 40539;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADB48;
	sub_8279BCE0(ctx, base);
	// lis r11,24268
	ctx.r11.s64 = 1590427648;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13352
	ctx.r4.u64 = ctx.r11.u64 | 13352;
	// lis r11,19328
	ctx.r11.s64 = 1266679808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31718
	ctx.r11.u64 = ctx.r11.u64 | 31718;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADB78;
	sub_8279BCE0(ctx, base);
	// lis r11,29153
	ctx.r11.s64 = 1910571008;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48693
	ctx.r4.u64 = ctx.r11.u64 | 48693;
	// lis r11,-13544
	ctx.r11.s64 = -887619584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11285
	ctx.r11.u64 = ctx.r11.u64 | 11285;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADBA8;
	sub_8279BCE0(ctx, base);
	// lis r11,8216
	ctx.r11.s64 = 538443776;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21405
	ctx.r4.u64 = ctx.r11.u64 | 21405;
	// lis r11,-27281
	ctx.r11.s64 = -1787887616;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34382
	ctx.r11.u64 = ctx.r11.u64 | 34382;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADBD8;
	sub_8279BCE0(ctx, base);
	// lis r11,3893
	ctx.r11.s64 = 255131648;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55680
	ctx.r4.u64 = ctx.r11.u64 | 55680;
	// lis r11,5623
	ctx.r11.s64 = 368508928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53693
	ctx.r11.u64 = ctx.r11.u64 | 53693;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADC08;
	sub_8279BCE0(ctx, base);
	// lis r11,7356
	ctx.r11.s64 = 482082816;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25645
	ctx.r4.u64 = ctx.r11.u64 | 25645;
	// lis r11,508
	ctx.r11.s64 = 33292288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62956
	ctx.r11.u64 = ctx.r11.u64 | 62956;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADC38;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,13201
	ctx.r11.s64 = 865140736;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,60976
	ctx.r4.u64 = ctx.r11.u64 | 60976;
	// lis r11,-32412
	ctx.r11.s64 = -2124152832;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r11,r11,41503
	ctx.r11.u64 = ctx.r11.u64 | 41503;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADC68;
	sub_8279BCE0(ctx, base);
	// lis r11,-30354
	ctx.r11.s64 = -1989279744;
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,359
	ctx.r4.u64 = ctx.r11.u64 | 359;
	// lis r11,-17894
	ctx.r11.s64 = -1172701184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46689
	ctx.r11.u64 = ctx.r11.u64 | 46689;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADC98;
	sub_8279BCE0(ctx, base);
	// lis r11,-22973
	ctx.r11.s64 = -1505558528;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35706
	ctx.r4.u64 = ctx.r11.u64 | 35706;
	// lis r11,14978
	ctx.r11.s64 = 981598208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57746
	ctx.r11.u64 = ctx.r11.u64 | 57746;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADCC8;
	sub_8279BCE0(ctx, base);
	// lis r11,7548
	ctx.r11.s64 = 494665728;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63132
	ctx.r4.u64 = ctx.r11.u64 | 63132;
	// lis r11,32423
	ctx.r11.s64 = 2124873728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1071
	ctx.r11.u64 = ctx.r11.u64 | 1071;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADCF8;
	sub_8279BCE0(ctx, base);
	// lis r11,12881
	ctx.r11.s64 = 844169216;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31873
	ctx.r4.u64 = ctx.r11.u64 | 31873;
	// lis r11,-449
	ctx.r11.s64 = -29425664;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21468
	ctx.r11.u64 = ctx.r11.u64 | 21468;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADD28;
	sub_8279BCE0(ctx, base);
	// lis r11,-21008
	ctx.r11.s64 = -1376780288;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45572
	ctx.r4.u64 = ctx.r11.u64 | 45572;
	// lis r11,-2226
	ctx.r11.s64 = -145883136;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39123
	ctx.r11.u64 = ctx.r11.u64 | 39123;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADD58;
	sub_8279BCE0(ctx, base);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// ori r4,r11,14361
	ctx.r4.u64 = ctx.r11.u64 | 14361;
	// lis r11,30678
	ctx.r11.s64 = 2010513408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53024
	ctx.r11.u64 = ctx.r11.u64 | 53024;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADD88;
	sub_8279BCE0(ctx, base);
	// lis r11,-1814
	ctx.r11.s64 = -118882304;
	// addi r3,r28,-4824
	ctx.r3.s64 = ctx.r28.s64 + -4824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59318
	ctx.r4.u64 = ctx.r11.u64 | 59318;
	// lis r11,24134
	ctx.r11.s64 = 1581645824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33058
	ctx.r11.u64 = ctx.r11.u64 | 33058;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADDB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-10297
	ctx.r11.s64 = -674824192;
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28075
	ctx.r4.u64 = ctx.r11.u64 | 28075;
	// lis r11,-8482
	ctx.r11.s64 = -555876352;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54993
	ctx.r11.u64 = ctx.r11.u64 | 54993;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADDE8;
	sub_8279BCE0(ctx, base);
	// lis r11,27960
	ctx.r11.s64 = 1832386560;
	// addi r3,r28,-4256
	ctx.r3.s64 = ctx.r28.s64 + -4256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33532
	ctx.r4.u64 = ctx.r11.u64 | 33532;
	// lis r11,-6752
	ctx.r11.s64 = -442499072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49839
	ctx.r11.u64 = ctx.r11.u64 | 49839;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADE18;
	sub_8279BCE0(ctx, base);
	// lis r11,16917
	ctx.r11.s64 = 1108672512;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2273
	ctx.r4.u64 = ctx.r11.u64 | 2273;
	// lis r11,25912
	ctx.r11.s64 = 1698168832;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,38236
	ctx.r11.u64 = ctx.r11.u64 | 38236;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824ADE48;
	sub_8279BCE0(ctx, base);
	// lis r11,-1750
	ctx.r11.s64 = -114688000;
	// addi r3,r28,-3584
	ctx.r3.s64 = ctx.r28.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29959
	ctx.r4.u64 = ctx.r11.u64 | 29959;
	// lis r11,8477
	ctx.r11.s64 = 555548672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28897
	ctx.r11.u64 = ctx.r11.u64 | 28897;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADE78;
	sub_8279BCE0(ctx, base);
	// lis r11,-10745
	ctx.r11.s64 = -704184320;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65306
	ctx.r4.u64 = ctx.r11.u64 | 65306;
	// lis r11,-24187
	ctx.r11.s64 = -1585119232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10002
	ctx.r11.u64 = ctx.r11.u64 | 10002;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADEA8;
	sub_8279BCE0(ctx, base);
	// lis r11,18854
	ctx.r11.s64 = 1235615744;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-2944
	ctx.r3.s64 = ctx.r28.s64 + -2944;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,12703
	ctx.r4.u64 = ctx.r11.u64 | 12703;
	// lis r11,-22284
	ctx.r11.s64 = -1460404224;
	// ori r11,r11,60445
	ctx.r11.u64 = ctx.r11.u64 | 60445;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADED8;
	sub_8279BCE0(ctx, base);
	// lis r11,26251
	ctx.r11.s64 = 1720385536;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48002
	ctx.r4.u64 = ctx.r11.u64 | 48002;
	// lis r11,10348
	ctx.r11.s64 = 678166528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48110
	ctx.r11.u64 = ctx.r11.u64 | 48110;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADF08;
	sub_8279BCE0(ctx, base);
	// lis r11,-17574
	ctx.r11.s64 = -1151729664;
	// addi r3,r28,-2208
	ctx.r3.s64 = ctx.r28.s64 + -2208;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9474
	ctx.r4.u64 = ctx.r11.u64 | 9474;
	// lis r11,27489
	ctx.r11.s64 = 1801519104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,65259
	ctx.r11.u64 = ctx.r11.u64 | 65259;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADF38;
	sub_8279BCE0(ctx, base);
	// lis r11,-27529
	ctx.r11.s64 = -1804140544;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44831
	ctx.r4.u64 = ctx.r11.u64 | 44831;
	// lis r11,-5127
	ctx.r11.s64 = -336003072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43288
	ctx.r11.u64 = ctx.r11.u64 | 43288;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADF68;
	sub_8279BCE0(ctx, base);
	// lis r11,-7984
	ctx.r11.s64 = -523239424;
	// addi r3,r28,-1624
	ctx.r3.s64 = ctx.r28.s64 + -1624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25445
	ctx.r4.u64 = ctx.r11.u64 | 25445;
	// lis r11,-30847
	ctx.r11.s64 = -2021588992;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56370
	ctx.r11.u64 = ctx.r11.u64 | 56370;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADF98;
	sub_8279BCE0(ctx, base);
	// lis r11,-12291
	ctx.r11.s64 = -805502976;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59768
	ctx.r4.u64 = ctx.r11.u64 | 59768;
	// lis r11,1817
	ctx.r11.s64 = 119078912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35777
	ctx.r11.u64 = ctx.r11.u64 | 35777;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADFC8;
	sub_8279BCE0(ctx, base);
	// lis r11,29890
	ctx.r11.s64 = 1958871040;
	// addi r3,r28,-936
	ctx.r3.s64 = ctx.r28.s64 + -936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38046
	ctx.r4.u64 = ctx.r11.u64 | 38046;
	// lis r11,17212
	ctx.r11.s64 = 1128005632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28284
	ctx.r11.u64 = ctx.r11.u64 | 28284;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824ADFF8;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,23535
	ctx.r11.s64 = 1542389760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7811
	ctx.r4.u64 = ctx.r11.u64 | 7811;
	// lis r11,-15452
	ctx.r11.s64 = -1012662272;
	// ori r11,r11,14735
	ctx.r11.u64 = ctx.r11.u64 | 14735;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE028;
	sub_8279BCE0(ctx, base);
	// lis r11,-32378
	ctx.r11.s64 = -2121924608;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52962
	ctx.r4.u64 = ctx.r11.u64 | 52962;
	// lis r11,2007
	ctx.r11.s64 = 131530752;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r11,r11,53836
	ctx.r11.u64 = ctx.r11.u64 | 53836;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AE058;
	sub_8279BCE0(ctx, base);
	// lis r11,-20821
	ctx.r11.s64 = -1364525056;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17663
	ctx.r4.u64 = ctx.r11.u64 | 17663;
	// lis r11,-30897
	ctx.r11.s64 = -2024865792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34239
	ctx.r11.u64 = ctx.r11.u64 | 34239;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE088;
	sub_8279BCE0(ctx, base);
	// lis r11,-5914
	ctx.r11.s64 = -387579904;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28752
	ctx.r4.u64 = ctx.r11.u64 | 28752;
	// lis r11,-19150
	ctx.r11.s64 = -1255014400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20136
	ctx.r11.u64 = ctx.r11.u64 | 20136;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE0B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-14389
	ctx.r11.s64 = -942997504;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64077
	ctx.r4.u64 = ctx.r11.u64 | 64077;
	// lis r11,13738
	ctx.r11.s64 = 900333568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6491
	ctx.r11.u64 = ctx.r11.u64 | 6491;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE0E8;
	sub_8279BCE0(ctx, base);
	// lis r11,32052
	ctx.r11.s64 = 2100559872;
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5402
	ctx.r4.u64 = ctx.r11.u64 | 5402;
	// lis r11,3796
	ctx.r11.s64 = 248774656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3365
	ctx.r11.u64 = ctx.r11.u64 | 3365;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE118;
	sub_8279BCE0(ctx, base);
	// lis r11,21017
	ctx.r11.s64 = 1377370112;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40711
	ctx.r4.u64 = ctx.r11.u64 | 40711;
	// lis r11,-29108
	ctx.r11.s64 = -1907621888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23254
	ctx.r11.u64 = ctx.r11.u64 | 23254;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE148;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-5850
	ctx.r11.s64 = -383385600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,58081
	ctx.r4.u64 = ctx.r11.u64 | 58081;
	// lis r11,-13719
	ctx.r11.s64 = -899088384;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,49003
	ctx.r11.u64 = ctx.r11.u64 | 49003;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE178;
	sub_8279BCE0(ctx, base);
	// lis r11,-14837
	ctx.r11.s64 = -972357632;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26876
	ctx.r4.u64 = ctx.r11.u64 | 26876;
	// lis r11,19185
	ctx.r11.s64 = 1257308160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59544
	ctx.r11.u64 = ctx.r11.u64 | 59544;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE1A8;
	sub_8279BCE0(ctx, base);
	// lis r11,22954
	ctx.r11.s64 = 1504313344;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42617
	ctx.r4.u64 = ctx.r11.u64 | 42617;
	// lis r11,17280
	ctx.r11.s64 = 1132462080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9111
	ctx.r11.u64 = ctx.r11.u64 | 9111;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE1D8;
	sub_8279BCE0(ctx, base);
	// lis r11,30343
	ctx.r11.s64 = 1988558848;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11364
	ctx.r4.u64 = ctx.r11.u64 | 11364;
	// lis r11,-15592
	ctx.r11.s64 = -1021837312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29796
	ctx.r11.u64 = ctx.r11.u64 | 29796;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE208;
	sub_8279BCE0(ctx, base);
	// lis r11,-21674
	ctx.r11.s64 = -1420427264;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45796
	ctx.r4.u64 = ctx.r11.u64 | 45796;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12641
	ctx.r11.u64 = ctx.r11.u64 | 12641;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE238;
	sub_8279BCE0(ctx, base);
	// lis r11,-31621
	ctx.r11.s64 = -2072313856;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14585
	ctx.r4.u64 = ctx.r11.u64 | 14585;
	// lis r11,141
	ctx.r11.s64 = 9240576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26258
	ctx.r11.u64 = ctx.r11.u64 | 26258;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE268;
	sub_8279BCE0(ctx, base);
	// lis r11,-3876
	ctx.r11.s64 = -254017536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// ori r4,r11,62595
	ctx.r4.u64 = ctx.r11.u64 | 62595;
	// lis r11,27893
	ctx.r11.s64 = 1827995648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5048
	ctx.r11.u64 = ctx.r11.u64 | 5048;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE298;
	sub_8279BCE0(ctx, base);
	// lis r11,-8207
	ctx.r11.s64 = -537853952;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32414
	ctx.r4.u64 = ctx.r11.u64 | 32414;
	// lis r11,-5011
	ctx.r11.s64 = -328400896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17483
	ctx.r11.u64 = ctx.r11.u64 | 17483;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE2C8;
	sub_8279BCE0(ctx, base);
	// lis r11,25806
	ctx.r11.s64 = 1691222016;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,888
	ctx.r4.u64 = ctx.r11.u64 | 888;
	// lis r11,-22456
	ctx.r11.s64 = -1471676416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41462
	ctx.r11.u64 = ctx.r11.u64 | 41462;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE2F8;
	sub_8279BCE0(ctx, base);
	// lis r11,19427
	ctx.r11.s64 = 1273167872;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35173
	ctx.r4.u64 = ctx.r11.u64 | 35173;
	// lis r11,10448
	ctx.r11.s64 = 684720128;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62981
	ctx.r11.u64 = ctx.r11.u64 | 62981;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE328;
	sub_8279BCE0(ctx, base);
	// lis r11,-28278
	ctx.r11.s64 = -1853227008;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22788
	ctx.r4.u64 = ctx.r11.u64 | 22788;
	// lis r11,-4957
	ctx.r11.s64 = -324861952;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7622
	ctx.r11.u64 = ctx.r11.u64 | 7622;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE358;
	sub_8279BCE0(ctx, base);
	// lis r11,-16729
	ctx.r11.s64 = -1096351744;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54041
	ctx.r4.u64 = ctx.r11.u64 | 54041;
	// lis r11,27707
	ctx.r11.s64 = 1815805952;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18997
	ctx.r11.u64 = ctx.r11.u64 | 18997;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE388;
	sub_8279BCE0(ctx, base);
	// lis r11,20224
	ctx.r11.s64 = 1325400064;
	// addi r3,r28,-4824
	ctx.r3.s64 = ctx.r28.s64 + -4824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12671
	ctx.r4.u64 = ctx.r11.u64 | 12671;
	// lis r11,-8273
	ctx.r11.s64 = -542179328;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17839
	ctx.r11.u64 = ctx.r11.u64 | 17839;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE3B8;
	sub_8279BCE0(ctx, base);
	// lis r11,24621
	ctx.r11.s64 = 1613561856;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,47970
	ctx.r4.u64 = ctx.r11.u64 | 47970;
	// lis r11,24375
	ctx.r11.s64 = 1597440000;
	// ori r11,r11,4700
	ctx.r11.u64 = ctx.r11.u64 | 4700;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE3E8;
	sub_8279BCE0(ctx, base);
	// lis r11,5258
	ctx.r11.s64 = 344588288;
	// addi r3,r28,-4256
	ctx.r3.s64 = ctx.r28.s64 + -4256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30488
	ctx.r4.u64 = ctx.r11.u64 | 30488;
	// lis r11,13135
	ctx.r11.s64 = 860815360;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26486
	ctx.r11.u64 = ctx.r11.u64 | 26486;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE418;
	sub_8279BCE0(ctx, base);
	// lis r11,15271
	ctx.r11.s64 = 1000800256;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64773
	ctx.r4.u64 = ctx.r11.u64 | 64773;
	// lis r11,-19497
	ctx.r11.s64 = -1277755392;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,12421
	ctx.r11.u64 = ctx.r11.u64 | 12421;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AE448;
	sub_8279BCE0(ctx, base);
	// lis r11,-32616
	ctx.r11.s64 = -2137522176;
	// addi r3,r28,-3584
	ctx.r3.s64 = ctx.r28.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32995
	ctx.r4.u64 = ctx.r11.u64 | 32995;
	// lis r11,-2062
	ctx.r11.s64 = -135135232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54584
	ctx.r11.u64 = ctx.r11.u64 | 54584;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE478;
	sub_8279BCE0(ctx, base);
	// lis r11,-20555
	ctx.r11.s64 = -1347092480;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2814
	ctx.r4.u64 = ctx.r11.u64 | 2814;
	// lis r11,30570
	ctx.r11.s64 = 2003435520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33483
	ctx.r11.u64 = ctx.r11.u64 | 33483;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE4A8;
	sub_8279BCE0(ctx, base);
	// lis r11,30172
	ctx.r11.s64 = 1977352192;
	// addi r3,r28,-2944
	ctx.r3.s64 = ctx.r28.s64 + -2944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55967
	ctx.r4.u64 = ctx.r11.u64 | 55967;
	// lis r11,-19687
	ctx.r11.s64 = -1290207232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26888
	ctx.r11.u64 = ctx.r11.u64 | 26888;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE4D8;
	sub_8279BCE0(ctx, base);
	// lis r11,23281
	ctx.r11.s64 = 1525743616;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20610
	ctx.r4.u64 = ctx.r11.u64 | 20610;
	// lis r11,13185
	ctx.r11.s64 = 864092160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16123
	ctx.r11.u64 = ctx.r11.u64 | 16123;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE508;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-2208
	ctx.r3.s64 = ctx.r28.s64 + -2208;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-15640
	ctx.r11.s64 = -1024983040;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53478
	ctx.r4.u64 = ctx.r11.u64 | 53478;
	// lis r11,-17010
	ctx.r11.s64 = -1114767360;
	// ori r11,r11,23346
	ctx.r11.u64 = ctx.r11.u64 | 23346;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE538;
	sub_8279BCE0(ctx, base);
	// lis r11,-4667
	ctx.r11.s64 = -305856512;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23291
	ctx.r4.u64 = ctx.r11.u64 | 23291;
	// lis r11,15638
	ctx.r11.s64 = 1024851968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3265
	ctx.r11.u64 = ctx.r11.u64 | 3265;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE568;
	sub_8279BCE0(ctx, base);
	// lis r11,-9046
	ctx.r11.s64 = -592838656;
	// addi r3,r28,-1624
	ctx.r3.s64 = ctx.r28.s64 + -1624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34917
	ctx.r4.u64 = ctx.r11.u64 | 34917;
	// lis r11,-25492
	ctx.r11.s64 = -1670643712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22823
	ctx.r11.u64 = ctx.r11.u64 | 22823;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE598;
	sub_8279BCE0(ctx, base);
	// lis r11,-3193
	ctx.r11.s64 = -209256448;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,632
	ctx.r4.u64 = ctx.r11.u64 | 632;
	// lis r11,7412
	ctx.r11.s64 = 485752832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3796
	ctx.r11.u64 = ctx.r11.u64 | 3796;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE5C8;
	sub_8279BCE0(ctx, base);
	// lis r11,18616
	ctx.r11.s64 = 1220018176;
	// addi r3,r28,-936
	ctx.r3.s64 = ctx.r28.s64 + -936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32670
	ctx.r4.u64 = ctx.r11.u64 | 32670;
	// lis r11,22737
	ctx.r11.s64 = 1490092032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60265
	ctx.r11.u64 = ctx.r11.u64 | 60265;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE5F8;
	sub_8279BCE0(ctx, base);
	// lis r11,26517
	ctx.r11.s64 = 1737818112;
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62851
	ctx.r4.u64 = ctx.r11.u64 | 62851;
	// lis r11,-10167
	ctx.r11.s64 = -666304512;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48282
	ctx.r11.u64 = ctx.r11.u64 | 48282;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE628;
	sub_8279BCE0(ctx, base);
	// lis r11,-1996
	ctx.r11.s64 = -130809856;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15110
	ctx.r4.u64 = ctx.r11.u64 | 15110;
	// lis r11,-11976
	ctx.r11.s64 = -784859136;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r11,r11,30613
	ctx.r11.u64 = ctx.r11.u64 | 30613;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AE658;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-10471
	ctx.r11.s64 = -686227456;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,45339
	ctx.r4.u64 = ctx.r11.u64 | 45339;
	// lis r11,20896
	ctx.r11.s64 = 1369440256;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r11,r11,8294
	ctx.r11.u64 = ctx.r11.u64 | 8294;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE688;
	sub_8279BCE0(ctx, base);
	// lis r11,-19226
	ctx.r11.s64 = -1259995136;
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41541
	ctx.r4.u64 = ctx.r11.u64 | 41541;
	// lis r11,4783
	ctx.r11.s64 = 313458688;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10056
	ctx.r11.u64 = ctx.r11.u64 | 10056;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE6B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25653
	ctx.r11.s64 = -1681195008;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10328
	ctx.r4.u64 = ctx.r11.u64 | 10328;
	// lis r11,-28105
	ctx.r11.s64 = -1841889280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28859
	ctx.r11.u64 = ctx.r11.u64 | 28859;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE6E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-3162
	ctx.r11.s64 = -207224832;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64364
	ctx.r4.u64 = ctx.r11.u64 | 64364;
	// lis r11,-4171
	ctx.r11.s64 = -273350656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45246
	ctx.r11.u64 = ctx.r11.u64 | 45246;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE718;
	sub_8279BCE0(ctx, base);
	// lis r11,-9077
	ctx.r11.s64 = -594870272;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29041
	ctx.r4.u64 = ctx.r11.u64 | 29041;
	// lis r11,28461
	ctx.r11.s64 = 1865220096;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59213
	ctx.r11.u64 = ctx.r11.u64 | 59213;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE748;
	sub_8279BCE0(ctx, base);
	// lis r11,26548
	ctx.r11.s64 = 1739849728;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3223
	ctx.r4.u64 = ctx.r11.u64 | 3223;
	// lis r11,11016
	ctx.r11.s64 = 721944576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,752
	ctx.r11.u64 = ctx.r11.u64 | 752;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE778;
	sub_8279BCE0(ctx, base);
	// lis r11,18585
	ctx.r11.s64 = 1217986560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// ori r4,r11,34442
	ctx.r4.u64 = ctx.r11.u64 | 34442;
	// lis r11,-21616
	ctx.r11.s64 = -1416626176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21763
	ctx.r11.u64 = ctx.r11.u64 | 21763;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE7A8;
	sub_8279BCE0(ctx, base);
	// lis r11,15422
	ctx.r11.s64 = 1010696192;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19184
	ctx.r4.u64 = ctx.r11.u64 | 19184;
	// lis r11,-14360
	ctx.r11.s64 = -941096960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8233
	ctx.r11.u64 = ctx.r11.u64 | 8233;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE7D8;
	sub_8279BCE0(ctx, base);
	// lis r11,4883
	ctx.r11.s64 = 320012288;
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49389
	ctx.r4.u64 = ctx.r11.u64 | 49389;
	// lis r11,18288
	ctx.r11.s64 = 1198522368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30682
	ctx.r11.u64 = ctx.r11.u64 | 30682;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE808;
	sub_8279BCE0(ctx, base);
	// lis r11,31942
	ctx.r11.s64 = 2093350912;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23864
	ctx.r4.u64 = ctx.r11.u64 | 23864;
	// lis r11,-17012
	ctx.r11.s64 = -1114898432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6425
	ctx.r11.u64 = ctx.r11.u64 | 6425;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE838;
	sub_8279BCE0(ctx, base);
	// lis r11,21483
	ctx.r11.s64 = 1407909888;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55077
	ctx.r4.u64 = ctx.r11.u64 | 55077;
	// lis r11,15636
	ctx.r11.s64 = 1024720896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20202
	ctx.r11.u64 = ctx.r11.u64 | 20202;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE868;
	sub_8279BCE0(ctx, base);
	// lis r11,32334
	ctx.r11.s64 = 2119041024;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6901
	ctx.r4.u64 = ctx.r11.u64 | 6901;
	// lis r11,-29292
	ctx.r11.s64 = -1919680512;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,44579
	ctx.r11.u64 = ctx.r11.u64 | 44579;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AE898;
	sub_8279BCE0(ctx, base);
	// lis r11,20835
	ctx.r11.s64 = 1365442560;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37096
	ctx.r4.u64 = ctx.r11.u64 | 37096;
	// lis r11,3340
	ctx.r11.s64 = 218890240;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63952
	ctx.r11.u64 = ctx.r11.u64 | 63952;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE8C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5540
	ctx.r11.s64 = -363069440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,60686
	ctx.r4.u64 = ctx.r11.u64 | 60686;
	// lis r11,18729
	ctx.r11.s64 = 1227423744;
	// ori r11,r11,7277
	ctx.r11.u64 = ctx.r11.u64 | 7277;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE8F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-14991
	ctx.r11.s64 = -982450176;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26387
	ctx.r4.u64 = ctx.r11.u64 | 26387;
	// lis r11,-13903
	ctx.r11.s64 = -911147008;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19358
	ctx.r11.u64 = ctx.r11.u64 | 19358;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE928;
	sub_8279BCE0(ctx, base);
	// lis r11,32654
	ctx.r11.s64 = 2140012544;
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34884
	ctx.r4.u64 = ctx.r11.u64 | 34884;
	// lis r11,-3377
	ctx.r11.s64 = -221315072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24544
	ctx.r11.u64 = ctx.r11.u64 | 24544;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE958;
	sub_8279BCE0(ctx, base);
	// lis r11,20643
	ctx.r11.s64 = 1352859648;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,601
	ctx.r4.u64 = ctx.r11.u64 | 601;
	// lis r11,29271
	ctx.r11.s64 = 1918304256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2067
	ctx.r11.u64 = ctx.r11.u64 | 2067;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE988;
	sub_8279BCE0(ctx, base);
	// lis r11,-26480
	ctx.r11.s64 = -1735393280;
	// addi r3,r28,-9616
	ctx.r3.s64 = ctx.r28.s64 + -9616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56995
	ctx.r4.u64 = ctx.r11.u64 | 56995;
	// lis r11,-7626
	ctx.r11.s64 = -499777536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28119
	ctx.r11.u64 = ctx.r11.u64 | 28119;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE9B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18499
	ctx.r11.s64 = -1212350464;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21694
	ctx.r4.u64 = ctx.r11.u64 | 21694;
	// lis r11,25262
	ctx.r11.s64 = 1655570432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14884
	ctx.r11.u64 = ctx.r11.u64 | 14884;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AE9E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26088
	ctx.r11.s64 = -1709703168;
	// addi r3,r28,-9224
	ctx.r3.s64 = ctx.r28.s64 + -9224;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39278
	ctx.r4.u64 = ctx.r11.u64 | 39278;
	// lis r11,-11730
	ctx.r11.s64 = -768737280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56045
	ctx.r11.u64 = ctx.r11.u64 | 56045;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEA18;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-19147
	ctx.r11.s64 = -1254817792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4979
	ctx.r4.u64 = ctx.r11.u64 | 4979;
	// lis r11,21174
	ctx.r11.s64 = 1387659264;
	// ori r11,r11,36126
	ctx.r11.u64 = ctx.r11.u64 | 36126;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEA48;
	sub_8279BCE0(ctx, base);
	// lis r11,3594
	ctx.r11.s64 = 235536384;
	// addi r3,r28,-8656
	ctx.r3.s64 = ctx.r28.s64 + -8656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28309
	ctx.r4.u64 = ctx.r11.u64 | 28309;
	// lis r11,5779
	ctx.r11.s64 = 378732544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26787
	ctx.r11.u64 = ctx.r11.u64 | 26787;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEA78;
	sub_8279BCE0(ctx, base);
	// lis r11,8487
	ctx.r11.s64 = 556204032;
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58504
	ctx.r4.u64 = ctx.r11.u64 | 58504;
	// lis r11,-27125
	ctx.r11.s64 = -1777664000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16208
	ctx.r11.u64 = ctx.r11.u64 | 16208;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEAA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25640
	ctx.r11.s64 = -1680343040;
	// addi r3,r28,-8192
	ctx.r3.s64 = ctx.r28.s64 + -8192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3039
	ctx.r4.u64 = ctx.r11.u64 | 3039;
	// lis r11,-21131
	ctx.r11.s64 = -1384841216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11054
	ctx.r11.u64 = ctx.r11.u64 | 11054;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEAD8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19211
	ctx.r11.s64 = -1259012096;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33218
	ctx.r4.u64 = ctx.r11.u64 | 33218;
	// lis r11,11757
	ctx.r11.s64 = 770506752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31965
	ctx.r11.u64 = ctx.r11.u64 | 31965;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEB08;
	sub_8279BCE0(ctx, base);
	// lis r11,5496
	ctx.r11.s64 = 360185856;
	// addi r3,r28,-7552
	ctx.r3.s64 = ctx.r28.s64 + -7552;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16186
	ctx.r4.u64 = ctx.r11.u64 | 16186;
	// lis r11,-32745
	ctx.r11.s64 = -2145976320;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29514
	ctx.r11.u64 = ctx.r11.u64 | 29514;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEB38;
	sub_8279BCE0(ctx, base);
	// lis r11,14933
	ctx.r11.s64 = 978649088;
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46375
	ctx.r4.u64 = ctx.r11.u64 | 46375;
	// lis r11,143
	ctx.r11.s64 = 9371648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9401
	ctx.r11.u64 = ctx.r11.u64 | 9401;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEB68;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-7144
	ctx.r3.s64 = ctx.r28.s64 + -7144;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-9816
	ctx.r11.s64 = -643301376;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,23514
	ctx.r4.u64 = ctx.r11.u64 | 23514;
	// lis r11,-6391
	ctx.r11.s64 = -418840576;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,42276
	ctx.r11.u64 = ctx.r11.u64 | 42276;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEB98;
	sub_8279BCE0(ctx, base);
	// lis r11,-2427
	ctx.r11.s64 = -159055872;
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53703
	ctx.r4.u64 = ctx.r11.u64 | 53703;
	// lis r11,26513
	ctx.r11.s64 = 1737555968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62167
	ctx.r11.u64 = ctx.r11.u64 | 62167;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEBC8;
	sub_8279BCE0(ctx, base);
	// lis r11,19898
	ctx.r11.s64 = 1304035328;
	// addi r3,r28,-6560
	ctx.r3.s64 = ctx.r28.s64 + -6560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44065
	ctx.r4.u64 = ctx.r11.u64 | 44065;
	// lis r11,9140
	ctx.r11.s64 = 598999040;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5994
	ctx.r11.u64 = ctx.r11.u64 | 5994;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEBF8;
	sub_8279BCE0(ctx, base);
	// lis r11,25239
	ctx.r11.s64 = 1654063104;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9788
	ctx.r4.u64 = ctx.r11.u64 | 9788;
	// lis r11,-23764
	ctx.r11.s64 = -1557397504;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16537
	ctx.r11.u64 = ctx.r11.u64 | 16537;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEC28;
	sub_8279BCE0(ctx, base);
	// lis r11,5680
	ctx.r11.s64 = 372244480;
	// addi r3,r28,-5760
	ctx.r3.s64 = ctx.r28.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59974
	ctx.r4.u64 = ctx.r11.u64 | 59974;
	// lis r11,-12460
	ctx.r11.s64 = -816578560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13747
	ctx.r11.u64 = ctx.r11.u64 | 13747;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEC58;
	sub_8279BCE0(ctx, base);
	// lis r11,14621
	ctx.r11.s64 = 958201856;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24667
	ctx.r4.u64 = ctx.r11.u64 | 24667;
	// lis r11,20428
	ctx.r11.s64 = 1338769408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25152
	ctx.r11.u64 = ctx.r11.u64 | 25152;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEC88;
	sub_8279BCE0(ctx, base);
	// lis r11,-30564
	ctx.r11.s64 = -2003042304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-6280
	ctx.r3.s64 = ctx.r25.s64 + -6280;
	// ori r4,r11,18757
	ctx.r4.u64 = ctx.r11.u64 | 18757;
	// lis r11,2370
	ctx.r11.s64 = 155320320;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41565
	ctx.r11.u64 = ctx.r11.u64 | 41565;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AECB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-22607
	ctx.r11.s64 = -1481572352;
	// addi r3,r25,-5944
	ctx.r3.s64 = ctx.r25.s64 + -5944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50008
	ctx.r4.u64 = ctx.r11.u64 | 50008;
	// lis r11,-30246
	ctx.r11.s64 = -1982201856;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62894
	ctx.r11.u64 = ctx.r11.u64 | 62894;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AECE8;
	sub_8279BCE0(ctx, base);
	// lis r11,-30188
	ctx.r11.s64 = -1978400768;
	// addi r3,r25,-5184
	ctx.r3.s64 = ctx.r25.s64 + -5184;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3720
	ctx.r4.u64 = ctx.r11.u64 | 3720;
	// lis r11,14682
	ctx.r11.s64 = 962199552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5479
	ctx.r11.u64 = ctx.r11.u64 | 5479;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AED18;
	sub_8279BCE0(ctx, base);
	// lis r11,-23239
	ctx.r11.s64 = -1522991104;
	// addi r3,r25,-4672
	ctx.r3.s64 = ctx.r25.s64 + -4672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33941
	ctx.r4.u64 = ctx.r11.u64 | 33941;
	// lis r11,-17982
	ctx.r11.s64 = -1178468352;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17044
	ctx.r11.u64 = ctx.r11.u64 | 17044;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AED48;
	sub_8279BCE0(ctx, base);
	// lis r11,7686
	ctx.r11.s64 = 503709696;
	// addi r3,r25,-3896
	ctx.r3.s64 = ctx.r25.s64 + -3896;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63859
	ctx.r4.u64 = ctx.r11.u64 | 63859;
	// lis r11,-537
	ctx.r11.s64 = -35192832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42793
	ctx.r11.u64 = ctx.r11.u64 | 42793;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AED78;
	sub_8279BCE0(ctx, base);
	// lis r11,12587
	ctx.r11.s64 = 824901632;
	// addi r3,r25,-3504
	ctx.r3.s64 = ctx.r25.s64 + -3504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29550
	ctx.r4.u64 = ctx.r11.u64 | 29550;
	// lis r11,32127
	ctx.r11.s64 = 2105475072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61658
	ctx.r11.u64 = ctx.r11.u64 | 61658;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEDA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29740
	ctx.r11.s64 = -1949040640;
	// addi r3,r25,-2696
	ctx.r3.s64 = ctx.r25.s64 + -2696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39993
	ctx.r4.u64 = ctx.r11.u64 | 39993;
	// lis r11,17921
	ctx.r11.s64 = 1174470656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58532
	ctx.r11.u64 = ctx.r11.u64 | 58532;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEDD8;
	sub_8279BCE0(ctx, base);
	// lis r11,-23303
	ctx.r11.s64 = -1527185408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r25,-2128
	ctx.r3.s64 = ctx.r25.s64 + -2128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,5668
	ctx.r4.u64 = ctx.r11.u64 | 5668;
	// lis r11,-14695
	ctx.r11.s64 = -963051520;
	// ori r11,r11,45911
	ctx.r11.u64 = ctx.r11.u64 | 45911;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEE08;
	sub_8279BCE0(ctx, base);
	// lis r11,1396
	ctx.r11.s64 = 91488256;
	// addi r3,r25,-1304
	ctx.r3.s64 = ctx.r25.s64 + -1304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43228
	ctx.r4.u64 = ctx.r11.u64 | 43228;
	// lis r11,27491
	ctx.r11.s64 = 1801650176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48320
	ctx.r11.u64 = ctx.r11.u64 | 48320;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEE38;
	sub_8279BCE0(ctx, base);
	// lis r11,10841
	ctx.r11.s64 = 710475776;
	// addi r3,r25,-952
	ctx.r3.s64 = ctx.r25.s64 + -952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8897
	ctx.r4.u64 = ctx.r11.u64 | 8897;
	// lis r11,-5125
	ctx.r11.s64 = -335872000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60211
	ctx.r11.u64 = ctx.r11.u64 | 60211;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEE68;
	sub_8279BCE0(ctx, base);
	// lis r11,-13916
	ctx.r11.s64 = -911998976;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52284
	ctx.r4.u64 = ctx.r11.u64 | 52284;
	// lis r11,3197
	ctx.r11.s64 = 209518592;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,27310
	ctx.r11.u64 = ctx.r11.u64 | 27310;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AEE98;
	sub_8279BCE0(ctx, base);
	// lis r11,-6519
	ctx.r11.s64 = -427229184;
	// addi r3,r30,-32328
	ctx.r3.s64 = ctx.r30.s64 + -32328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17953
	ctx.r4.u64 = ctx.r11.u64 | 17953;
	// lis r11,-29467
	ctx.r11.s64 = -1931149312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15709
	ctx.r11.u64 = ctx.r11.u64 | 15709;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEEC8;
	sub_8279BCE0(ctx, base);
	// lis r11,23990
	ctx.r11.s64 = 1572208640;
	// addi r3,r30,-31360
	ctx.r3.s64 = ctx.r30.s64 + -31360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15303
	ctx.r4.u64 = ctx.r11.u64 | 15303;
	// lis r11,-14144
	ctx.r11.s64 = -926941184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55520
	ctx.r11.u64 = ctx.r11.u64 | 55520;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEEF8;
	sub_8279BCE0(ctx, base);
	// lis r11,29339
	ctx.r11.s64 = 1922760704;
	// addi r3,r30,-30616
	ctx.r3.s64 = ctx.r30.s64 + -30616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45530
	ctx.r4.u64 = ctx.r11.u64 | 45530;
	// lis r11,18520
	ctx.r11.s64 = 1213726720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36627
	ctx.r11.u64 = ctx.r11.u64 | 36627;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEF28;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-29632
	ctx.r3.s64 = ctx.r30.s64 + -29632;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,1596
	ctx.r11.s64 = 104595456;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32160
	ctx.r4.u64 = ctx.r11.u64 | 32160;
	// lis r11,9248
	ctx.r11.s64 = 606076928;
	// ori r11,r11,64057
	ctx.r11.u64 = ctx.r11.u64 | 64057;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEF58;
	sub_8279BCE0(ctx, base);
	// lis r11,10513
	ctx.r11.s64 = 688979968;
	// addi r3,r30,-28752
	ctx.r3.s64 = ctx.r30.s64 + -28752;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63421
	ctx.r4.u64 = ctx.r11.u64 | 63421;
	// lis r11,-23368
	ctx.r11.s64 = -1531445248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44490
	ctx.r11.u64 = ctx.r11.u64 | 44490;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEF88;
	sub_8279BCE0(ctx, base);
	// lis r11,-7902
	ctx.r11.s64 = -517865472;
	// addi r3,r28,-9616
	ctx.r3.s64 = ctx.r28.s64 + -9616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11079
	ctx.r4.u64 = ctx.r11.u64 | 11079;
	// lis r11,13529
	ctx.r11.s64 = 886636544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51214
	ctx.r11.u64 = ctx.r11.u64 | 51214;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEFB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-12785
	ctx.r11.s64 = -837877760;
	// addi r3,r30,-27272
	ctx.r3.s64 = ctx.r30.s64 + -27272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41306
	ctx.r4.u64 = ctx.r11.u64 | 41306;
	// lis r11,-19391
	ctx.r11.s64 = -1270808576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40957
	ctx.r11.u64 = ctx.r11.u64 | 40957;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AEFE8;
	sub_8279BCE0(ctx, base);
	// lis r11,11762
	ctx.r11.s64 = 770834432;
	// addi r3,r28,-9224
	ctx.r3.s64 = ctx.r28.s64 + -9224;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20391
	ctx.r4.u64 = ctx.r11.u64 | 20391;
	// lis r11,21447
	ctx.r11.s64 = 1405550592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7776
	ctx.r11.u64 = ctx.r11.u64 | 7776;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF018;
	sub_8279BCE0(ctx, base);
	// lis r11,735
	ctx.r11.s64 = 48168960;
	// addi r3,r30,-25832
	ctx.r3.s64 = ctx.r30.s64 + -25832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50618
	ctx.r4.u64 = ctx.r11.u64 | 50618;
	// lis r11,-11425
	ctx.r11.s64 = -748748800;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18835
	ctx.r11.u64 = ctx.r11.u64 | 18835;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF048;
	sub_8279BCE0(ctx, base);
	// lis r11,-17952
	ctx.r11.s64 = -1176502272;
	// addi r3,r28,-8656
	ctx.r3.s64 = ctx.r28.s64 + -8656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47196
	ctx.r4.u64 = ctx.r11.u64 | 47196;
	// lis r11,-26758
	ctx.r11.s64 = -1753612288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44078
	ctx.r11.u64 = ctx.r11.u64 | 44078;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF078;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-24408
	ctx.r3.s64 = ctx.r30.s64 + -24408;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-26931
	ctx.r11.s64 = -1764950016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,12865
	ctx.r4.u64 = ctx.r11.u64 | 12865;
	// lis r11,6114
	ctx.r11.s64 = 400687104;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,64477
	ctx.r11.u64 = ctx.r11.u64 | 64477;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF0A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-7574
	ctx.r11.s64 = -496369664;
	// addi r3,r28,-8192
	ctx.r3.s64 = ctx.r28.s64 + -8192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65083
	ctx.r4.u64 = ctx.r11.u64 | 65083;
	// lis r11,31642
	ctx.r11.s64 = 2073690112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36599
	ctx.r11.u64 = ctx.r11.u64 | 36599;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF0D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-12985
	ctx.r11.s64 = -850984960;
	// addi r3,r30,-22848
	ctx.r3.s64 = ctx.r30.s64 + -22848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29734
	ctx.r4.u64 = ctx.r11.u64 | 29734;
	// lis r11,-1278
	ctx.r11.s64 = -83755008;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55556
	ctx.r11.u64 = ctx.r11.u64 | 55556;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF108;
	sub_8279BCE0(ctx, base);
	// lis r11,-23918
	ctx.r11.s64 = -1567490048;
	// addi r3,r28,-7552
	ctx.r3.s64 = ctx.r28.s64 + -7552;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59891
	ctx.r4.u64 = ctx.r11.u64 | 59891;
	// lis r11,510
	ctx.r11.s64 = 33423360;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47047
	ctx.r11.u64 = ctx.r11.u64 | 47047;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF138;
	sub_8279BCE0(ctx, base);
	// lis r11,-29249
	ctx.r11.s64 = -1916862464;
	// addi r3,r30,-21400
	ctx.r3.s64 = ctx.r30.s64 + -21400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25582
	ctx.r4.u64 = ctx.r11.u64 | 25582;
	// lis r11,-32410
	ctx.r11.s64 = -2124021760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57396
	ctx.r11.u64 = ctx.r11.u64 | 57396;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF168;
	sub_8279BCE0(ctx, base);
	// lis r11,-24550
	ctx.r11.s64 = -1608908800;
	// addi r3,r28,-7144
	ctx.r3.s64 = ctx.r28.s64 + -7144;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44606
	ctx.r4.u64 = ctx.r11.u64 | 44606;
	// lis r11,12774
	ctx.r11.s64 = 837156864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 | 253;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF198;
	sub_8279BCE0(ctx, base);
	// lis r11,-28873
	ctx.r11.s64 = -1892220928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-19696
	ctx.r3.s64 = ctx.r30.s64 + -19696;
	// ori r4,r11,9251
	ctx.r4.u64 = ctx.r11.u64 | 9251;
	// lis r11,-20098
	ctx.r11.s64 = -1317142528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22286
	ctx.r11.u64 = ctx.r11.u64 | 22286;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF1C8;
	sub_8279BCE0(ctx, base);
	// lis r11,13320
	ctx.r11.s64 = 872939520;
	// addi r3,r28,-6560
	ctx.r3.s64 = ctx.r28.s64 + -6560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22981
	ctx.r4.u64 = ctx.r11.u64 | 22981;
	// lis r11,-2725
	ctx.r11.s64 = -178585600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45747
	ctx.r11.u64 = ctx.r11.u64 | 45747;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF1F8;
	sub_8279BCE0(ctx, base);
	// lis r11,6949
	ctx.r11.s64 = 455409664;
	// addi r3,r30,-17824
	ctx.r3.s64 = ctx.r30.s64 + -17824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54232
	ctx.r4.u64 = ctx.r11.u64 | 54232;
	// lis r11,30147
	ctx.r11.s64 = 1975713792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58688
	ctx.r11.u64 = ctx.r11.u64 | 58688;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF228;
	sub_8279BCE0(ctx, base);
	// lis r11,10826
	ctx.r11.s64 = 709492736;
	// addi r3,r28,-5760
	ctx.r3.s64 = ctx.r28.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,326
	ctx.r4.u64 = ctx.r11.u64 | 326;
	// lis r11,-11079
	ctx.r11.s64 = -726073344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45222
	ctx.r11.u64 = ctx.r11.u64 | 45222;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF258;
	sub_8279BCE0(ctx, base);
	// lis r11,1383
	ctx.r11.s64 = 90636288;
	// addi r3,r30,-15792
	ctx.r3.s64 = ctx.r30.s64 + -15792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35675
	ctx.r4.u64 = ctx.r11.u64 | 35675;
	// lis r11,21537
	ctx.r11.s64 = 1411448832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59221
	ctx.r11.u64 = ctx.r11.u64 | 59221;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF288;
	sub_8279BCE0(ctx, base);
	// lis r11,27448
	ctx.r11.s64 = 1798832128;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1330
	ctx.r4.u64 = ctx.r11.u64 | 1330;
	// lis r11,-8872
	ctx.r11.s64 = -581435392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19627
	ctx.r11.u64 = ctx.r11.u64 | 19627;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF2B8;
	sub_8279BCE0(ctx, base);
	// lis r11,17429
	ctx.r11.s64 = 1142226944;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36655
	ctx.r4.u64 = ctx.r11.u64 | 36655;
	// lis r11,24000
	ctx.r11.s64 = 1572864000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7000
	ctx.r11.u64 = ctx.r11.u64 | 7000;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF2E8;
	sub_8279BCE0(ctx, base);
	// lis r11,12466
	ctx.r11.s64 = 816971776;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,17237
	ctx.r4.u64 = ctx.r11.u64 | 17237;
	// lis r11,12728
	ctx.r11.s64 = 834142208;
	// ori r11,r11,28274
	ctx.r11.u64 = ctx.r11.u64 | 28274;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF318;
	sub_8279BCE0(ctx, base);
	// lis r11,8095
	ctx.r11.s64 = 530513920;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51528
	ctx.r4.u64 = ctx.r11.u64 | 51528;
	// lis r11,-20192
	ctx.r11.s64 = -1323302912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14721
	ctx.r11.u64 = ctx.r11.u64 | 14721;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF348;
	sub_8279BCE0(ctx, base);
	// lis r11,-23392
	ctx.r11.s64 = -1533018112;
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46254
	ctx.r4.u64 = ctx.r11.u64 | 46254;
	// lis r11,-2811
	ctx.r11.s64 = -184221696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56380
	ctx.r11.u64 = ctx.r11.u64 | 56380;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF378;
	sub_8279BCE0(ctx, base);
	// lis r11,-29811
	ctx.r11.s64 = -1953693696;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16051
	ctx.r4.u64 = ctx.r11.u64 | 16051;
	// lis r11,30109
	ctx.r11.s64 = 1973223424;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35791
	ctx.r11.u64 = ctx.r11.u64 | 35791;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF3A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-9612
	ctx.r11.s64 = -629932032;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54043
	ctx.r4.u64 = ctx.r11.u64 | 54043;
	// lis r11,11242
	ctx.r11.s64 = 736755712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8596
	ctx.r11.u64 = ctx.r11.u64 | 8596;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF3D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-2727
	ctx.r11.s64 = -178716672;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22790
	ctx.r4.u64 = ctx.r11.u64 | 22790;
	// lis r11,-21646
	ctx.r11.s64 = -1418592256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30311
	ctx.r11.u64 = ctx.r11.u64 | 30311;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF408;
	sub_8279BCE0(ctx, base);
	// lis r11,-6448
	ctx.r11.s64 = -422576128;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58539
	ctx.r4.u64 = ctx.r11.u64 | 58539;
	// lis r11,-16519
	ctx.r11.s64 = -1082589184;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21046
	ctx.r11.u64 = ctx.r11.u64 | 21046;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF438;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-13827
	ctx.r11.s64 = -906166272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28342
	ctx.r4.u64 = ctx.r11.u64 | 28342;
	// lis r11,16353
	ctx.r11.s64 = 1071710208;
	// ori r11,r11,1477
	ctx.r11.u64 = ctx.r11.u64 | 1477;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF468;
	sub_8279BCE0(ctx, base);
	// lis r11,29442
	ctx.r11.s64 = 1929510912;
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33249
	ctx.r4.u64 = ctx.r11.u64 | 33249;
	// lis r11,1183
	ctx.r11.s64 = 77529088;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4539
	ctx.r11.u64 = ctx.r11.u64 | 4539;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF498;
	sub_8279BCE0(ctx, base);
	// lis r11,23599
	ctx.r11.s64 = 1546584064;
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3068
	ctx.r4.u64 = ctx.r11.u64 | 3068;
	// lis r11,-31737
	ctx.r11.s64 = -2079916032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17992
	ctx.r11.u64 = ctx.r11.u64 | 17992;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF4C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-6384
	ctx.r11.s64 = -418381824;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30234
	ctx.r4.u64 = ctx.r11.u64 | 30234;
	// lis r11,-16350
	ctx.r11.s64 = -1071513600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41973
	ctx.r11.u64 = ctx.r11.u64 | 41973;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF4F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-14275
	ctx.r11.s64 = -935526400;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64519
	ctx.r4.u64 = ctx.r11.u64 | 64519;
	// lis r11,16570
	ctx.r11.s64 = 1085931520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62470
	ctx.r11.u64 = ctx.r11.u64 | 62470;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF528;
	sub_8279BCE0(ctx, base);
	// lis r11,22428
	ctx.r11.s64 = 1469841408;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12930
	ctx.r4.u64 = ctx.r11.u64 | 12930;
	// lis r11,18891
	ctx.r11.s64 = 1238040576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16137
	ctx.r11.u64 = ctx.r11.u64 | 16137;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF558;
	sub_8279BCE0(ctx, base);
	// lis r11,30897
	ctx.r11.s64 = 2024865792;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47263
	ctx.r4.u64 = ctx.r11.u64 | 47263;
	// lis r11,-13997
	ctx.r11.s64 = -917307392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26874
	ctx.r11.u64 = ctx.r11.u64 | 26874;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF588;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-4824
	ctx.r3.s64 = ctx.r28.s64 + -4824;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,646
	ctx.r11.s64 = 42336256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,26416
	ctx.r4.u64 = ctx.r11.u64 | 26416;
	// lis r11,-7997
	ctx.r11.s64 = -524091392;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,9976
	ctx.r11.u64 = ctx.r11.u64 | 9976;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF5B8;
	sub_8279BCE0(ctx, base);
	// lis r11,11691
	ctx.r11.s64 = 766181376;
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60717
	ctx.r4.u64 = ctx.r11.u64 | 60717;
	// lis r11,24667
	ctx.r11.s64 = 1616576512;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28939
	ctx.r11.u64 = ctx.r11.u64 | 28939;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF5E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26796
	ctx.r11.s64 = -1756102656;
	// addi r3,r28,-4256
	ctx.r3.s64 = ctx.r28.s64 + -4256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,634
	ctx.r4.u64 = ctx.r11.u64 | 634;
	// lis r11,23333
	ctx.r11.s64 = 1529151488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25973
	ctx.r11.u64 = ctx.r11.u64 | 25973;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF618;
	sub_8279BCE0(ctx, base);
	// lis r11,-18311
	ctx.r11.s64 = -1200029696;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34919
	ctx.r4.u64 = ctx.r11.u64 | 34919;
	// lis r11,-9283
	ctx.r11.s64 = -608370688;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,12934
	ctx.r11.u64 = ctx.r11.u64 | 12934;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AF648;
	sub_8279BCE0(ctx, base);
	// lis r11,838
	ctx.r11.s64 = 54919168;
	// addi r3,r28,-3584
	ctx.r3.s64 = ctx.r28.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62849
	ctx.r4.u64 = ctx.r11.u64 | 62849;
	// lis r11,-24680
	ctx.r11.s64 = -1617428480;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55099
	ctx.r11.u64 = ctx.r11.u64 | 55099;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF678;
	sub_8279BCE0(ctx, base);
	// lis r11,11371
	ctx.r11.s64 = 745209856;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32668
	ctx.r4.u64 = ctx.r11.u64 | 32668;
	// lis r11,7936
	ctx.r11.s64 = 520093696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32968
	ctx.r11.u64 = ctx.r11.u64 | 32968;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF6A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19510
	ctx.r11.s64 = -1278607360;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-2944
	ctx.r3.s64 = ctx.r28.s64 + -2944;
	// ori r4,r11,45337
	ctx.r4.u64 = ctx.r11.u64 | 45337;
	// lis r11,5745
	ctx.r11.s64 = 376504320;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19399
	ctx.r11.u64 = ctx.r11.u64 | 19399;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF6D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25369
	ctx.r11.s64 = -1662582784;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15108
	ctx.r4.u64 = ctx.r11.u64 | 15108;
	// lis r11,-26903
	ctx.r11.s64 = -1763115008;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7220
	ctx.r11.u64 = ctx.r11.u64 | 7220;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF708;
	sub_8279BCE0(ctx, base);
	// lis r11,16694
	ctx.r11.s64 = 1094057984;
	// addi r3,r28,-2208
	ctx.r3.s64 = ctx.r28.s64 + -2208;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42372
	ctx.r4.u64 = ctx.r11.u64 | 42372;
	// lis r11,-10780
	ctx.r11.s64 = -706478080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22833
	ctx.r11.u64 = ctx.r11.u64 | 22833;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF738;
	sub_8279BCE0(ctx, base);
	// lis r11,28187
	ctx.r11.s64 = 1847263232;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12185
	ctx.r4.u64 = ctx.r11.u64 | 12185;
	// lis r11,21884
	ctx.r11.s64 = 1434189824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3778
	ctx.r11.u64 = ctx.r11.u64 | 3778;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF768;
	sub_8279BCE0(ctx, base);
	// lis r11,6844
	ctx.r11.s64 = 448528384;
	// addi r3,r28,-1624
	ctx.r3.s64 = ctx.r28.s64 + -1624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58339
	ctx.r4.u64 = ctx.r11.u64 | 58339;
	// lis r11,14596
	ctx.r11.s64 = 956563456;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31720
	ctx.r11.u64 = ctx.r11.u64 | 31720;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF798;
	sub_8279BCE0(ctx, base);
	// lis r11,13713
	ctx.r11.s64 = 898695168;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27134
	ctx.r4.u64 = ctx.r11.u64 | 27134;
	// lis r11,-18020
	ctx.r11.s64 = -1180958720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11291
	ctx.r11.u64 = ctx.r11.u64 | 11291;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF7C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29010
	ctx.r11.s64 = -1901199360;
	// addi r3,r28,-936
	ctx.r3.s64 = ctx.r28.s64 + -936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5144
	ctx.r4.u64 = ctx.r11.u64 | 5144;
	// lis r11,-583
	ctx.r11.s64 = -38207488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51622
	ctx.r11.u64 = ctx.r11.u64 | 51622;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF7F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24189
	ctx.r11.s64 = -1585250304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,40453
	ctx.r4.u64 = ctx.r11.u64 | 40453;
	// lis r11,32033
	ctx.r11.s64 = 2099314688;
	// ori r11,r11,40533
	ctx.r11.u64 = ctx.r11.u64 | 40533;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF828;
	sub_8279BCE0(ctx, base);
	// lis r11,31722
	ctx.r11.s64 = 2078932992;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20068
	ctx.r4.u64 = ctx.r11.u64 | 20068;
	// lis r11,-18094
	ctx.r11.s64 = -1185808384;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r11,r11,30102
	ctx.r11.u64 = ctx.r11.u64 | 30102;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AF858;
	sub_8279BCE0(ctx, base);
	// lis r11,21703
	ctx.r11.s64 = 1422327808;
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50297
	ctx.r4.u64 = ctx.r11.u64 | 50297;
	// lis r11,14794
	ctx.r11.s64 = 969539584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8805
	ctx.r11.u64 = ctx.r11.u64 | 8805;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF888;
	sub_8279BCE0(ctx, base);
	// lis r11,4746
	ctx.r11.s64 = 311033856;
	// addi r3,r30,-14728
	ctx.r3.s64 = ctx.r30.s64 + -14728;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61654
	ctx.r4.u64 = ctx.r11.u64 | 61654;
	// lis r11,2999
	ctx.r11.s64 = 196542464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59762
	ctx.r11.u64 = ctx.r11.u64 | 59762;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF8B8;
	sub_8279BCE0(ctx, base);
	// lis r11,15783
	ctx.r11.s64 = 1034354688;
	// addi r3,r30,-14216
	ctx.r3.s64 = ctx.r30.s64 + -14216;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31435
	ctx.r4.u64 = ctx.r11.u64 | 31435;
	// lis r11,-29905
	ctx.r11.s64 = -1959854080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48769
	ctx.r11.u64 = ctx.r11.u64 | 48769;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF8E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-30888
	ctx.r11.s64 = -2024275968;
	// addi r3,r30,-13440
	ctx.r3.s64 = ctx.r30.s64 + -13440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38300
	ctx.r4.u64 = ctx.r11.u64 | 38300;
	// lis r11,-20399
	ctx.r11.s64 = -1336868864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43775
	ctx.r11.u64 = ctx.r11.u64 | 43775;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF918;
	sub_8279BCE0(ctx, base);
	// lis r11,-22411
	ctx.r11.s64 = -1468727296;
	// addi r3,r30,-12824
	ctx.r3.s64 = ctx.r30.s64 + -12824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8065
	ctx.r4.u64 = ctx.r11.u64 | 8065;
	// lis r11,12489
	ctx.r11.s64 = 818479104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64780
	ctx.r11.u64 = ctx.r11.u64 | 64780;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF948;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-12032
	ctx.r3.s64 = ctx.r30.s64 + -12032;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,4938
	ctx.r11.s64 = 323616768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25191
	ctx.r4.u64 = ctx.r11.u64 | 25191;
	// lis r11,29932
	ctx.r11.s64 = 1961623552;
	// ori r11,r11,6321
	ctx.r11.u64 = ctx.r11.u64 | 6321;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF978;
	sub_8279BCE0(ctx, base);
	// lis r11,15463
	ctx.r11.s64 = 1013383168;
	// addi r3,r30,-11464
	ctx.r3.s64 = ctx.r30.s64 + -11464;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59514
	ctx.r4.u64 = ctx.r11.u64 | 59514;
	// lis r11,-2956
	ctx.r11.s64 = -193724416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20290
	ctx.r11.u64 = ctx.r11.u64 | 20290;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF9A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-23610
	ctx.r11.s64 = -1547304960;
	// addi r3,r30,-10640
	ctx.r3.s64 = ctx.r30.s64 + -10640;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9983
	ctx.r4.u64 = ctx.r11.u64 | 9983;
	// lis r11,-763
	ctx.r11.s64 = -50003968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33869
	ctx.r11.u64 = ctx.r11.u64 | 33869;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AF9D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29461
	ctx.r11.s64 = -1930756096;
	// addi r3,r30,-9968
	ctx.r3.s64 = ctx.r30.s64 + -9968;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44258
	ctx.r4.u64 = ctx.r11.u64 | 44258;
	// lis r11,32157
	ctx.r11.s64 = 2107441152;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54206
	ctx.r11.u64 = ctx.r11.u64 | 54206;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFA08;
	sub_8279BCE0(ctx, base);
	// lis r11,20794
	ctx.r11.s64 = 1362755584;
	// addi r3,r30,-9128
	ctx.r3.s64 = ctx.r30.s64 + -9128;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12898
	ctx.r4.u64 = ctx.r11.u64 | 12898;
	// lis r11,16016
	ctx.r11.s64 = 1049624576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38587
	ctx.r11.u64 = ctx.r11.u64 | 38587;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFA38;
	sub_8279BCE0(ctx, base);
	// lis r11,32279
	ctx.r11.s64 = 2115436544;
	// addi r3,r30,-8600
	ctx.r3.s64 = ctx.r30.s64 + -8600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47231
	ctx.r4.u64 = ctx.r11.u64 | 47231;
	// lis r11,-16888
	ctx.r11.s64 = -1106771968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49480
	ctx.r11.u64 = ctx.r11.u64 | 49480;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFA68;
	sub_8279BCE0(ctx, base);
	// lis r11,2736
	ctx.r11.s64 = 179306496;
	// addi r3,r30,-7632
	ctx.r3.s64 = ctx.r30.s64 + -7632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29701
	ctx.r4.u64 = ctx.r11.u64 | 29701;
	// lis r11,-11664
	ctx.r11.s64 = -764411904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46178
	ctx.r11.u64 = ctx.r11.u64 | 46178;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFA98;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-7000
	ctx.r3.s64 = ctx.r30.s64 + -7000;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,9629
	ctx.r11.s64 = 631046144;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,65048
	ctx.r4.u64 = ctx.r11.u64 | 65048;
	// lis r11,21224
	ctx.r11.s64 = 1390936064;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// ori r11,r11,58257
	ctx.r11.u64 = ctx.r11.u64 | 58257;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFAC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24926
	ctx.r11.s64 = -1633550336;
	// addi r3,r30,-6016
	ctx.r3.s64 = ctx.r30.s64 + -6016;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33790
	ctx.r4.u64 = ctx.r11.u64 | 33790;
	// lis r11,5837
	ctx.r11.s64 = 382533632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1580
	ctx.r11.u64 = ctx.r11.u64 | 1580;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFAF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-20081
	ctx.r11.s64 = -1316028416;
	// addi r3,r30,-5136
	ctx.r3.s64 = ctx.r30.s64 + -5136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2531
	ctx.r4.u64 = ctx.r11.u64 | 2531;
	// lis r11,-27051
	ctx.r11.s64 = -1772814336;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20959
	ctx.r11.u64 = ctx.r11.u64 | 20959;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFB28;
	sub_8279BCE0(ctx, base);
	// lis r11,27622
	ctx.r11.s64 = 1810235392;
	// addi r3,r30,-4136
	ctx.r3.s64 = ctx.r30.s64 + -4136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55682
	ctx.r4.u64 = ctx.r11.u64 | 55682;
	// lis r11,21030
	ctx.r11.s64 = 1378222080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47644
	ctx.r11.u64 = ctx.r11.u64 | 47644;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFB58;
	sub_8279BCE0(ctx, base);
	// lis r11,17611
	ctx.r11.s64 = 1154154496;
	// addi r3,r30,-3168
	ctx.r3.s64 = ctx.r30.s64 + -3168;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21407
	ctx.r4.u64 = ctx.r11.u64 | 21407;
	// lis r11,-11586
	ctx.r11.s64 = -759300096;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60911
	ctx.r11.u64 = ctx.r11.u64 | 60911;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFB88;
	sub_8279BCE0(ctx, base);
	// lis r11,-19092
	ctx.r11.s64 = -1251213312;
	// addi r3,r28,-4824
	ctx.r3.s64 = ctx.r28.s64 + -4824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45561
	ctx.r4.u64 = ctx.r11.u64 | 45561;
	// lis r11,24874
	ctx.r11.s64 = 1630142464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57973
	ctx.r11.u64 = ctx.r11.u64 | 57973;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFBB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26047
	ctx.r11.s64 = -1707016192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-1544
	ctx.r3.s64 = ctx.r30.s64 + -1544;
	// ori r4,r11,15332
	ctx.r4.u64 = ctx.r11.u64 | 15332;
	// lis r11,-7758
	ctx.r11.s64 = -508428288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46470
	ctx.r11.u64 = ctx.r11.u64 | 46470;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFBE8;
	sub_8279BCE0(ctx, base);
	// lis r11,-4378
	ctx.r11.s64 = -286916608;
	// addi r3,r28,-4256
	ctx.r3.s64 = ctx.r28.s64 + -4256;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63390
	ctx.r4.u64 = ctx.r11.u64 | 63390;
	// lis r11,-29238
	ctx.r11.s64 = -1916141568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49324
	ctx.r11.u64 = ctx.r11.u64 | 49324;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFC18;
	sub_8279BCE0(ctx, base);
	// lis r11,-15925
	ctx.r11.s64 = -1043660800;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32131
	ctx.r4.u64 = ctx.r11.u64 | 32131;
	// lis r11,3410
	ctx.r11.s64 = 223477760;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,38751
	ctx.r11.u64 = ctx.r11.u64 | 38751;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AFC48;
	sub_8279BCE0(ctx, base);
	// lis r11,31476
	ctx.r11.s64 = 2062811136;
	// addi r3,r28,-3584
	ctx.r3.s64 = ctx.r28.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,101
	ctx.r4.u64 = ctx.r11.u64 | 101;
	// lis r11,18807
	ctx.r11.s64 = 1232535552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29410
	ctx.r11.u64 = ctx.r11.u64 | 29410;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFC78;
	sub_8279BCE0(ctx, base);
	// lis r11,21977
	ctx.r11.s64 = 1440284672;
	// addi r3,r28,-31696
	ctx.r3.s64 = ctx.r28.s64 + -31696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35448
	ctx.r4.u64 = ctx.r11.u64 | 35448;
	// lis r11,-13841
	ctx.r11.s64 = -907083776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9489
	ctx.r11.u64 = ctx.r11.u64 | 9489;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFCA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-28752
	ctx.r11.s64 = -1884291072;
	// addi r3,r28,-2944
	ctx.r3.s64 = ctx.r28.s64 + -2944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23065
	ctx.r4.u64 = ctx.r11.u64 | 23065;
	// lis r11,3484
	ctx.r11.s64 = 228327424;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52946
	ctx.r11.u64 = ctx.r11.u64 | 52946;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFCD8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24419
	ctx.r11.s64 = -1600323584;
	// addi r3,r28,-30032
	ctx.r3.s64 = ctx.r28.s64 + -30032;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53252
	ctx.r4.u64 = ctx.r11.u64 | 53252;
	// lis r11,-29436
	ctx.r11.s64 = -1929117696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39201
	ctx.r11.u64 = ctx.r11.u64 | 39201;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFD08;
	sub_8279BCE0(ctx, base);
	// lis r11,14468
	ctx.r11.s64 = 948174848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r28,-2208
	ctx.r3.s64 = ctx.r28.s64 + -2208;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,20576
	ctx.r4.u64 = ctx.r11.u64 | 20576;
	// lis r11,779
	ctx.r11.s64 = 51052544;
	// ori r11,r11,64744
	ctx.r11.u64 = ctx.r11.u64 | 64744;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFD38;
	sub_8279BCE0(ctx, base);
	// lis r11,6057
	ctx.r11.s64 = 396951552;
	// addi r3,r28,-28440
	ctx.r3.s64 = ctx.r28.s64 + -28440;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55933
	ctx.r4.u64 = ctx.r11.u64 | 55933;
	// lis r11,-31853
	ctx.r11.s64 = -2087518208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43803
	ctx.r11.u64 = ctx.r11.u64 | 43803;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFD68;
	sub_8279BCE0(ctx, base);
	// lis r11,9926
	ctx.r11.s64 = 650510336;
	// addi r3,r28,-1624
	ctx.r3.s64 = ctx.r28.s64 + -1624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2275
	ctx.r4.u64 = ctx.r11.u64 | 2275;
	// lis r11,8937
	ctx.r11.s64 = 585695232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,65277
	ctx.r11.u64 = ctx.r11.u64 | 65277;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFD98;
	sub_8279BCE0(ctx, base);
	// lis r11,2539
	ctx.r11.s64 = 166395904;
	// addi r3,r28,-26632
	ctx.r3.s64 = ctx.r28.s64 + -26632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33534
	ctx.r4.u64 = ctx.r11.u64 | 33534;
	// lis r11,-23951
	ctx.r11.s64 = -1569652736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43278
	ctx.r11.u64 = ctx.r11.u64 | 43278;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFDC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19756
	ctx.r11.s64 = -1294729216;
	// addi r3,r28,-936
	ctx.r3.s64 = ctx.r28.s64 + -936;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65304
	ctx.r4.u64 = ctx.r11.u64 | 65304;
	// lis r11,-6572
	ctx.r11.s64 = -430702592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19635
	ctx.r11.u64 = ctx.r11.u64 | 19635;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFDF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25095
	ctx.r11.s64 = -1644625920;
	// addi r3,r28,-24608
	ctx.r3.s64 = ctx.r28.s64 + -24608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29957
	ctx.r4.u64 = ctx.r11.u64 | 29957;
	// lis r11,26316
	ctx.r11.s64 = 1724645376;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6976
	ctx.r11.u64 = ctx.r11.u64 | 6976;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFE28;
	sub_8279BCE0(ctx, base);
	// lis r11,600
	ctx.r11.s64 = 39321600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48000
	ctx.r4.u64 = ctx.r11.u64 | 48000;
	// lis r11,28605
	ctx.r11.s64 = 1874657280;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// ori r11,r11,53327
	ctx.r11.u64 = ctx.r11.u64 | 53327;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824AFE58;
	sub_8279BCE0(ctx, base);
	// addi r3,r28,-22472
	ctx.r3.s64 = ctx.r28.s64 + -22472;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,11637
	ctx.r11.s64 = 762642432;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12701
	ctx.r4.u64 = ctx.r11.u64 | 12701;
	// lis r11,-4315
	ctx.r11.s64 = -282787840;
	// ori r11,r11,34748
	ctx.r11.u64 = ctx.r11.u64 | 34748;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFE88;
	sub_8279BCE0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82644a68
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824AFE90"))) PPC_WEAK_FUNC(sub_824AFE90);
PPC_FUNC_IMPL(__imp__sub_824AFE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82644a20
	ctx.lr = 0x824AFE98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32224
	ctx.r11.s64 = -2111832064;
	// lis r31,-31974
	ctx.r31.s64 = -2095448064;
	// addi r30,r11,12272
	ctx.r30.s64 = ctx.r11.s64 + 12272;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// oris r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 2147483648;
	// lis r11,12009
	ctx.r11.s64 = 787021824;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,495
	ctx.r4.u64 = ctx.r11.u64 | 495;
	// lis r11,-2533
	ctx.r11.s64 = -166002688;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,9423
	ctx.r11.u64 = ctx.r11.u64 | 9423;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFEE0;
	sub_8279BCE0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// addi r3,r30,-10688
	ctx.r3.s64 = ctx.r30.s64 + -10688;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// oris r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 2147483648;
	// lis r11,452
	ctx.r11.s64 = 29622272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,35826
	ctx.r4.u64 = ctx.r11.u64 | 35826;
	// lis r11,30339
	ctx.r11.s64 = 1988296704;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,29500
	ctx.r11.u64 = ctx.r11.u64 | 29500;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFF18;
	sub_8279BCE0(ctx, base);
	// lis r11,-24388
	ctx.r11.s64 = -1598291968;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4072
	ctx.r4.u64 = ctx.r11.u64 | 4072;
	// lis r11,-354
	ctx.r11.s64 = -23199744;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5341
	ctx.r11.u64 = ctx.r11.u64 | 5341;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFF48;
	sub_8279BCE0(ctx, base);
	// lis r11,-28783
	ctx.r11.s64 = -1886322688;
	// addi r3,r30,-9712
	ctx.r3.s64 = ctx.r30.s64 + -9712;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34293
	ctx.r4.u64 = ctx.r11.u64 | 34293;
	// lis r11,32262
	ctx.r11.s64 = 2114322432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17198
	ctx.r11.u64 = ctx.r11.u64 | 17198;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFF78;
	sub_8279BCE0(ctx, base);
	// lis r11,-782
	ctx.r11.s64 = -51249152;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61329
	ctx.r4.u64 = ctx.r11.u64 | 61329;
	// lis r11,9497
	ctx.r11.s64 = 622395392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11360
	ctx.r11.u64 = ctx.r11.u64 | 11360;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFFA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-11297
	ctx.r11.s64 = -740360192;
	// addi r3,r30,-10688
	ctx.r3.s64 = ctx.r30.s64 + -10688;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25996
	ctx.r4.u64 = ctx.r11.u64 | 25996;
	// lis r11,-23167
	ctx.r11.s64 = -1518272512;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31635
	ctx.r11.u64 = ctx.r11.u64 | 31635;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824AFFD8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,29351
	ctx.r11.s64 = 1923547136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,57750
	ctx.r4.u64 = ctx.r11.u64 | 57750;
	// lis r11,11676
	ctx.r11.s64 = 765198336;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,7282
	ctx.r11.u64 = ctx.r11.u64 | 7282;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0008;
	sub_8279BCE0(ctx, base);
	// lis r11,23946
	ctx.r11.s64 = 1569325056;
	// addi r3,r30,-9712
	ctx.r3.s64 = ctx.r30.s64 + -9712;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27531
	ctx.r4.u64 = ctx.r11.u64 | 27531;
	// lis r11,-21244
	ctx.r11.s64 = -1392246784;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19329
	ctx.r11.u64 = ctx.r11.u64 | 19329;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0038;
	sub_8279BCE0(ctx, base);
	// lis r11,-32765
	ctx.r11.s64 = -2147287040;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25369
	ctx.r4.u64 = ctx.r11.u64 | 25369;
	// lis r11,3694
	ctx.r11.s64 = 242089984;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52550
	ctx.r11.u64 = ctx.r11.u64 | 52550;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0068;
	sub_8279BCE0(ctx, base);
	// lis r11,-20690
	ctx.r11.s64 = -1355939840;
	// addi r3,r30,-10688
	ctx.r3.s64 = ctx.r30.s64 + -10688;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59652
	ctx.r4.u64 = ctx.r11.u64 | 59652;
	// lis r11,-28938
	ctx.r11.s64 = -1896480768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39605
	ctx.r11.u64 = ctx.r11.u64 | 39605;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0098;
	sub_8279BCE0(ctx, base);
	// lis r11,3670
	ctx.r11.s64 = 240517120;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27934
	ctx.r4.u64 = ctx.r11.u64 | 27934;
	// lis r11,1771
	ctx.r11.s64 = 116064256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64852
	ctx.r11.u64 = ctx.r11.u64 | 64852;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B00C8;
	sub_8279BCE0(ctx, base);
	// lis r11,8571
	ctx.r11.s64 = 561709056;
	// addi r3,r30,-9712
	ctx.r3.s64 = ctx.r30.s64 + -9712;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59139
	ctx.r4.u64 = ctx.r11.u64 | 59139;
	// lis r11,-31117
	ctx.r11.s64 = -2039283712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43687
	ctx.r11.u64 = ctx.r11.u64 | 43687;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B00F8;
	sub_8279BCE0(ctx, base);
	// lis r11,21016
	ctx.r11.s64 = 1377304576;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// ori r4,r11,36199
	ctx.r4.u64 = ctx.r11.u64 | 36199;
	// lis r11,-8852
	ctx.r11.s64 = -580124672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50665
	ctx.r11.u64 = ctx.r11.u64 | 50665;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0128;
	sub_8279BCE0(ctx, base);
	// lis r11,32053
	ctx.r11.s64 = 2100625408;
	// addi r3,r30,-10688
	ctx.r3.s64 = ctx.r30.s64 + -10688;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1914
	ctx.r4.u64 = ctx.r11.u64 | 1914;
	// lis r11,24052
	ctx.r11.s64 = 1576271872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37402
	ctx.r11.u64 = ctx.r11.u64 | 37402;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0158;
	sub_8279BCE0(ctx, base);
	// lis r11,-9139
	ctx.r11.s64 = -598933504;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33632
	ctx.r4.u64 = ctx.r11.u64 | 33632;
	// lis r11,-10775
	ctx.r11.s64 = -706150400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62971
	ctx.r11.u64 = ctx.r11.u64 | 62971;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0188;
	sub_8279BCE0(ctx, base);
	// lis r11,-3232
	ctx.r11.s64 = -211812352;
	// addi r3,r30,-9712
	ctx.r3.s64 = ctx.r30.s64 + -9712;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2429
	ctx.r4.u64 = ctx.r11.u64 | 2429;
	// lis r11,21873
	ctx.r11.s64 = 1433468928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41480
	ctx.r11.u64 = ctx.r11.u64 | 41480;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B01B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-1334
	ctx.r11.s64 = -87425024;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11927
	ctx.r4.u64 = ctx.r11.u64 | 11927;
	// lis r11,-8154
	ctx.r11.s64 = -534380544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57165
	ctx.r11.u64 = ctx.r11.u64 | 57165;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B01E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-10777
	ctx.r11.s64 = -706281472;
	// addi r3,r30,-9048
	ctx.r3.s64 = ctx.r30.s64 + -9048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42122
	ctx.r4.u64 = ctx.r11.u64 | 42122;
	// lis r11,24766
	ctx.r11.s64 = 1623064576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35006
	ctx.r11.u64 = ctx.r11.u64 | 35006;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0218;
	sub_8279BCE0(ctx, base);
	// lis r11,29855
	ctx.r11.s64 = 1956577280;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8336
	ctx.r4.u64 = ctx.r11.u64 | 8336;
	// lis r11,-5981
	ctx.r11.s64 = -391970816;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61279
	ctx.r11.u64 = ctx.r11.u64 | 61279;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0248;
	sub_8279BCE0(ctx, base);
	// lis r11,23474
	ctx.r11.s64 = 1538392064;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-8400
	ctx.r3.s64 = ctx.r30.s64 + -8400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,43661
	ctx.r4.u64 = ctx.r11.u64 | 43661;
	// lis r11,26683
	ctx.r11.s64 = 1748697088;
	// ori r11,r11,47276
	ctx.r11.u64 = ctx.r11.u64 | 47276;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0278;
	sub_8279BCE0(ctx, base);
	// lis r11,10449
	ctx.r11.s64 = 684785664;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49385
	ctx.r4.u64 = ctx.r11.u64 | 49385;
	// lis r11,13092
	ctx.r11.s64 = 857997312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55266
	ctx.r11.u64 = ctx.r11.u64 | 55266;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B02A8;
	sub_8279BCE0(ctx, base);
	// lis r11,2044
	ctx.r11.s64 = 133955584;
	// addi r3,r30,-9048
	ctx.r3.s64 = ctx.r30.s64 + -9048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19188
	ctx.r4.u64 = ctx.r11.u64 | 19188;
	// lis r11,-19524
	ctx.r11.s64 = -1279524864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32785
	ctx.r11.u64 = ctx.r11.u64 | 32785;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B02D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-22908
	ctx.r11.s64 = -1501298688;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52974
	ctx.r4.u64 = ctx.r11.u64 | 52974;
	// lis r11,15265
	ctx.r11.s64 = 1000407040;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59376
	ctx.r11.u64 = ctx.r11.u64 | 59376;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0308;
	sub_8279BCE0(ctx, base);
	// lis r11,-30295
	ctx.r11.s64 = -1985413120;
	// addi r3,r30,-8400
	ctx.r3.s64 = ctx.r30.s64 + -8400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17651
	ctx.r4.u64 = ctx.r11.u64 | 17651;
	// lis r11,-17607
	ctx.r11.s64 = -1153892352;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45059
	ctx.r11.u64 = ctx.r11.u64 | 45059;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0338;
	sub_8279BCE0(ctx, base);
	// lis r11,21536
	ctx.r11.s64 = 1411383296;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19553
	ctx.r4.u64 = ctx.r11.u64 | 19553;
	// lis r11,6227
	ctx.r11.s64 = 408092672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14020
	ctx.r11.u64 = ctx.r11.u64 | 14020;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0368;
	sub_8279BCE0(ctx, base);
	// lis r11,31501
	ctx.r11.s64 = 2064449536;
	// addi r3,r30,-9048
	ctx.r3.s64 = ctx.r30.s64 + -9048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50812
	ctx.r4.u64 = ctx.r11.u64 | 50812;
	// lis r11,-26421
	ctx.r11.s64 = -1731526656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24887
	ctx.r11.u64 = ctx.r11.u64 | 24887;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0398;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-9611
	ctx.r11.s64 = -629866496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16998
	ctx.r4.u64 = ctx.r11.u64 | 16998;
	// lis r11,4310
	ctx.r11.s64 = 282460160;
	// ori r11,r11,1750
	ctx.r11.u64 = ctx.r11.u64 | 1750;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B03C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-2728
	ctx.r11.s64 = -178782208;
	// addi r3,r30,-8400
	ctx.r3.s64 = ctx.r30.s64 + -8400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51323
	ctx.r4.u64 = ctx.r11.u64 | 51323;
	// lis r11,-28594
	ctx.r11.s64 = -1873936384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20773
	ctx.r11.u64 = ctx.r11.u64 | 20773;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B03F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-31173
	ctx.r11.s64 = -2042953728;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41503
	ctx.r4.u64 = ctx.r11.u64 | 41503;
	// lis r11,-13487
	ctx.r11.s64 = -883884032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15979
	ctx.r11.u64 = ctx.r11.u64 | 15979;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0428;
	sub_8279BCE0(ctx, base);
	// lis r11,-22250
	ctx.r11.s64 = -1458176000;
	// addi r3,r30,-9048
	ctx.r3.s64 = ctx.r30.s64 + -9048;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10242
	ctx.r4.u64 = ctx.r11.u64 | 10242;
	// lis r11,19401
	ctx.r11.s64 = 1271463936;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27032
	ctx.r11.u64 = ctx.r11.u64 | 27032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0458;
	sub_8279BCE0(ctx, base);
	// lis r11,2158
	ctx.r11.s64 = 141426688;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44056
	ctx.r4.u64 = ctx.r11.u64 | 44056;
	// lis r11,-15404
	ctx.r11.s64 = -1009516544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3705
	ctx.r11.u64 = ctx.r11.u64 | 3705;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0488;
	sub_8279BCE0(ctx, base);
	// lis r11,10051
	ctx.r11.s64 = 658702336;
	// addi r3,r30,-8400
	ctx.r3.s64 = ctx.r30.s64 + -8400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9733
	ctx.r4.u64 = ctx.r11.u64 | 9733;
	// lis r11,17228
	ctx.r11.s64 = 1129054208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22922
	ctx.r11.u64 = ctx.r11.u64 | 22922;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B04B8;
	sub_8279BCE0(ctx, base);
	// lis r11,8775
	ctx.r11.s64 = 575078400;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12537
	ctx.r4.u64 = ctx.r11.u64 | 12537;
	// lis r11,-31887
	ctx.r11.s64 = -2089746432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25875
	ctx.r11.u64 = ctx.r11.u64 | 25875;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B04E8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-7720
	ctx.r3.s64 = ctx.r30.s64 + -7720;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,3434
	ctx.r11.s64 = 225050624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r4,r11,47844
	ctx.r4.u64 = ctx.r11.u64 | 47844;
	// lis r11,1001
	ctx.r11.s64 = 65601536;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// ori r11,r11,13024
	ctx.r11.u64 = ctx.r11.u64 | 13024;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0518;
	sub_8279BCE0(ctx, base);
	// lis r11,-21486
	ctx.r11.s64 = -1408106496;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16126
	ctx.r4.u64 = ctx.r11.u64 | 16126;
	// lis r11,-29708
	ctx.r11.s64 = -1946943488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21761
	ctx.r11.u64 = ctx.r11.u64 | 21761;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0548;
	sub_8279BCE0(ctx, base);
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r3,r30,-6760
	ctx.r3.s64 = ctx.r30.s64 + -6760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46307
	ctx.r4.u64 = ctx.r11.u64 | 46307;
	// lis r11,2924
	ctx.r11.s64 = 191627264;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,754
	ctx.r11.u64 = ctx.r11.u64 | 754;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0578;
	sub_8279BCE0(ctx, base);
	// lis r11,-4004
	ctx.r11.s64 = -262406144;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56967
	ctx.r4.u64 = ctx.r11.u64 | 56967;
	// lis r11,20595
	ctx.r11.s64 = 1349713920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28092
	ctx.r11.u64 = ctx.r11.u64 | 28092;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B05A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-8335
	ctx.r11.s64 = -546242560;
	// addi r3,r30,-7720
	ctx.r3.s64 = ctx.r30.s64 + -7720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21658
	ctx.r4.u64 = ctx.r11.u64 | 21658;
	// lis r11,-12053
	ctx.r11.s64 = -789905408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14927
	ctx.r11.u64 = ctx.r11.u64 | 14927;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B05D8;
	sub_8279BCE0(ctx, base);
	// lis r11,32265
	ctx.r11.s64 = 2114519040;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53376
	ctx.r4.u64 = ctx.r11.u64 | 53376;
	// lis r11,22774
	ctx.r11.s64 = 1492516864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23982
	ctx.r11.u64 = ctx.r11.u64 | 23982;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0608;
	sub_8279BCE0(ctx, base);
	// lis r11,20772
	ctx.r11.s64 = 1361313792;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-6760
	ctx.r3.s64 = ctx.r30.s64 + -6760;
	// ori r4,r11,23197
	ctx.r4.u64 = ctx.r11.u64 | 23197;
	// lis r11,-10130
	ctx.r11.s64 = -663879680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2653
	ctx.r11.u64 = ctx.r11.u64 | 2653;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0638;
	sub_8279BCE0(ctx, base);
	// lis r11,-29523
	ctx.r11.s64 = -1934819328;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21007
	ctx.r4.u64 = ctx.r11.u64 | 21007;
	// lis r11,31492
	ctx.r11.s64 = 2063859712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35994
	ctx.r11.u64 = ctx.r11.u64 | 35994;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0668;
	sub_8279BCE0(ctx, base);
	// lis r11,-23680
	ctx.r11.s64 = -1551892480;
	// addi r3,r30,-7720
	ctx.r3.s64 = ctx.r30.s64 + -7720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55314
	ctx.r4.u64 = ctx.r11.u64 | 55314;
	// lis r11,-1124
	ctx.r11.s64 = -73662464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56169
	ctx.r11.u64 = ctx.r11.u64 | 56169;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0698;
	sub_8279BCE0(ctx, base);
	// lis r11,760
	ctx.r11.s64 = 49807360;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23560
	ctx.r4.u64 = ctx.r11.u64 | 23560;
	// lis r11,29569
	ctx.r11.s64 = 1937833984;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48264
	ctx.r11.u64 = ctx.r11.u64 | 48264;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B06C8;
	sub_8279BCE0(ctx, base);
	// lis r11,11733
	ctx.r11.s64 = 768933888;
	// addi r3,r30,-6760
	ctx.r3.s64 = ctx.r30.s64 + -6760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54805
	ctx.r4.u64 = ctx.r11.u64 | 54805;
	// lis r11,-3303
	ctx.r11.s64 = -216465408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60283
	ctx.r11.u64 = ctx.r11.u64 | 60283;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B06F8;
	sub_8279BCE0(ctx, base);
	// lis r11,24246
	ctx.r11.s64 = 1588985856;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48241
	ctx.r4.u64 = ctx.r11.u64 | 48241;
	// lis r11,-22522
	ctx.r11.s64 = -1476001792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33845
	ctx.r11.u64 = ctx.r11.u64 | 33845;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0728;
	sub_8279BCE0(ctx, base);
	// lis r11,29083
	ctx.r11.s64 = 1905983488;
	// addi r3,r30,-7720
	ctx.r3.s64 = ctx.r30.s64 + -7720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13932
	ctx.r4.u64 = ctx.r11.u64 | 13932;
	// lis r11,10398
	ctx.r11.s64 = 681443328;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54214
	ctx.r11.u64 = ctx.r11.u64 | 54214;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0758;
	sub_8279BCE0(ctx, base);
	// lis r11,-12061
	ctx.r11.s64 = -790429696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,45686
	ctx.r4.u64 = ctx.r11.u64 | 45686;
	// lis r11,-24445
	ctx.r11.s64 = -1602027520;
	// ori r11,r11,46119
	ctx.r11.u64 = ctx.r11.u64 | 46119;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0788;
	sub_8279BCE0(ctx, base);
	// lis r11,-50
	ctx.r11.s64 = -3276800;
	// addi r3,r30,-6760
	ctx.r3.s64 = ctx.r30.s64 + -6760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14443
	ctx.r4.u64 = ctx.r11.u64 | 14443;
	// lis r11,8219
	ctx.r11.s64 = 538640384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58324
	ctx.r11.u64 = ctx.r11.u64 | 58324;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B07B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-2460
	ctx.r11.s64 = -161218560;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8065
	ctx.r4.u64 = ctx.r11.u64 | 8065;
	// lis r11,-27316
	ctx.r11.s64 = -1790181376;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40593
	ctx.r11.u64 = ctx.r11.u64 | 40593;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B07E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-9911
	ctx.r11.s64 = -649527296;
	// addi r3,r30,-5760
	ctx.r3.s64 = ctx.r30.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38300
	ctx.r4.u64 = ctx.r11.u64 | 38300;
	// lis r11,5588
	ctx.r11.s64 = 366215168;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51554
	ctx.r11.u64 = ctx.r11.u64 | 51554;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0818;
	sub_8279BCE0(ctx, base);
	// lis r11,30769
	ctx.r11.s64 = 2016477184;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4486
	ctx.r4.u64 = ctx.r11.u64 | 4486;
	// lis r11,-25143
	ctx.r11.s64 = -1647771648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44675
	ctx.r11.u64 = ctx.r11.u64 | 44675;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0848;
	sub_8279BCE0(ctx, base);
	// lis r11,22300
	ctx.r11.s64 = 1461452800;
	// addi r3,r30,-4784
	ctx.r3.s64 = ctx.r30.s64 + -4784;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39835
	ctx.r4.u64 = ctx.r11.u64 | 39835;
	// lis r11,7505
	ctx.r11.s64 = 491847680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63856
	ctx.r11.u64 = ctx.r11.u64 | 63856;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0878;
	sub_8279BCE0(ctx, base);
	// lis r11,9343
	ctx.r11.s64 = 612302848;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61951
	ctx.r4.u64 = ctx.r11.u64 | 61951;
	// lis r11,17998
	ctx.r11.s64 = 1179516928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38462
	ctx.r11.u64 = ctx.r11.u64 | 38462;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B08A8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-5760
	ctx.r3.s64 = ctx.r30.s64 + -5760;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,2898
	ctx.r11.s64 = 189923328;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31714
	ctx.r4.u64 = ctx.r11.u64 | 31714;
	// lis r11,-14634
	ctx.r11.s64 = -959053824;
	// ori r11,r11,49613
	ctx.r11.u64 = ctx.r11.u64 | 49613;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B08D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-21974
	ctx.r11.s64 = -1440088064;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65528
	ctx.r4.u64 = ctx.r11.u64 | 65528;
	// lis r11,20171
	ctx.r11.s64 = 1321926656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42540
	ctx.r11.u64 = ctx.r11.u64 | 42540;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0908;
	sub_8279BCE0(ctx, base);
	// lis r11,-31481
	ctx.r11.s64 = -2063138816;
	// addi r3,r30,-4784
	ctx.r3.s64 = ctx.r30.s64 + -4784;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30181
	ctx.r4.u64 = ctx.r11.u64 | 30181;
	// lis r11,-12717
	ctx.r11.s64 = -833421312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61919
	ctx.r11.u64 = ctx.r11.u64 | 61919;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0938;
	sub_8279BCE0(ctx, base);
	// lis r11,22670
	ctx.r11.s64 = 1485701120;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32119
	ctx.r4.u64 = ctx.r11.u64 | 32119;
	// lis r11,27961
	ctx.r11.s64 = 1832452096;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30488
	ctx.r11.u64 = ctx.r11.u64 | 30488;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0968;
	sub_8279BCE0(ctx, base);
	// lis r11,30627
	ctx.r11.s64 = 2007171072;
	// addi r3,r30,-5760
	ctx.r3.s64 = ctx.r30.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63338
	ctx.r4.u64 = ctx.r11.u64 | 63338;
	// lis r11,-4703
	ctx.r11.s64 = -308215808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8427
	ctx.r11.u64 = ctx.r11.u64 | 8427;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0998;
	sub_8279BCE0(ctx, base);
	// lis r11,-10533
	ctx.r11.s64 = -690290688;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29552
	ctx.r4.u64 = ctx.r11.u64 | 29552;
	// lis r11,26044
	ctx.r11.s64 = 1706819584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18186
	ctx.r11.u64 = ctx.r11.u64 | 18186;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B09C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-1546
	ctx.r11.s64 = -101318656;
	// addi r3,r30,-4784
	ctx.r3.s64 = ctx.r30.s64 + -4784;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63853
	ctx.r4.u64 = ctx.r11.u64 | 63853;
	// lis r11,-6876
	ctx.r11.s64 = -450625536;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4345
	ctx.r11.u64 = ctx.r11.u64 | 4345;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B09F8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-30059
	ctx.r11.s64 = -1969946624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r4,r11,37641
	ctx.r4.u64 = ctx.r11.u64 | 37641;
	// lis r11,-16837
	ctx.r11.s64 = -1103429632;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r11,r11,32695
	ctx.r11.u64 = ctx.r11.u64 | 32695;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0A28;
	sub_8279BCE0(ctx, base);
	// lis r11,-23112
	ctx.r11.s64 = -1514668032;
	// addi r3,r30,-5760
	ctx.r3.s64 = ctx.r30.s64 + -5760;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6420
	ctx.r4.u64 = ctx.r11.u64 | 6420;
	// lis r11,16035
	ctx.r11.s64 = 1050869760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10308
	ctx.r11.u64 = ctx.r11.u64 | 10308;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0A58;
	sub_8279BCE0(ctx, base);
	// lis r11,1216
	ctx.r11.s64 = 79691776;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40206
	ctx.r4.u64 = ctx.r11.u64 | 40206;
	// lis r11,-18754
	ctx.r11.s64 = -1229062144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20389
	ctx.r11.u64 = ctx.r11.u64 | 20389;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0A88;
	sub_8279BCE0(ctx, base);
	// lis r11,11245
	ctx.r11.s64 = 736952320;
	// addi r3,r30,-4784
	ctx.r3.s64 = ctx.r30.s64 + -4784;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5907
	ctx.r4.u64 = ctx.r11.u64 | 5907;
	// lis r11,13862
	ctx.r11.s64 = 908460032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6230
	ctx.r11.u64 = ctx.r11.u64 | 6230;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0AB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-1226
	ctx.r11.s64 = -80347136;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18831
	ctx.r4.u64 = ctx.r11.u64 | 18831;
	// lis r11,4734
	ctx.r11.s64 = 310247424;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13828
	ctx.r11.u64 = ctx.r11.u64 | 13828;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0AE8;
	sub_8279BCE0(ctx, base);
	// li r11,8209
	ctx.r11.s64 = 8209;
	// addi r3,r30,-3768
	ctx.r3.s64 = ctx.r30.s64 + -3768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// oris r28,r11,32768
	ctx.r28.u64 = ctx.r11.u64 | 2147483648;
	// lis r11,-11237
	ctx.r11.s64 = -736428032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,50066
	ctx.r4.u64 = ctx.r11.u64 | 50066;
	// lis r11,-27930
	ctx.r11.s64 = -1830420480;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,25079
	ctx.r11.u64 = ctx.r11.u64 | 25079;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0B20;
	sub_8279BCE0(ctx, base);
	// lis r11,30051
	ctx.r11.s64 = 1969422336;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// ori r4,r11,18312
	ctx.r4.u64 = ctx.r11.u64 | 18312;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,6907
	ctx.r11.s64 = 452657152;
	// ori r11,r11,1558
	ctx.r11.u64 = ctx.r11.u64 | 1558;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0B50;
	sub_8279BCE0(ctx, base);
	// lis r11,23118
	ctx.r11.s64 = 1515061248;
	// addi r3,r30,-3104
	ctx.r3.s64 = ctx.r30.s64 + -3104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52629
	ctx.r4.u64 = ctx.r11.u64 | 52629;
	// lis r11,-26013
	ctx.r11.s64 = -1704787968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20965
	ctx.r11.u64 = ctx.r11.u64 | 20965;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0B80;
	sub_8279BCE0(ctx, base);
	// lis r11,10541
	ctx.r11.s64 = 690814976;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42993
	ctx.r4.u64 = ctx.r11.u64 | 42993;
	// lis r11,-16004
	ctx.r11.s64 = -1048838144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16043
	ctx.r11.u64 = ctx.r11.u64 | 16043;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0BB0;
	sub_8279BCE0(ctx, base);
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// addi r3,r30,-3768
	ctx.r3.s64 = ctx.r30.s64 + -3768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11756
	ctx.r4.u64 = ctx.r11.u64 | 11756;
	// lis r11,16868
	ctx.r11.s64 = 1105461248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26968
	ctx.r11.u64 = ctx.r11.u64 | 26968;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0BE0;
	sub_8279BCE0(ctx, base);
	// lis r11,-22664
	ctx.r11.s64 = -1485307904;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43510
	ctx.r4.u64 = ctx.r11.u64 | 43510;
	// lis r11,-13831
	ctx.r11.s64 = -906428416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3769
	ctx.r11.u64 = ctx.r11.u64 | 3769;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0C10;
	sub_8279BCE0(ctx, base);
	// lis r11,-30635
	ctx.r11.s64 = -2007695360;
	// addi r3,r30,-3104
	ctx.r3.s64 = ctx.r30.s64 + -3104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9195
	ctx.r4.u64 = ctx.r11.u64 | 9195;
	// lis r11,18785
	ctx.r11.s64 = 1231093760;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,22858
	ctx.r11.u64 = ctx.r11.u64 | 22858;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0C40;
	sub_8279BCE0(ctx, base);
	// lis r11,21980
	ctx.r11.s64 = 1440481280;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11129
	ctx.r4.u64 = ctx.r11.u64 | 11129;
	// lis r11,-5621
	ctx.r11.s64 = -368377856;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,57229
	ctx.r11.u64 = ctx.r11.u64 | 57229;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0C70;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-3768
	ctx.r3.s64 = ctx.r30.s64 + -3768;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,31473
	ctx.r11.s64 = 2062614528;
	// ori r4,r11,41316
	ctx.r4.u64 = ctx.r11.u64 | 41316;
	// lis r11,27283
	ctx.r11.s64 = 1788018688;
	// ori r11,r11,34942
	ctx.r11.u64 = ctx.r11.u64 | 34942;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0CA0;
	sub_8279BCE0(ctx, base);
	// lis r11,-9335
	ctx.r11.s64 = -611778560;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9598
	ctx.r4.u64 = ctx.r11.u64 | 9598;
	// lis r11,-7538
	ctx.r11.s64 = -494010368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61343
	ctx.r11.u64 = ctx.r11.u64 | 61343;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0CD0;
	sub_8279BCE0(ctx, base);
	// lis r11,-2908
	ctx.r11.s64 = -190578688;
	// addi r3,r30,-3104
	ctx.r3.s64 = ctx.r30.s64 + -3104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44899
	ctx.r4.u64 = ctx.r11.u64 | 44899;
	// lis r11,25110
	ctx.r11.s64 = 1645608960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47212
	ctx.r11.u64 = ctx.r11.u64 | 47212;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0D00;
	sub_8279BCE0(ctx, base);
	// lis r11,-30777
	ctx.r11.s64 = -2017001472;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50439
	ctx.r4.u64 = ctx.r11.u64 | 50439;
	// lis r11,14601
	ctx.r11.s64 = 956891136;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55074
	ctx.r11.u64 = ctx.r11.u64 | 55074;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0D30;
	sub_8279BCE0(ctx, base);
	// lis r11,-22294
	ctx.r11.s64 = -1461059584;
	// addi r3,r30,-3768
	ctx.r3.s64 = ctx.r30.s64 + -3768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20250
	ctx.r4.u64 = ctx.r11.u64 | 20250;
	// lis r11,-18031
	ctx.r11.s64 = -1181679616;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32977
	ctx.r11.u64 = ctx.r11.u64 | 32977;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0D60;
	sub_8279BCE0(ctx, base);
	// lis r11,2450
	ctx.r11.s64 = 160563200;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51968
	ctx.r4.u64 = ctx.r11.u64 | 51968;
	// lis r11,12684
	ctx.r11.s64 = 831258624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59184
	ctx.r11.u64 = ctx.r11.u64 | 59184;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0D90;
	sub_8279BCE0(ctx, base);
	// lis r11,9919
	ctx.r11.s64 = 650051584;
	// addi r3,r30,-3104
	ctx.r3.s64 = ctx.r30.s64 + -3104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16669
	ctx.r4.u64 = ctx.r11.u64 | 16669;
	// lis r11,-20204
	ctx.r11.s64 = -1324089344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45251
	ctx.r11.u64 = ctx.r11.u64 | 45251;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0DC0;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lis r11,12053
	ctx.r11.s64 = 789905408;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r4,r11,26359
	ctx.r4.u64 = ctx.r11.u64 | 26359;
	// lis r11,1091
	ctx.r11.s64 = 71499776;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,52614
	ctx.r11.u64 = ctx.r11.u64 | 52614;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0DF0;
	sub_8279BCE0(ctx, base);
	// lis r11,56
	ctx.r11.s64 = 3670016;
	// addi r3,r30,-2400
	ctx.r3.s64 = ctx.r30.s64 + -2400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60650
	ctx.r4.u64 = ctx.r11.u64 | 60650;
	// lis r11,-31525
	ctx.r11.s64 = -2066022400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39541
	ctx.r11.u64 = ctx.r11.u64 | 39541;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0E20;
	sub_8279BCE0(ctx, base);
	// lis r11,-24256
	ctx.r11.s64 = -1589641216;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26864
	ctx.r4.u64 = ctx.r11.u64 | 26864;
	// lis r11,3270
	ctx.r11.s64 = 214302720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64916
	ctx.r11.u64 = ctx.r11.u64 | 64916;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0E50;
	sub_8279BCE0(ctx, base);
	// lis r11,-29075
	ctx.r11.s64 = -1905459200;
	// addi r3,r30,-1720
	ctx.r3.s64 = ctx.r30.s64 + -1720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58093
	ctx.r4.u64 = ctx.r11.u64 | 58093;
	// lis r11,-29602
	ctx.r11.s64 = -1939996672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,43623
	ctx.r11.u64 = ctx.r11.u64 | 43623;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0E80;
	sub_8279BCE0(ctx, base);
	// lis r11,-754
	ctx.r11.s64 = -49414144;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34953
	ctx.r4.u64 = ctx.r11.u64 | 34953;
	// lis r11,-10431
	ctx.r11.s64 = -683606016;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50473
	ctx.r11.u64 = ctx.r11.u64 | 50473;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0EB0;
	sub_8279BCE0(ctx, base);
	// lis r11,-11741
	ctx.r11.s64 = -769458176;
	// addi r3,r30,-2400
	ctx.r3.s64 = ctx.r30.s64 + -2400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,660
	ctx.r4.u64 = ctx.r11.u64 | 660;
	// lis r11,22489
	ctx.r11.s64 = 1473839104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37594
	ctx.r11.u64 = ctx.r11.u64 | 37594;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0EE0;
	sub_8279BCE0(ctx, base);
	// lis r11,29531
	ctx.r11.s64 = 1935343616;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34446
	ctx.r4.u64 = ctx.r11.u64 | 34446;
	// lis r11,-8252
	ctx.r11.s64 = -540803072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62779
	ctx.r11.u64 = ctx.r11.u64 | 62779;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0F10;
	sub_8279BCE0(ctx, base);
	// lis r11,23670
	ctx.r11.s64 = 1551237120;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-1720
	ctx.r3.s64 = ctx.r30.s64 + -1720;
	// ori r4,r11,3219
	ctx.r4.u64 = ctx.r11.u64 | 3219;
	// lis r11,24412
	ctx.r11.s64 = 1599864832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41672
	ctx.r11.u64 = ctx.r11.u64 | 41672;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0F40;
	sub_8279BCE0(ctx, base);
	// lis r11,-32257
	ctx.r11.s64 = -2113994752;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1025
	ctx.r4.u64 = ctx.r11.u64 | 1025;
	// lis r11,-970
	ctx.r11.s64 = -63569920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9231
	ctx.r11.u64 = ctx.r11.u64 | 9231;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0F70;
	sub_8279BCE0(ctx, base);
	// lis r11,-20782
	ctx.r11.s64 = -1361969152;
	// addi r3,r30,-2400
	ctx.r3.s64 = ctx.r30.s64 + -2400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36380
	ctx.r4.u64 = ctx.r11.u64 | 36380;
	// lis r11,31918
	ctx.r11.s64 = 2091778048;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29692
	ctx.r11.u64 = ctx.r11.u64 | 29692;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0FA0;
	sub_8279BCE0(ctx, base);
	// lis r11,4010
	ctx.r11.s64 = 262799360;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2566
	ctx.r4.u64 = ctx.r11.u64 | 2566;
	// lis r11,-2893
	ctx.r11.s64 = -189595648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5149
	ctx.r11.u64 = ctx.r11.u64 | 5149;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B0FD0;
	sub_8279BCE0(ctx, base);
	// lis r11,8327
	ctx.r11.s64 = 545718272;
	// addi r3,r30,-1720
	ctx.r3.s64 = ctx.r30.s64 + -1720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32795
	ctx.r4.u64 = ctx.r11.u64 | 32795;
	// lis r11,29739
	ctx.r11.s64 = 1948975104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17390
	ctx.r11.u64 = ctx.r11.u64 | 17390;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1000;
	sub_8279BCE0(ctx, base);
	// lis r11,21476
	ctx.r11.s64 = 1407451136;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60031
	ctx.r4.u64 = ctx.r11.u64 | 60031;
	// lis r11,12084
	ctx.r11.s64 = 791937024;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11424
	ctx.r11.u64 = ctx.r11.u64 | 11424;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1030;
	sub_8279BCE0(ctx, base);
	// lis r11,31945
	ctx.r11.s64 = 2093547520;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-2400
	ctx.r3.s64 = ctx.r30.s64 + -2400;
	// ori r4,r11,24674
	ctx.r4.u64 = ctx.r11.u64 | 24674;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-20564
	ctx.r11.s64 = -1347682304;
	// ori r11,r11,31571
	ctx.r11.u64 = ctx.r11.u64 | 31571;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1060;
	sub_8279BCE0(ctx, base);
	// lis r11,-8783
	ctx.r11.s64 = -575602688;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58488
	ctx.r4.u64 = ctx.r11.u64 | 58488;
	// lis r11,10161
	ctx.r11.s64 = 665911296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7346
	ctx.r11.u64 = ctx.r11.u64 | 7346;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1090;
	sub_8279BCE0(ctx, base);
	// lis r11,-3428
	ctx.r11.s64 = -224657408;
	// addi r3,r30,-1720
	ctx.r3.s64 = ctx.r30.s64 + -1720;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28261
	ctx.r4.u64 = ctx.r11.u64 | 28261;
	// lis r11,-22743
	ctx.r11.s64 = -1490485248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19265
	ctx.r11.u64 = ctx.r11.u64 | 19265;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B10C0;
	sub_8279BCE0(ctx, base);
	// lis r11,-2152
	ctx.r11.s64 = -141033472;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30873
	ctx.r4.u64 = ctx.r11.u64 | 30873;
	// lis r11,26388
	ctx.r11.s64 = 1729363968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30680
	ctx.r11.u64 = ctx.r11.u64 | 30680;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B10F0;
	sub_8279BCE0(ctx, base);
	// lis r11,-10059
	ctx.r11.s64 = -659226624;
	// addi r3,r30,-1000
	ctx.r3.s64 = ctx.r30.s64 + -1000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62084
	ctx.r4.u64 = ctx.r11.u64 | 62084;
	// lis r11,-6260
	ctx.r11.s64 = -410255360;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8235
	ctx.r11.u64 = ctx.r11.u64 | 8235;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1120;
	sub_8279BCE0(ctx, base);
	// lis r11,31181
	ctx.r11.s64 = 2043478016;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30366
	ctx.r4.u64 = ctx.r11.u64 | 30366;
	// lis r11,28561
	ctx.r11.s64 = 1871773696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18378
	ctx.r11.u64 = ctx.r11.u64 | 18378;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1150;
	sub_8279BCE0(ctx, base);
	// lis r11,22240
	ctx.r11.s64 = 1457520640;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64643
	ctx.r4.u64 = ctx.r11.u64 | 64643;
	// lis r11,-4343
	ctx.r11.s64 = -284622848;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,4153
	ctx.r11.u64 = ctx.r11.u64 | 4153;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B1180;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,9603
	ctx.r11.s64 = 629342208;
	// ori r4,r11,38631
	ctx.r4.u64 = ctx.r11.u64 | 38631;
	// lis r11,-19434
	ctx.r11.s64 = -1273626624;
	// ori r11,r11,32631
	ctx.r11.u64 = ctx.r11.u64 | 32631;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B11B0;
	sub_8279BCE0(ctx, base);
	// lis r11,2734
	ctx.r11.s64 = 179175424;
	// addi r3,r30,-1000
	ctx.r3.s64 = ctx.r30.s64 + -1000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7418
	ctx.r4.u64 = ctx.r11.u64 | 7418;
	// lis r11,13454
	ctx.r11.s64 = 881721344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10372
	ctx.r11.u64 = ctx.r11.u64 | 10372;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B11E0;
	sub_8279BCE0(ctx, base);
	// lis r11,-21546
	ctx.r11.s64 = -1412038656;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39136
	ctx.r4.u64 = ctx.r11.u64 | 39136;
	// lis r11,-17261
	ctx.r11.s64 = -1131216896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20325
	ctx.r11.u64 = ctx.r11.u64 | 20325;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1210;
	sub_8279BCE0(ctx, base);
	// lis r11,-31493
	ctx.r11.s64 = -2063925248;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4861
	ctx.r4.u64 = ctx.r11.u64 | 4861;
	// lis r11,15371
	ctx.r11.s64 = 1007353856;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,6294
	ctx.r11.u64 = ctx.r11.u64 | 6294;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B1240;
	sub_8279BCE0(ctx, base);
	// lis r11,22898
	ctx.r11.s64 = 1500643328;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6767
	ctx.r4.u64 = ctx.r11.u64 | 6767;
	// lis r11,-24735
	ctx.r11.s64 = -1621032960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40529
	ctx.r11.u64 = ctx.r11.u64 | 40529;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1270;
	sub_8279BCE0(ctx, base);
	// lis r11,30303
	ctx.r11.s64 = 1985937408;
	// addi r3,r30,-1000
	ctx.r3.s64 = ctx.r30.s64 + -1000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36978
	ctx.r4.u64 = ctx.r11.u64 | 36978;
	// lis r11,8185
	ctx.r11.s64 = 536412160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51618
	ctx.r11.u64 = ctx.r11.u64 | 51618;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B12A0;
	sub_8279BCE0(ctx, base);
	// lis r11,-10457
	ctx.r11.s64 = -685309952;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5224
	ctx.r4.u64 = ctx.r11.u64 | 5224;
	// lis r11,-26652
	ctx.r11.s64 = -1746665472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44611
	ctx.r11.u64 = ctx.r11.u64 | 44611;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B12D0;
	sub_8279BCE0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,-2038
	ctx.r11.s64 = -133562368;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,40565
	ctx.r4.u64 = ctx.r11.u64 | 40565;
	// lis r11,6012
	ctx.r11.s64 = 394002432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r11,r11,63920
	ctx.r11.u64 = ctx.r11.u64 | 63920;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1300;
	sub_8279BCE0(ctx, base);
	// lis r11,-29847
	ctx.r11.s64 = -1956052992;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62481
	ctx.r4.u64 = ctx.r11.u64 | 62481;
	// lis r11,19555
	ctx.r11.s64 = 1281556480;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38654
	ctx.r11.u64 = ctx.r11.u64 | 38654;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1330;
	sub_8279BCE0(ctx, base);
	// lis r11,-23484
	ctx.r11.s64 = -1539047424;
	// addi r3,r30,-1000
	ctx.r3.s64 = ctx.r30.s64 + -1000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32268
	ctx.r4.u64 = ctx.r11.u64 | 32268;
	// lis r11,-13061
	ctx.r11.s64 = -855965696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49421
	ctx.r11.u64 = ctx.r11.u64 | 49421;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1360;
	sub_8279BCE0(ctx, base);
	// lis r11,1340
	ctx.r11.s64 = 87818240;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64022
	ctx.r4.u64 = ctx.r11.u64 | 64022;
	// lis r11,17638
	ctx.r11.s64 = 1155923968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,42732
	ctx.r11.u64 = ctx.r11.u64 | 42732;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1390;
	sub_8279BCE0(ctx, base);
	// lis r11,10769
	ctx.r11.s64 = 705757184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28683
	ctx.r4.u64 = ctx.r11.u64 | 28683;
	// lis r11,-15234
	ctx.r11.s64 = -998375424;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,61727
	ctx.r11.u64 = ctx.r11.u64 | 61727;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B13C0;
	sub_8279BCE0(ctx, base);
	// lis r11,9147
	ctx.r11.s64 = 599457792;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22497
	ctx.r4.u64 = ctx.r11.u64 | 22497;
	// lis r11,28969
	ctx.r11.s64 = 1898512384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35930
	ctx.r11.u64 = ctx.r11.u64 | 35930;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B13F0;
	sub_8279BCE0(ctx, base);
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r27,r11,-20400
	ctx.r27.s64 = ctx.r11.s64 + -20400;
	// lis r11,3222
	ctx.r11.s64 = 211156992;
	// addi r3,r27,-31832
	ctx.r3.s64 = ctx.r27.s64 + -31832;
	// ori r4,r11,56828
	ctx.r4.u64 = ctx.r11.u64 | 56828;
	// lis r11,-3663
	ctx.r11.s64 = -240058368;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,56233
	ctx.r11.u64 = ctx.r11.u64 | 56233;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1428;
	sub_8279BCE0(ctx, base);
	// lis r11,-21010
	ctx.r11.s64 = -1376911360;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23014
	ctx.r4.u64 = ctx.r11.u64 | 23014;
	// lis r11,31148
	ctx.r11.s64 = 2041315328;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48200
	ctx.r11.u64 = ctx.r11.u64 | 48200;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1458;
	sub_8279BCE0(ctx, base);
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// addi r3,r27,-30816
	ctx.r3.s64 = ctx.r27.s64 + -30816;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54267
	ctx.r4.u64 = ctx.r11.u64 | 54267;
	// lis r11,-1740
	ctx.r11.s64 = -114032640;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60347
	ctx.r11.u64 = ctx.r11.u64 | 60347;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1488;
	sub_8279BCE0(ctx, base);
	// lis r11,-3680
	ctx.r11.s64 = -241172480;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47519
	ctx.r4.u64 = ctx.r11.u64 | 47519;
	// lis r11,-24021
	ctx.r11.s64 = -1574240256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34037
	ctx.r11.u64 = ctx.r11.u64 | 34037;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B14B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-8563
	ctx.r11.s64 = -561184768;
	// addi r3,r27,-31832
	ctx.r3.s64 = ctx.r27.s64 + -31832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13186
	ctx.r4.u64 = ctx.r11.u64 | 13186;
	// lis r11,8883
	ctx.r11.s64 = 582156288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54022
	ctx.r11.u64 = ctx.r11.u64 | 54022;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B14E8;
	sub_8279BCE0(ctx, base);
	// lis r11,32757
	ctx.r11.s64 = 2146762752;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47000
	ctx.r4.u64 = ctx.r11.u64 | 47000;
	// lis r11,-21842
	ctx.r11.s64 = -1431437312;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46311
	ctx.r11.u64 = ctx.r11.u64 | 46311;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1518;
	sub_8279BCE0(ctx, base);
	// lis r11,20696
	ctx.r11.s64 = 1356333056;
	// addi r3,r27,-30816
	ctx.r3.s64 = ctx.r27.s64 + -30816;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15749
	ctx.r4.u64 = ctx.r11.u64 | 15749;
	// lis r11,10806
	ctx.r11.s64 = 708182016;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58132
	ctx.r11.u64 = ctx.r11.u64 | 58132;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1548;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-29359
	ctx.r11.s64 = -1924071424;
	// ori r4,r11,13591
	ctx.r4.u64 = ctx.r11.u64 | 13591;
	// lis r11,-30372
	ctx.r11.s64 = -1990459392;
	// ori r11,r11,26067
	ctx.r11.u64 = ctx.r11.u64 | 26067;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1578;
	sub_8279BCE0(ctx, base);
	// lis r11,-23940
	ctx.r11.s64 = -1568931840;
	// addi r3,r27,-31832
	ctx.r3.s64 = ctx.r27.s64 + -31832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48906
	ctx.r4.u64 = ctx.r11.u64 | 48906;
	// lis r11,2500
	ctx.r11.s64 = 163840000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12832
	ctx.r11.u64 = ctx.r11.u64 | 12832;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B15A8;
	sub_8279BCE0(ctx, base);
	// lis r11,772
	ctx.r11.s64 = 50593792;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15120
	ctx.r4.u64 = ctx.r11.u64 | 15120;
	// lis r11,-32295
	ctx.r11.s64 = -2116485120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21953
	ctx.r11.u64 = ctx.r11.u64 | 21953;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B15D8;
	sub_8279BCE0(ctx, base);
	// lis r11,11305
	ctx.r11.s64 = 740884480;
	// addi r3,r27,-30816
	ctx.r3.s64 = ctx.r27.s64 + -30816;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45325
	ctx.r4.u64 = ctx.r11.u64 | 45325;
	// lis r11,321
	ctx.r11.s64 = 21037056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,562
	ctx.r11.u64 = ctx.r11.u64 | 562;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1608;
	sub_8279BCE0(ctx, base);
	// lis r11,24394
	ctx.r11.s64 = 1598685184;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56169
	ctx.r4.u64 = ctx.r11.u64 | 56169;
	// lis r11,23134
	ctx.r11.s64 = 1516109824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28028
	ctx.r11.u64 = ctx.r11.u64 | 28028;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1638;
	sub_8279BCE0(ctx, base);
	// lis r11,28775
	ctx.r11.s64 = 1885798400;
	// addi r3,r27,-31832
	ctx.r3.s64 = ctx.r27.s64 + -31832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20852
	ctx.r4.u64 = ctx.r11.u64 | 20852;
	// lis r11,-9530
	ctx.r11.s64 = -624558080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14991
	ctx.r11.u64 = ctx.r11.u64 | 14991;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1668;
	sub_8279BCE0(ctx, base);
	// lis r11,-12001
	ctx.r11.s64 = -786497536;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54638
	ctx.r4.u64 = ctx.r11.u64 | 54638;
	// lis r11,21211
	ctx.r11.s64 = 1390084096;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23918
	ctx.r11.u64 = ctx.r11.u64 | 23918;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1698;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-30816
	ctx.r3.s64 = ctx.r27.s64 + -30816;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,-462
	ctx.r11.s64 = -30277632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,24435
	ctx.r4.u64 = ctx.r11.u64 | 24435;
	// lis r11,-11709
	ctx.r11.s64 = -767361024;
	// ori r11,r11,2717
	ctx.r11.u64 = ctx.r11.u64 | 2717;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B16C8;
	sub_8279BCE0(ctx, base);
	// lis r11,28452
	ctx.r11.s64 = 1864630272;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48756
	ctx.r4.u64 = ctx.r11.u64 | 48756;
	// lis r11,-10557
	ctx.r11.s64 = -691863552;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33866
	ctx.r11.u64 = ctx.r11.u64 | 33866;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B16F8;
	sub_8279BCE0(ctx, base);
	// lis r11,16393
	ctx.r11.s64 = 1074331648;
	// addi r3,r27,-29768
	ctx.r3.s64 = ctx.r27.s64 + -29768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13417
	ctx.r4.u64 = ctx.r11.u64 | 13417;
	// lis r11,22107
	ctx.r11.s64 = 1448804352;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54201
	ctx.r11.u64 = ctx.r11.u64 | 54201;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1728;
	sub_8279BCE0(ctx, base);
	// lis r11,-7823
	ctx.r11.s64 = -512688128;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,45171
	ctx.r4.u64 = ctx.r11.u64 | 45171;
	// lis r11,-8634
	ctx.r11.s64 = -565837824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46168
	ctx.r11.u64 = ctx.r11.u64 | 46168;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1758;
	sub_8279BCE0(ctx, base);
	// lis r11,-12708
	ctx.r11.s64 = -832831488;
	// addi r3,r27,-29104
	ctx.r3.s64 = ctx.r27.s64 + -29104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14958
	ctx.r4.u64 = ctx.r11.u64 | 14958;
	// lis r11,24286
	ctx.r11.s64 = 1591607296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58283
	ctx.r11.u64 = ctx.r11.u64 | 58283;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1788;
	sub_8279BCE0(ctx, base);
	// lis r11,-17089
	ctx.r11.s64 = -1119944704;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20490
	ctx.r4.u64 = ctx.r11.u64 | 20490;
	// lis r11,1473
	ctx.r11.s64 = 96534528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36069
	ctx.r11.u64 = ctx.r11.u64 | 36069;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B17B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-28142
	ctx.r11.s64 = -1844314112;
	// addi r3,r27,-29768
	ctx.r3.s64 = ctx.r27.s64 + -29768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55831
	ctx.r4.u64 = ctx.r11.u64 | 55831;
	// lis r11,-31399
	ctx.r11.s64 = -2057764864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56086
	ctx.r11.u64 = ctx.r11.u64 | 56086;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B17E8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lis r11,13162
	ctx.r11.s64 = 862584832;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,24077
	ctx.r4.u64 = ctx.r11.u64 | 24077;
	// lis r11,3396
	ctx.r11.s64 = 222560256;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,48375
	ctx.r11.u64 = ctx.r11.u64 | 48375;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1818;
	sub_8279BCE0(ctx, base);
	// lis r11,7239
	ctx.r11.s64 = 474415104;
	// addi r3,r27,-29104
	ctx.r3.s64 = ctx.r27.s64 + -29104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,54288
	ctx.r4.u64 = ctx.r11.u64 | 54288;
	// lis r11,-29220
	ctx.r11.s64 = -1914961920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60164
	ctx.r11.u64 = ctx.r11.u64 | 60164;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1848;
	sub_8279BCE0(ctx, base);
	// lis r11,-15922
	ctx.r11.s64 = -1043464192;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56450
	ctx.r4.u64 = ctx.r11.u64 | 56450;
	// lis r11,11958
	ctx.r11.s64 = 783679488;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28099
	ctx.r11.u64 = ctx.r11.u64 | 28099;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1878;
	sub_8279BCE0(ctx, base);
	// lis r11,-4381
	ctx.r11.s64 = -287113216;
	// addi r3,r27,-28400
	ctx.r3.s64 = ctx.r27.s64 + -28400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22175
	ctx.r4.u64 = ctx.r11.u64 | 22175;
	// lis r11,-20946
	ctx.r11.s64 = -1372717056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14896
	ctx.r11.u64 = ctx.r11.u64 | 14896;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B18A8;
	sub_8279BCE0(ctx, base);
	// lis r11,20379
	ctx.r11.s64 = 1335558144;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53893
	ctx.r4.u64 = ctx.r11.u64 | 53893;
	// lis r11,9779
	ctx.r11.s64 = 640876544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24017
	ctx.r11.u64 = ctx.r11.u64 | 24017;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B18D8;
	sub_8279BCE0(ctx, base);
	// lis r11,24758
	ctx.r11.s64 = 1622540288;
	// addi r3,r27,-27608
	ctx.r3.s64 = ctx.r27.s64 + -27608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22680
	ctx.r4.u64 = ctx.r11.u64 | 22680;
	// lis r11,-22869
	ctx.r11.s64 = -1498742784;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2594
	ctx.r11.u64 = ctx.r11.u64 | 2594;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1908;
	sub_8279BCE0(ctx, base);
	// lis r11,5077
	ctx.r11.s64 = 332726272;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// ori r4,r11,13052
	ctx.r4.u64 = ctx.r11.u64 | 13052;
	// lis r11,-588
	ctx.r11.s64 = -38535168;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,25964
	ctx.r11.u64 = ctx.r11.u64 | 25964;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1938;
	sub_8279BCE0(ctx, base);
	// lis r11,15608
	ctx.r11.s64 = 1022885888;
	// addi r3,r27,-28400
	ctx.r3.s64 = ctx.r27.s64 + -28400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47329
	ctx.r4.u64 = ctx.r11.u64 | 47329;
	// lis r11,32044
	ctx.r11.s64 = 2100035584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12959
	ctx.r11.u64 = ctx.r11.u64 | 12959;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1968;
	sub_8279BCE0(ctx, base);
	// lis r11,-25216
	ctx.r11.s64 = -1652555776;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,15611
	ctx.r4.u64 = ctx.r11.u64 | 15611;
	// lis r11,-2767
	ctx.r11.s64 = -181338112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21886
	ctx.r11.u64 = ctx.r11.u64 | 21886;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1998;
	sub_8279BCE0(ctx, base);
	// lis r11,-19795
	ctx.r11.s64 = -1297285120;
	// addi r3,r27,-27608
	ctx.r3.s64 = ctx.r27.s64 + -27608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46822
	ctx.r4.u64 = ctx.r11.u64 | 46822;
	// lis r11,30121
	ctx.r11.s64 = 1974009856;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,653
	ctx.r11.u64 = ctx.r11.u64 | 653;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B19C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-17657
	ctx.r11.s64 = -1157169152;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37132
	ctx.r4.u64 = ctx.r11.u64 | 37132;
	// lis r11,-16130
	ctx.r11.s64 = -1057095680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32712
	ctx.r11.u64 = ctx.r11.u64 | 32712;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B19F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-27606
	ctx.r11.s64 = -1809186816;
	// addi r3,r27,-26768
	ctx.r3.s64 = ctx.r27.s64 + -26768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6929
	ctx.r4.u64 = ctx.r11.u64 | 6929;
	// lis r11,16486
	ctx.r11.s64 = 1080426496;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10299
	ctx.r11.u64 = ctx.r11.u64 | 10299;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1A28;
	sub_8279BCE0(ctx, base);
	// lis r11,13650
	ctx.r11.s64 = 894566400;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40715
	ctx.r4.u64 = ctx.r11.u64 | 40715;
	// lis r11,-14213
	ctx.r11.s64 = -931463168;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20442
	ctx.r11.u64 = ctx.r11.u64 | 20442;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1A58;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-26088
	ctx.r3.s64 = ctx.r27.s64 + -26088;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,6783
	ctx.r11.s64 = 444530688;
	// ori r4,r11,5398
	ctx.r4.u64 = ctx.r11.u64 | 5398;
	// lis r11,18659
	ctx.r11.s64 = 1222836224;
	// ori r11,r11,6185
	ctx.r11.u64 = ctx.r11.u64 | 6185;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1A88;
	sub_8279BCE0(ctx, base);
	// lis r11,26908
	ctx.r11.s64 = 1763442688;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32626
	ctx.r4.u64 = ctx.r11.u64 | 32626;
	// lis r11,5116
	ctx.r11.s64 = 335282176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30567
	ctx.r11.u64 = ctx.r11.u64 | 30567;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1AB8;
	sub_8279BCE0(ctx, base);
	// lis r11,17969
	ctx.r11.s64 = 1177616384;
	// addi r3,r27,-26768
	ctx.r3.s64 = ctx.r27.s64 + -26768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62831
	ctx.r4.u64 = ctx.r11.u64 | 62831;
	// lis r11,-27804
	ctx.r11.s64 = -1822162944;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8340
	ctx.r11.u64 = ctx.r11.u64 | 8340;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1AE8;
	sub_8279BCE0(ctx, base);
	// lis r11,-6327
	ctx.r11.s64 = -414646272;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29045
	ctx.r4.u64 = ctx.r11.u64 | 29045;
	// lis r11,7033
	ctx.r11.s64 = 460914688;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18293
	ctx.r11.u64 = ctx.r11.u64 | 18293;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1B18;
	sub_8279BCE0(ctx, base);
	// lis r11,-14236
	ctx.r11.s64 = -932970496;
	// addi r3,r27,-26088
	ctx.r3.s64 = ctx.r27.s64 + -26088;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,64360
	ctx.r4.u64 = ctx.r11.u64 | 64360;
	// lis r11,-25631
	ctx.r11.s64 = -1679753216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4230
	ctx.r11.u64 = ctx.r11.u64 | 4230;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1B48;
	sub_8279BCE0(ctx, base);
	// lis r11,5613
	ctx.r11.s64 = 367853568;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62458
	ctx.r4.u64 = ctx.r11.u64 | 62458;
	// lis r11,14475
	ctx.r11.s64 = 948633600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38465
	ctx.r11.u64 = ctx.r11.u64 | 38465;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1B78;
	sub_8279BCE0(ctx, base);
	// lis r11,15040
	ctx.r11.s64 = 985661440;
	// addi r3,r27,-25368
	ctx.r3.s64 = ctx.r27.s64 + -25368;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31207
	ctx.r4.u64 = ctx.r11.u64 | 31207;
	// lis r11,-18413
	ctx.r11.s64 = -1206714368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49586
	ctx.r11.u64 = ctx.r11.u64 | 49586;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1BA8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-25672
	ctx.r11.s64 = -1682440192;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,65021
	ctx.r4.u64 = ctx.r11.u64 | 65021;
	// lis r11,12302
	ctx.r11.s64 = 806223872;
	// ori r11,r11,42579
	ctx.r11.u64 = ctx.r11.u64 | 42579;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1BD8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19307
	ctx.r11.s64 = -1265303552;
	// addi r3,r27,-24536
	ctx.r3.s64 = ctx.r27.s64 + -24536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30688
	ctx.r4.u64 = ctx.r11.u64 | 30688;
	// lis r11,-20330
	ctx.r11.s64 = -1332346880;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61856
	ctx.r11.u64 = ctx.r11.u64 | 61856;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1C08;
	sub_8279BCE0(ctx, base);
	// lis r11,-14346
	ctx.r11.s64 = -940179456;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7556
	ctx.r4.u64 = ctx.r11.u64 | 7556;
	// lis r11,-5239
	ctx.r11.s64 = -343343104;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40686
	ctx.r11.u64 = ctx.r11.u64 | 40686;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1C38;
	sub_8279BCE0(ctx, base);
	// lis r11,-5925
	ctx.r11.s64 = -388300800;
	// addi r3,r27,-25368
	ctx.r3.s64 = ctx.r27.s64 + -25368;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38809
	ctx.r4.u64 = ctx.r11.u64 | 38809;
	// lis r11,27409
	ctx.r11.s64 = 1796276224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51485
	ctx.r11.u64 = ctx.r11.u64 | 51485;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1C68;
	sub_8279BCE0(ctx, base);
	// lis r11,18851
	ctx.r11.s64 = 1235419136;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4995
	ctx.r4.u64 = ctx.r11.u64 | 4995;
	// lis r11,-7412
	ctx.r11.s64 = -485752832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44796
	ctx.r11.u64 = ctx.r11.u64 | 44796;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1C98;
	sub_8279BCE0(ctx, base);
	// lis r11,26254
	ctx.r11.s64 = 1720582144;
	// addi r3,r27,-24536
	ctx.r3.s64 = ctx.r27.s64 + -24536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39326
	ctx.r4.u64 = ctx.r11.u64 | 39326;
	// lis r11,25492
	ctx.r11.s64 = 1670643712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63759
	ctx.r11.u64 = ctx.r11.u64 | 63759;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1CC8;
	sub_8279BCE0(ctx, base);
	// lis r11,25482
	ctx.r11.s64 = 1669988352;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36706
	ctx.r4.u64 = ctx.r11.u64 | 36706;
	// lis r11,-23639
	ctx.r11.s64 = -1549205504;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50582
	ctx.r11.u64 = ctx.r11.u64 | 50582;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1CF8;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-23664
	ctx.r3.s64 = ctx.r27.s64 + -23664;
	// lis r11,19623
	ctx.r11.s64 = 1286012928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,1407
	ctx.r4.u64 = ctx.r11.u64 | 1407;
	// lis r11,9009
	ctx.r11.s64 = 590413824;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,37477
	ctx.r11.u64 = ctx.r11.u64 | 37477;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1D28;
	sub_8279BCE0(ctx, base);
	// lis r11,-4641
	ctx.r11.s64 = -304152576;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33125
	ctx.r4.u64 = ctx.r11.u64 | 33125;
	// lis r11,-21716
	ctx.r11.s64 = -1423179776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62852
	ctx.r11.u64 = ctx.r11.u64 | 62852;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1D58;
	sub_8279BCE0(ctx, base);
	// lis r11,-15630
	ctx.r11.s64 = -1024327680;
	// addi r3,r27,-22664
	ctx.r3.s64 = ctx.r27.s64 + -22664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2936
	ctx.r4.u64 = ctx.r11.u64 | 2936;
	// lis r11,11188
	ctx.r11.s64 = 733216768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41591
	ctx.r11.u64 = ctx.r11.u64 | 41591;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1D88;
	sub_8279BCE0(ctx, base);
	// lis r11,-20079
	ctx.r11.s64 = -1315897344;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24860
	ctx.r4.u64 = ctx.r11.u64 | 24860;
	// lis r11,28843
	ctx.r11.s64 = 1890254848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52537
	ctx.r11.u64 = ctx.r11.u64 | 52537;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1DB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24900
	ctx.r11.s64 = -1631846400;
	// addi r3,r27,-23664
	ctx.r3.s64 = ctx.r27.s64 + -23664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60161
	ctx.r4.u64 = ctx.r11.u64 | 60161;
	// lis r11,-4045
	ctx.r11.s64 = -265093120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39626
	ctx.r11.u64 = ctx.r11.u64 | 39626;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1DE8;
	sub_8279BCE0(ctx, base);
	// lis r11,16324
	ctx.r11.s64 = 1069809664;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,28443
	ctx.r4.u64 = ctx.r11.u64 | 28443;
	// lis r11,30766
	ctx.r11.s64 = 2016280576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,64811
	ctx.r11.u64 = ctx.r11.u64 | 64811;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1E18;
	sub_8279BCE0(ctx, base);
	// lis r11,4329
	ctx.r11.s64 = 283705344;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-22664
	ctx.r3.s64 = ctx.r27.s64 + -22664;
	// ori r4,r11,58630
	ctx.r4.u64 = ctx.r11.u64 | 58630;
	// lis r11,-1866
	ctx.r11.s64 = -122290176;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,43736
	ctx.r11.u64 = ctx.r11.u64 | 43736;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1E48;
	sub_8279BCE0(ctx, base);
	// lis r11,-12960
	ctx.r11.s64 = -849346560;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60820
	ctx.r4.u64 = ctx.r11.u64 | 60820;
	// lis r11,23516
	ctx.r11.s64 = 1541144576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11295
	ctx.r11.u64 = ctx.r11.u64 | 11295;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1E78;
	sub_8279BCE0(ctx, base);
	// lis r11,-7603
	ctx.r11.s64 = -498270208;
	// addi r3,r27,-21632
	ctx.r3.s64 = ctx.r27.s64 + -21632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26505
	ctx.r4.u64 = ctx.r11.u64 | 26505;
	// lis r11,-9404
	ctx.r11.s64 = -616300544;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31724
	ctx.r11.u64 = ctx.r11.u64 | 31724;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1EA8;
	sub_8279BCE0(ctx, base);
	// lis r11,17205
	ctx.r11.s64 = 1127546880;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,58259
	ctx.r4.u64 = ctx.r11.u64 | 58259;
	// lis r11,21337
	ctx.r11.s64 = 1398341632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,7181
	ctx.r11.u64 = ctx.r11.u64 | 7181;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1ED8;
	sub_8279BCE0(ctx, base);
	// lis r11,27672
	ctx.r11.s64 = 1813512192;
	// addi r3,r27,-20304
	ctx.r3.s64 = ctx.r27.s64 + -20304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27022
	ctx.r4.u64 = ctx.r11.u64 | 27022;
	// lis r11,-11327
	ctx.r11.s64 = -742326272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19454
	ctx.r11.u64 = ctx.r11.u64 | 19454;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1F08;
	sub_8279BCE0(ctx, base);
	// lis r11,8059
	ctx.r11.s64 = 528154624;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1002
	ctx.r4.u64 = ctx.r11.u64 | 1002;
	// lis r11,-30498
	ctx.r11.s64 = -1998716928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9392
	ctx.r11.u64 = ctx.r11.u64 | 9392;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1F38;
	sub_8279BCE0(ctx, base);
	// lis r11,12374
	ctx.r11.s64 = 810942464;
	// addi r3,r27,-21632
	ctx.r3.s64 = ctx.r27.s64 + -21632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35319
	ctx.r4.u64 = ctx.r11.u64 | 35319;
	// lis r11,2118
	ctx.r11.s64 = 138805248;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29507
	ctx.r11.u64 = ctx.r11.u64 | 29507;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1F68;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-28370
	ctx.r11.s64 = -1859256320;
	// ori r4,r11,3565
	ctx.r4.u64 = ctx.r11.u64 | 3565;
	// lis r11,-32677
	ctx.r11.s64 = -2141519872;
	// ori r11,r11,5282
	ctx.r11.u64 = ctx.r11.u64 | 5282;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1F98;
	sub_8279BCE0(ctx, base);
	// lis r11,-16893
	ctx.r11.s64 = -1107099648;
	// addi r3,r27,-20304
	ctx.r3.s64 = ctx.r27.s64 + -20304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,34800
	ctx.r4.u64 = ctx.r11.u64 | 34800;
	// lis r11,195
	ctx.r11.s64 = 12779520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17233
	ctx.r11.u64 = ctx.r11.u64 | 17233;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1FC8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18519
	ctx.r11.s64 = -1213661184;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40986
	ctx.r4.u64 = ctx.r11.u64 | 40986;
	// lis r11,-19052
	ctx.r11.s64 = -1248591872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15892
	ctx.r11.u64 = ctx.r11.u64 | 15892;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B1FF8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26492
	ctx.r11.s64 = -1736179712;
	// addi r3,r27,-18944
	ctx.r3.s64 = ctx.r27.s64 + -18944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10759
	ctx.r4.u64 = ctx.r11.u64 | 10759;
	// lis r11,13580
	ctx.r11.s64 = 889978880;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27111
	ctx.r11.u64 = ctx.r11.u64 | 27111;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2028;
	sub_8279BCE0(ctx, base);
	// lis r11,14844
	ctx.r11.s64 = 972816384;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44573
	ctx.r4.u64 = ctx.r11.u64 | 44573;
	// lis r11,-17135
	ctx.r11.s64 = -1122959360;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3590
	ctx.r11.u64 = ctx.r11.u64 | 3590;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2058;
	sub_8279BCE0(ctx, base);
	// lis r11,5841
	ctx.r11.s64 = 382795776;
	// addi r3,r27,-17928
	ctx.r3.s64 = ctx.r27.s64 + -17928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,9216
	ctx.r4.u64 = ctx.r11.u64 | 9216;
	// lis r11,15753
	ctx.r11.s64 = 1032388608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23029
	ctx.r11.u64 = ctx.r11.u64 | 23029;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2088;
	sub_8279BCE0(ctx, base);
	// lis r11,26034
	ctx.r11.s64 = 1706164224;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20068
	ctx.r4.u64 = ctx.r11.u64 | 20068;
	// lis r11,26262
	ctx.r11.s64 = 1721106432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14011
	ctx.r11.u64 = ctx.r11.u64 | 14011;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B20B8;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-18944
	ctx.r3.s64 = ctx.r27.s64 + -18944;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,19103
	ctx.r11.s64 = 1251934208;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,50297
	ctx.r4.u64 = ctx.r11.u64 | 50297;
	// lis r11,-6642
	ctx.r11.s64 = -435290112;
	// ori r11,r11,24904
	ctx.r11.u64 = ctx.r11.u64 | 24904;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B20E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5145
	ctx.r11.s64 = -337182720;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16483
	ctx.r4.u64 = ctx.r11.u64 | 16483;
	// lis r11,28179
	ctx.r11.s64 = 1846738944;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1705
	ctx.r11.u64 = ctx.r11.u64 | 1705;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2118;
	sub_8279BCE0(ctx, base);
	// lis r11,-15158
	ctx.r11.s64 = -993394688;
	// addi r3,r27,-17928
	ctx.r3.s64 = ctx.r27.s64 + -17928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51838
	ctx.r4.u64 = ctx.r11.u64 | 51838;
	// lis r11,-4469
	ctx.r11.s64 = -292880384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20826
	ctx.r11.u64 = ctx.r11.u64 | 20826;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2148;
	sub_8279BCE0(ctx, base);
	// lis r11,6467
	ctx.r11.s64 = 423821312;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49900
	ctx.r4.u64 = ctx.r11.u64 | 49900;
	// lis r11,19937
	ctx.r11.s64 = 1306591232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55197
	ctx.r11.u64 = ctx.r11.u64 | 55197;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2178;
	sub_8279BCE0(ctx, base);
	// lis r11,13934
	ctx.r11.s64 = 913178624;
	// addi r3,r27,-16880
	ctx.r3.s64 = ctx.r27.s64 + -16880;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18673
	ctx.r4.u64 = ctx.r11.u64 | 18673;
	// lis r11,-12935
	ctx.r11.s64 = -847708160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32878
	ctx.r11.u64 = ctx.r11.u64 | 32878;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B21A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26858
	ctx.r11.s64 = -1760165888;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,52459
	ctx.r4.u64 = ctx.r11.u64 | 52459;
	// lis r11,17764
	ctx.r11.s64 = 1164181504;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59279
	ctx.r11.u64 = ctx.r11.u64 | 59279;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B21D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18373
	ctx.r11.s64 = -1204092928;
	// addi r3,r27,-15528
	ctx.r3.s64 = ctx.r27.s64 + -15528;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18166
	ctx.r4.u64 = ctx.r11.u64 | 18166;
	// lis r11,-14852
	ctx.r11.s64 = -973340672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45180
	ctx.r11.u64 = ctx.r11.u64 | 45180;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2208;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lis r11,-13480
	ctx.r11.s64 = -883425280;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,11410
	ctx.r4.u64 = ctx.r11.u64 | 11410;
	// lis r11,-24861
	ctx.r11.s64 = -1629290496;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,57138
	ctx.r11.u64 = ctx.r11.u64 | 57138;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2238;
	sub_8279BCE0(ctx, base);
	// lis r11,-7051
	ctx.r11.s64 = -462094336;
	// addi r3,r27,-16880
	ctx.r3.s64 = ctx.r27.s64 + -16880;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42639
	ctx.r4.u64 = ctx.r11.u64 | 42639;
	// lis r11,7803
	ctx.r11.s64 = 511377408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35009
	ctx.r11.u64 = ctx.r11.u64 | 35009;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2268;
	sub_8279BCE0(ctx, base);
	// lis r11,17677
	ctx.r11.s64 = 1158479872;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,8853
	ctx.r4.u64 = ctx.r11.u64 | 8853;
	// lis r11,-27034
	ctx.r11.s64 = -1771700224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61216
	ctx.r11.u64 = ctx.r11.u64 | 61216;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2298;
	sub_8279BCE0(ctx, base);
	// lis r11,27168
	ctx.r11.s64 = 1780482048;
	// addi r3,r27,-15528
	ctx.r3.s64 = ctx.r27.s64 + -15528;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,43144
	ctx.r4.u64 = ctx.r11.u64 | 43144;
	// lis r11,5886
	ctx.r11.s64 = 385744896;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47315
	ctx.r11.u64 = ctx.r11.u64 | 47315;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B22C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-17669
	ctx.r11.s64 = -1157955584;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62996
	ctx.r4.u64 = ctx.r11.u64 | 62996;
	// lis r11,12966
	ctx.r11.s64 = 849739776;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38529
	ctx.r11.u64 = ctx.r11.u64 | 38529;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B22F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-27178
	ctx.r11.s64 = -1781137408;
	// addi r3,r27,-29768
	ctx.r3.s64 = ctx.r27.s64 + -29768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31753
	ctx.r4.u64 = ctx.r11.u64 | 31753;
	// lis r11,-19906
	ctx.r11.s64 = -1304559616;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49522
	ctx.r11.u64 = ctx.r11.u64 | 49522;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2328;
	sub_8279BCE0(ctx, base);
	// lis r11,13486
	ctx.r11.s64 = 883818496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// ori r4,r11,63507
	ctx.r4.u64 = ctx.r11.u64 | 63507;
	// lis r11,14883
	ctx.r11.s64 = 975372288;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,42643
	ctx.r11.u64 = ctx.r11.u64 | 42643;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2358;
	sub_8279BCE0(ctx, base);
	// lis r11,7043
	ctx.r11.s64 = 461570048;
	// addi r3,r27,-29104
	ctx.r3.s64 = ctx.r27.s64 + -29104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29198
	ctx.r4.u64 = ctx.r11.u64 | 29198;
	// lis r11,-17733
	ctx.r11.s64 = -1162149888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61792
	ctx.r11.u64 = ctx.r11.u64 | 61792;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2388;
	sub_8279BCE0(ctx, base);
	// lis r11,26848
	ctx.r11.s64 = 1759510528;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6250
	ctx.r4.u64 = ctx.r11.u64 | 6250;
	// lis r11,-7772
	ctx.r11.s64 = -509345792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40494
	ctx.r11.u64 = ctx.r11.u64 | 40494;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B23B8;
	sub_8279BCE0(ctx, base);
	// lis r11,18381
	ctx.r11.s64 = 1204617216;
	// addi r3,r27,-29768
	ctx.r3.s64 = ctx.r27.s64 + -29768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37495
	ctx.r4.u64 = ctx.r11.u64 | 37495;
	// lis r11,24892
	ctx.r11.s64 = 1631322112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51677
	ctx.r11.u64 = ctx.r11.u64 | 51677;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B23E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-6475
	ctx.r11.s64 = -424345600;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,5741
	ctx.r4.u64 = ctx.r11.u64 | 5741;
	// lis r11,-5855
	ctx.r11.s64 = -383713280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,44604
	ctx.r11.u64 = ctx.r11.u64 | 44604;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2418;
	sub_8279BCE0(ctx, base);
	// lis r11,-13928
	ctx.r11.s64 = -912785408;
	// addi r3,r27,-29104
	ctx.r3.s64 = ctx.r27.s64 + -29104;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,40048
	ctx.r4.u64 = ctx.r11.u64 | 40048;
	// lis r11,27065
	ctx.r11.s64 = 1773731840;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,63951
	ctx.r11.u64 = ctx.r11.u64 | 63951;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2448;
	sub_8279BCE0(ctx, base);
	// lis r11,5137
	ctx.r11.s64 = 336658432;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38114
	ctx.r4.u64 = ctx.r11.u64 | 38114;
	// lis r11,-13613
	ctx.r11.s64 = -892141568;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32520
	ctx.r11.u64 = ctx.r11.u64 | 32520;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2478;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-28400
	ctx.r3.s64 = ctx.r27.s64 + -28400;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,15164
	ctx.r11.s64 = 993787904;
	// ori r4,r11,7935
	ctx.r4.u64 = ctx.r11.u64 | 7935;
	// lis r11,19019
	ctx.r11.s64 = 1246429184;
	// ori r11,r11,10491
	ctx.r11.u64 = ctx.r11.u64 | 10491;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B24A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26044
	ctx.r11.s64 = -1706819584;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,39653
	ctx.r4.u64 = ctx.r11.u64 | 39653;
	// lis r11,-15786
	ctx.r11.s64 = -1034551296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20250
	ctx.r11.u64 = ctx.r11.u64 | 20250;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B24D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19095
	ctx.r11.s64 = -1251409920;
	// addi r3,r27,-27608
	ctx.r3.s64 = ctx.r27.s64 + -27608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,4344
	ctx.r4.u64 = ctx.r11.u64 | 4344;
	// lis r11,17102
	ctx.r11.s64 = 1120796672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,6377
	ctx.r11.u64 = ctx.r11.u64 | 6377;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2508;
	sub_8279BCE0(ctx, base);
	// lis r11,-14838
	ctx.r11.s64 = -972423168;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31388
	ctx.r4.u64 = ctx.r11.u64 | 31388;
	// lis r11,6609
	ctx.r11.s64 = 433127424;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30631
	ctx.r11.u64 = ctx.r11.u64 | 30631;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2538;
	sub_8279BCE0(ctx, base);
	// lis r11,-5849
	ctx.r11.s64 = -383320064;
	// addi r3,r27,-28400
	ctx.r3.s64 = ctx.r27.s64 + -28400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61569
	ctx.r4.u64 = ctx.r11.u64 | 61569;
	// lis r11,-26295
	ctx.r11.s64 = -1723269120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8276
	ctx.r11.u64 = ctx.r11.u64 | 8276;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2568;
	sub_8279BCE0(ctx, base);
	// lis r11,18527
	ctx.r11.s64 = 1214185472;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,29851
	ctx.r4.u64 = ctx.r11.u64 | 29851;
	// lis r11,4436
	ctx.r11.s64 = 290717696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,18357
	ctx.r11.u64 = ctx.r11.u64 | 18357;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2598;
	sub_8279BCE0(ctx, base);
	// lis r11,26482
	ctx.r11.s64 = 1735524352;
	// addi r3,r27,-27608
	ctx.r3.s64 = ctx.r27.s64 + -27608;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,65158
	ctx.r4.u64 = ctx.r11.u64 | 65158;
	// lis r11,-28212
	ctx.r11.s64 = -1848901632;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,4166
	ctx.r11.u64 = ctx.r11.u64 | 4166;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B25C8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,28376
	ctx.r11.s64 = 1859649536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,55660
	ctx.r4.u64 = ctx.r11.u64 | 55660;
	// lis r11,9371
	ctx.r11.s64 = 614137856;
	// ori r11,r11,27907
	ctx.r11.u64 = ctx.r11.u64 | 27907;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B25F8;
	sub_8279BCE0(ctx, base);
	// lis r11,16885
	ctx.r11.s64 = 1106575360;
	// addi r3,r27,-26768
	ctx.r3.s64 = ctx.r27.s64 + -26768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21361
	ctx.r4.u64 = ctx.r11.u64 | 21361;
	// lis r11,-23549
	ctx.r11.s64 = -1543307264;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15088
	ctx.r11.u64 = ctx.r11.u64 | 15088;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2628;
	sub_8279BCE0(ctx, base);
	// lis r11,-8051
	ctx.r11.s64 = -527630336;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55147
	ctx.r4.u64 = ctx.r11.u64 | 55147;
	// lis r11,11294
	ctx.r11.s64 = 740163584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,23825
	ctx.r11.u64 = ctx.r11.u64 | 23825;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2658;
	sub_8279BCE0(ctx, base);
	// lis r11,-12384
	ctx.r11.s64 = -811597824;
	// addi r3,r27,-26088
	ctx.r3.s64 = ctx.r27.s64 + -26088;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23926
	ctx.r4.u64 = ctx.r11.u64 | 23926;
	// lis r11,-21370
	ctx.r11.s64 = -1400504320;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,2786
	ctx.r11.u64 = ctx.r11.u64 | 2786;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2688;
	sub_8279BCE0(ctx, base);
	// lis r11,-17213
	ctx.r11.s64 = -1128071168;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14098
	ctx.r4.u64 = ctx.r11.u64 | 14098;
	// lis r11,-2151
	ctx.r11.s64 = -140967936;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26028
	ctx.r11.u64 = ctx.r11.u64 | 26028;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B26B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-27666
	ctx.r11.s64 = -1813118976;
	// addi r3,r27,-26768
	ctx.r3.s64 = ctx.r27.s64 + -26768;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48399
	ctx.r4.u64 = ctx.r11.u64 | 48399;
	// lis r11,30465
	ctx.r11.s64 = 1996554240;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12895
	ctx.r11.u64 = ctx.r11.u64 | 12895;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B26E8;
	sub_8279BCE0(ctx, base);
	// lis r11,12950
	ctx.r11.s64 = 848691200;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14613
	ctx.r4.u64 = ctx.r11.u64 | 14613;
	// lis r11,-228
	ctx.r11.s64 = -14942208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,21950
	ctx.r11.u64 = ctx.r11.u64 | 21950;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2718;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-26088
	ctx.r3.s64 = ctx.r27.s64 + -26088;
	// lis r11,7611
	ctx.r11.s64 = 498794496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,45832
	ctx.r4.u64 = ctx.r11.u64 | 45832;
	// lis r11,32644
	ctx.r11.s64 = 2139357184;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,589
	ctx.r11.u64 = ctx.r11.u64 | 589;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2748;
	sub_8279BCE0(ctx, base);
	// lis r11,-16334
	ctx.r11.s64 = -1070465024;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48026
	ctx.r4.u64 = ctx.r11.u64 | 48026;
	// lis r11,-8978
	ctx.r11.s64 = -588382208;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33930
	ctx.r11.u64 = ctx.r11.u64 | 33930;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2778;
	sub_8279BCE0(ctx, base);
	// lis r11,-4321
	ctx.r11.s64 = -283181056;
	// addi r3,r27,-25368
	ctx.r3.s64 = ctx.r27.s64 + -25368;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12679
	ctx.r4.u64 = ctx.r11.u64 | 12679;
	// lis r11,23670
	ctx.r11.s64 = 1551237120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54137
	ctx.r11.u64 = ctx.r11.u64 | 54137;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B27A8;
	sub_8279BCE0(ctx, base);
	// lis r11,20071
	ctx.r11.s64 = 1315373056;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,46493
	ctx.r4.u64 = ctx.r11.u64 | 46493;
	// lis r11,-11157
	ctx.r11.s64 = -731185152;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,46232
	ctx.r11.u64 = ctx.r11.u64 | 46232;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B27D8;
	sub_8279BCE0(ctx, base);
	// lis r11,24906
	ctx.r11.s64 = 1632239616;
	// addi r3,r27,-24536
	ctx.r3.s64 = ctx.r27.s64 + -24536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,16256
	ctx.r4.u64 = ctx.r11.u64 | 16256;
	// lis r11,21747
	ctx.r11.s64 = 1425211392;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,58219
	ctx.r11.u64 = ctx.r11.u64 | 58219;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2808;
	sub_8279BCE0(ctx, base);
	// lis r11,4649
	ctx.r11.s64 = 304676864;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21988
	ctx.r4.u64 = ctx.r11.u64 | 21988;
	// lis r11,4076
	ctx.r11.s64 = 267124736;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35877
	ctx.r11.u64 = ctx.r11.u64 | 35877;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2838;
	sub_8279BCE0(ctx, base);
	// lis r11,15620
	ctx.r11.s64 = 1023672320;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-25368
	ctx.r3.s64 = ctx.r27.s64 + -25368;
	// ori r4,r11,57337
	ctx.r4.u64 = ctx.r11.u64 | 57337;
	// lis r11,-28812
	ctx.r11.s64 = -1888223232;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,56278
	ctx.r11.u64 = ctx.r11.u64 | 56278;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2868;
	sub_8279BCE0(ctx, base);
	// lis r11,-25476
	ctx.r11.s64 = -1669595136;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,23523
	ctx.r4.u64 = ctx.r11.u64 | 23523;
	// lis r11,1897
	ctx.r11.s64 = 124321792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,48183
	ctx.r11.u64 = ctx.r11.u64 | 48183;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2898;
	sub_8279BCE0(ctx, base);
	// lis r11,-19631
	ctx.r11.s64 = -1286537216;
	// addi r3,r27,-24536
	ctx.r3.s64 = ctx.r27.s64 + -24536;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53758
	ctx.r4.u64 = ctx.r11.u64 | 53758;
	// lis r11,-30735
	ctx.r11.s64 = -2014248960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,60356
	ctx.r11.u64 = ctx.r11.u64 | 60356;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B28C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18859
	ctx.r11.s64 = -1235943424;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50946
	ctx.r4.u64 = ctx.r11.u64 | 50946;
	// lis r11,18380
	ctx.r11.s64 = 1204551680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55133
	ctx.r11.u64 = ctx.r11.u64 | 55133;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B28F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26248
	ctx.r11.s64 = -1720188928;
	// addi r3,r27,-23664
	ctx.r3.s64 = ctx.r27.s64 + -23664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19743
	ctx.r4.u64 = ctx.r11.u64 | 19743;
	// lis r11,-14508
	ctx.r11.s64 = -950796288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32942
	ctx.r11.u64 = ctx.r11.u64 | 32942;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2928;
	sub_8279BCE0(ctx, base);
	// lis r11,14336
	ctx.r11.s64 = 939524096;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51461
	ctx.r4.u64 = ctx.r11.u64 | 51461;
	// lis r11,20297
	ctx.r11.s64 = 1330184192;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,59215
	ctx.r11.u64 = ctx.r11.u64 | 59215;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2958;
	sub_8279BCE0(ctx, base);
	// lis r11,5933
	ctx.r11.s64 = 388825088;
	// addi r3,r27,-22664
	ctx.r3.s64 = ctx.r27.s64 + -22664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17176
	ctx.r4.u64 = ctx.r11.u64 | 17176;
	// lis r11,-12335
	ctx.r11.s64 = -808386560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,45244
	ctx.r11.u64 = ctx.r11.u64 | 45244;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2988;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,25678
	ctx.r11.s64 = 1682833408;
	// ori r4,r11,10620
	ctx.r4.u64 = ctx.r11.u64 | 10620;
	// lis r11,-27442
	ctx.r11.s64 = -1798438912;
	// ori r11,r11,57330
	ctx.r11.u64 = ctx.r11.u64 | 57330;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B29B8;
	sub_8279BCE0(ctx, base);
	// lis r11,19299
	ctx.r11.s64 = 1264779264;
	// addi r3,r27,-23664
	ctx.r3.s64 = ctx.r27.s64 + -23664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41825
	ctx.r4.u64 = ctx.r11.u64 | 41825;
	// lis r11,5206
	ctx.r11.s64 = 341180416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34817
	ctx.r11.u64 = ctx.r11.u64 | 34817;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B29E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5605
	ctx.r11.s64 = -367329280;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10107
	ctx.r4.u64 = ctx.r11.u64 | 10107;
	// lis r11,-25525
	ctx.r11.s64 = -1672806400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,61408
	ctx.r11.u64 = ctx.r11.u64 | 61408;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2A18;
	sub_8279BCE0(ctx, base);
	// lis r11,-15050
	ctx.r11.s64 = -986316800;
	// addi r3,r27,-22664
	ctx.r3.s64 = ctx.r27.s64 + -22664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44390
	ctx.r4.u64 = ctx.r11.u64 | 44390;
	// lis r11,7379
	ctx.r11.s64 = 483590144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,47123
	ctx.r11.u64 = ctx.r11.u64 | 47123;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2A48;
	sub_8279BCE0(ctx, base);
	// lis r11,6335
	ctx.r11.s64 = 415170560;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42484
	ctx.r4.u64 = ctx.r11.u64 | 42484;
	// lis r11,-16455
	ctx.r11.s64 = -1078394880;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,16084
	ctx.r11.u64 = ctx.r11.u64 | 16084;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2A78;
	sub_8279BCE0(ctx, base);
	// lis r11,14226
	ctx.r11.s64 = 932315136;
	// addi r3,r27,-21632
	ctx.r3.s64 = ctx.r27.s64 + -21632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12265
	ctx.r4.u64 = ctx.r11.u64 | 12265;
	// lis r11,16161
	ctx.r11.s64 = 1059127296;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26919
	ctx.r11.u64 = ctx.r11.u64 | 26919;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2AA8;
	sub_8279BCE0(ctx, base);
	// lis r11,-26902
	ctx.r11.s64 = -1763049472;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,44019
	ctx.r4.u64 = ctx.r11.u64 | 44019;
	// lis r11,-18628
	ctx.r11.s64 = -1220804608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,3782
	ctx.r11.u64 = ctx.r11.u64 | 3782;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2AD8;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-20304
	ctx.r3.s64 = ctx.r27.s64 + -20304;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,-17977
	ctx.r11.s64 = -1178140672;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,8686
	ctx.r4.u64 = ctx.r11.u64 | 8686;
	// lis r11,14244
	ctx.r11.s64 = 933494784;
	// ori r11,r11,22837
	ctx.r11.u64 = ctx.r11.u64 | 22837;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2B08;
	sub_8279BCE0(ctx, base);
	// lis r11,-13660
	ctx.r11.s64 = -895221760;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19338
	ctx.r4.u64 = ctx.r11.u64 | 19338;
	// lis r11,27835
	ctx.r11.s64 = 1824194560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13947
	ctx.r11.u64 = ctx.r11.u64 | 13947;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2B38;
	sub_8279BCE0(ctx, base);
	// lis r11,-6775
	ctx.r11.s64 = -444006400;
	// addi r3,r27,-21632
	ctx.r3.s64 = ctx.r27.s64 + -21632;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49559
	ctx.r4.u64 = ctx.r11.u64 | 49559;
	// lis r11,-5085
	ctx.r11.s64 = -333250560;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,24968
	ctx.r11.u64 = ctx.r11.u64 | 24968;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2B68;
	sub_8279BCE0(ctx, base);
	// lis r11,17649
	ctx.r11.s64 = 1156644864;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,17805
	ctx.r4.u64 = ctx.r11.u64 | 17805;
	// lis r11,25662
	ctx.r11.s64 = 1681784832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,1641
	ctx.r11.u64 = ctx.r11.u64 | 1641;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2B98;
	sub_8279BCE0(ctx, base);
	// lis r11,27612
	ctx.r11.s64 = 1809580032;
	// addi r3,r27,-20304
	ctx.r3.s64 = ctx.r27.s64 + -20304;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,53136
	ctx.r4.u64 = ctx.r11.u64 | 53136;
	// lis r11,-7002
	ctx.r11.s64 = -458883072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,20890
	ctx.r11.u64 = ctx.r11.u64 | 20890;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2BC8;
	sub_8279BCE0(ctx, base);
	// lis r11,25206
	ctx.r11.s64 = 1651900416;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59514
	ctx.r4.u64 = ctx.r11.u64 | 59514;
	// lis r11,20977
	ctx.r11.s64 = 1374748672;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11487
	ctx.r11.u64 = ctx.r11.u64 | 11487;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2BF8;
	sub_8279BCE0(ctx, base);
	// lis r11,19803
	ctx.r11.s64 = 1297809408;
	// addi r3,r27,-18944
	ctx.r3.s64 = ctx.r27.s64 + -18944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25191
	ctx.r4.u64 = ctx.r11.u64 | 25191;
	// lis r11,-11927
	ctx.r11.s64 = -781647872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31532
	ctx.r11.u64 = ctx.r11.u64 | 31532;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2C28;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lis r11,-5085
	ctx.r11.s64 = -333250560;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,59005
	ctx.r4.u64 = ctx.r11.u64 | 59005;
	// lis r11,22900
	ctx.r11.s64 = 1500774400;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,7373
	ctx.r11.u64 = ctx.r11.u64 | 7373;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2C58;
	sub_8279BCE0(ctx, base);
	// lis r11,-15602
	ctx.r11.s64 = -1022492672;
	// addi r3,r27,-17928
	ctx.r3.s64 = ctx.r27.s64 + -17928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27744
	ctx.r4.u64 = ctx.r11.u64 | 27744;
	// lis r11,-9748
	ctx.r11.s64 = -638844928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,19262
	ctx.r11.u64 = ctx.r11.u64 | 19262;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2C88;
	sub_8279BCE0(ctx, base);
	// lis r11,-20371
	ctx.r11.s64 = -1335033856;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1540
	ctx.r4.u64 = ctx.r11.u64 | 1540;
	// lis r11,-32013
	ctx.r11.s64 = -2098003968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9328
	ctx.r11.u64 = ctx.r11.u64 | 9328;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2CB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24768
	ctx.r11.s64 = -1623195648;
	// addi r3,r27,-18944
	ctx.r3.s64 = ctx.r27.s64 + -18944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35865
	ctx.r4.u64 = ctx.r11.u64 | 35865;
	// lis r11,619
	ctx.r11.s64 = 40566784;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29571
	ctx.r11.u64 = ctx.r11.u64 | 29571;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2CE8;
	sub_8279BCE0(ctx, base);
	// lis r11,15928
	ctx.r11.s64 = 1043857408;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,2051
	ctx.r4.u64 = ctx.r11.u64 | 2051;
	// lis r11,-30090
	ctx.r11.s64 = -1971978240;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,5218
	ctx.r11.u64 = ctx.r11.u64 | 5218;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2D18;
	sub_8279BCE0(ctx, base);
	// lis r11,4373
	ctx.r11.s64 = 286588928;
	// addi r3,r27,-17928
	ctx.r3.s64 = ctx.r27.s64 + -17928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33310
	ctx.r4.u64 = ctx.r11.u64 | 33310;
	// lis r11,2798
	ctx.r11.s64 = 183369728;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,17297
	ctx.r11.u64 = ctx.r11.u64 | 17297;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2D48;
	sub_8279BCE0(ctx, base);
	// lis r11,-13156
	ctx.r11.s64 = -862191616;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// ori r4,r11,35468
	ctx.r4.u64 = ctx.r11.u64 | 35468;
	// lis r11,-22140
	ctx.r11.s64 = -1450967040;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,50518
	ctx.r11.u64 = ctx.r11.u64 | 50518;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2D78;
	sub_8279BCE0(ctx, base);
	// lis r11,-7247
	ctx.r11.s64 = -474939392;
	// addi r3,r27,-16880
	ctx.r3.s64 = ctx.r27.s64 + -16880;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,145
	ctx.r4.u64 = ctx.r11.u64 | 145;
	// lis r11,10524
	ctx.r11.s64 = 689700864;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37541
	ctx.r11.u64 = ctx.r11.u64 | 37541;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2DA8;
	sub_8279BCE0(ctx, base);
	// lis r11,17097
	ctx.r11.s64 = 1120468992;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,33931
	ctx.r4.u64 = ctx.r11.u64 | 33931;
	// lis r11,-24319
	ctx.r11.s64 = -1593769984;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,62788
	ctx.r11.u64 = ctx.r11.u64 | 62788;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2DD8;
	sub_8279BCE0(ctx, base);
	// lis r11,28132
	ctx.r11.s64 = 1843658752;
	// addi r3,r27,-15528
	ctx.r3.s64 = ctx.r27.s64 + -15528;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,3734
	ctx.r4.u64 = ctx.r11.u64 | 3734;
	// lis r11,8601
	ctx.r11.s64 = 563675136;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,41655
	ctx.r11.u64 = ctx.r11.u64 | 41655;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2E08;
	sub_8279BCE0(ctx, base);
	// lis r11,7815
	ctx.r11.s64 = 512163840;
	// addi r3,r30,-10952
	ctx.r3.s64 = ctx.r30.s64 + -10952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25842
	ctx.r4.u64 = ctx.r11.u64 | 25842;
	// lis r11,31366
	ctx.r11.s64 = 2055602176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52729
	ctx.r11.u64 = ctx.r11.u64 | 52729;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2E38;
	sub_8279BCE0(ctx, base);
	// lis r11,12714
	ctx.r11.s64 = 833224704;
	// addi r3,r27,-16880
	ctx.r3.s64 = ctx.r27.s64 + -16880;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61167
	ctx.r4.u64 = ctx.r11.u64 | 61167;
	// lis r11,-1506
	ctx.r11.s64 = -98697216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39434
	ctx.r11.u64 = ctx.r11.u64 | 39434;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2E68;
	sub_8279BCE0(ctx, base);
	// lis r11,-28462
	ctx.r11.s64 = -1865285632;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,27381
	ctx.r4.u64 = ctx.r11.u64 | 27381;
	// lis r11,29187
	ctx.r11.s64 = 1912799232;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,65003
	ctx.r11.u64 = ctx.r11.u64 | 65003;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2E98;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-15528
	ctx.r3.s64 = ctx.r27.s64 + -15528;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-16385
	ctx.r11.s64 = -1073807360;
	// ori r4,r11,57576
	ctx.r4.u64 = ctx.r11.u64 | 57576;
	// lis r11,-3429
	ctx.r11.s64 = -224722944;
	// ori r11,r11,43544
	ctx.r11.u64 = ctx.r11.u64 | 43544;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2EC8;
	sub_8279BCE0(ctx, base);
	// lis r11,30915
	ctx.r11.s64 = 2026045440;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12946
	ctx.r4.u64 = ctx.r11.u64 | 12946;
	// lis r11,4896
	ctx.r11.s64 = 320864256;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38074
	ctx.r11.u64 = ctx.r11.u64 | 38074;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2EF8;
	sub_8279BCE0(ctx, base);
	// lis r11,22510
	ctx.r11.s64 = 1475215360;
	// addi r3,r27,-14136
	ctx.r3.s64 = ctx.r27.s64 + -14136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47247
	ctx.r4.u64 = ctx.r11.u64 | 47247;
	// lis r11,-27720
	ctx.r11.s64 = -1816657920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,49993
	ctx.r11.u64 = ctx.r11.u64 | 49993;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2F28;
	sub_8279BCE0(ctx, base);
	// lis r11,-21800
	ctx.r11.s64 = -1428684800;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56556
	ctx.r4.u64 = ctx.r11.u64 | 56556;
	// lis r11,-16350
	ctx.r11.s64 = -1071513600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39957
	ctx.r11.u64 = ctx.r11.u64 | 39957;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2F58;
	sub_8279BCE0(ctx, base);
	// lis r11,-31243
	ctx.r11.s64 = -2047541248;
	// addi r3,r27,-14136
	ctx.r3.s64 = ctx.r27.s64 + -14136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22257
	ctx.r4.u64 = ctx.r11.u64 | 22257;
	// lis r11,16570
	ctx.r11.s64 = 1085931520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52198
	ctx.r11.u64 = ctx.r11.u64 | 52198;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2F88;
	sub_8279BCE0(ctx, base);
	// lis r11,-10711
	ctx.r11.s64 = -701956096;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20580
	ctx.r4.u64 = ctx.r11.u64 | 20580;
	// lis r11,-5291
	ctx.r11.s64 = -346750976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32051
	ctx.r11.u64 = ctx.r11.u64 | 32051;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2FB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-1788
	ctx.r11.s64 = -117178368;
	// addi r3,r27,-14136
	ctx.r3.s64 = ctx.r27.s64 + -14136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55929
	ctx.r4.u64 = ctx.r11.u64 | 55929;
	// lis r11,27597
	ctx.r11.s64 = 1808596992;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10944
	ctx.r11.u64 = ctx.r11.u64 | 10944;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B2FE8;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,1074
	ctx.r11.s64 = 70385664;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,48666
	ctx.r4.u64 = ctx.r11.u64 | 48666;
	// lis r11,14423
	ctx.r11.s64 = 945225728;
	// ori r11,r11,30108
	ctx.r11.u64 = ctx.r11.u64 | 30108;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3018;
	sub_8279BCE0(ctx, base);
	// lis r11,11039
	ctx.r11.s64 = 723451904;
	// addi r3,r27,-14136
	ctx.r3.s64 = ctx.r27.s64 + -14136;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13319
	ctx.r4.u64 = ctx.r11.u64 | 13319;
	// lis r11,-18225
	ctx.r11.s64 = -1194393600;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8815
	ctx.r11.u64 = ctx.r11.u64 | 8815;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3048;
	sub_8279BCE0(ctx, base);
	// lis r11,-21280
	ctx.r11.s64 = -1394606080;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7658
	ctx.r4.u64 = ctx.r11.u64 | 7658;
	// lis r11,1309
	ctx.r11.s64 = 85786624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28472
	ctx.r11.u64 = ctx.r11.u64 | 28472;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3078;
	sub_8279BCE0(ctx, base);
	// lis r11,-31795
	ctx.r11.s64 = -2083717120;
	// addi r3,r27,-13424
	ctx.r3.s64 = ctx.r27.s64 + -13424;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38903
	ctx.r4.u64 = ctx.r11.u64 | 38903;
	// lis r11,-31355
	ctx.r11.s64 = -2054881280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14539
	ctx.r11.u64 = ctx.r11.u64 | 14539;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B30A8;
	sub_8279BCE0(ctx, base);
	// lis r11,32507
	ctx.r11.s64 = 2130378752;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62356
	ctx.r4.u64 = ctx.r11.u64 | 62356;
	// lis r11,-10721
	ctx.r11.s64 = -702611456;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26519
	ctx.r11.u64 = ctx.r11.u64 | 26519;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B30D8;
	sub_8279BCE0(ctx, base);
	// lis r11,20950
	ctx.r11.s64 = 1372979200;
	// addi r3,r27,-13424
	ctx.r3.s64 = ctx.r27.s64 + -13424;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31113
	ctx.r4.u64 = ctx.r11.u64 | 31113;
	// lis r11,22151
	ctx.r11.s64 = 1451687936;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12388
	ctx.r11.u64 = ctx.r11.u64 | 12388;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3108;
	sub_8279BCE0(ctx, base);
	// lis r11,522
	ctx.r11.s64 = 34209792;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32540
	ctx.r4.u64 = ctx.r11.u64 | 32540;
	// lis r11,-664
	ctx.r11.s64 = -43515904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34481
	ctx.r11.u64 = ctx.r11.u64 | 34481;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3138;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-13424
	ctx.r3.s64 = ctx.r27.s64 + -13424;
	// lis r11,11559
	ctx.r11.s64 = 757530624;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,62721
	ctx.r4.u64 = ctx.r11.u64 | 62721;
	// lis r11,32240
	ctx.r11.s64 = 2112880640;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,53570
	ctx.r11.u64 = ctx.r11.u64 | 53570;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3168;
	sub_8279BCE0(ctx, base);
	// lis r11,-12271
	ctx.r11.s64 = -804192256;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37218
	ctx.r4.u64 = ctx.r11.u64 | 37218;
	// lis r11,11882
	ctx.r11.s64 = 778698752;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36382
	ctx.r11.u64 = ctx.r11.u64 | 36382;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3198;
	sub_8279BCE0(ctx, base);
	// lis r11,-196
	ctx.r11.s64 = -12845056;
	// addi r3,r27,-13424
	ctx.r3.s64 = ctx.r27.s64 + -13424;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7039
	ctx.r4.u64 = ctx.r11.u64 | 7039;
	// lis r11,-20750
	ctx.r11.s64 = -1359872000;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55789
	ctx.r11.u64 = ctx.r11.u64 | 55789;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B31C8;
	sub_8279BCE0(ctx, base);
	// lis r11,29805
	ctx.r11.s64 = 1953300480;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,900
	ctx.r4.u64 = ctx.r11.u64 | 900;
	// lis r11,26186
	ctx.r11.s64 = 1716125696;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54630
	ctx.r11.u64 = ctx.r11.u64 | 54630;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B31F8;
	sub_8279BCE0(ctx, base);
	// lis r11,23360
	ctx.r11.s64 = 1530920960;
	// addi r3,r27,-12696
	ctx.r3.s64 = ctx.r27.s64 + -12696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35225
	ctx.r4.u64 = ctx.r11.u64 | 35225;
	// lis r11,-6446
	ctx.r11.s64 = -422445056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33429
	ctx.r11.u64 = ctx.r11.u64 | 33429;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3228;
	sub_8279BCE0(ctx, base);
	// lis r11,-22922
	ctx.r11.s64 = -1502216192;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60922
	ctx.r4.u64 = ctx.r11.u64 | 60922;
	// lis r11,-19128
	ctx.r11.s64 = -1253572608;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56777
	ctx.r11.u64 = ctx.r11.u64 | 56777;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3258;
	sub_8279BCE0(ctx, base);
	// lis r11,-30373
	ctx.r11.s64 = -1990524928;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-12696
	ctx.r3.s64 = ctx.r27.s64 + -12696;
	// ori r4,r11,26599
	ctx.r4.u64 = ctx.r11.u64 | 26599;
	// lis r11,13776
	ctx.r11.s64 = 902823936;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,35386
	ctx.r11.u64 = ctx.r11.u64 | 35386;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3288;
	sub_8279BCE0(ctx, base);
	// lis r11,-9593
	ctx.r11.s64 = -628686848;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24946
	ctx.r4.u64 = ctx.r11.u64 | 24946;
	// lis r11,-25025
	ctx.r11.s64 = -1640038400;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15599
	ctx.r11.u64 = ctx.r11.u64 | 15599;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B32B8;
	sub_8279BCE0(ctx, base);
	// lis r11,-2646
	ctx.r11.s64 = -173408256;
	// addi r3,r27,-12696
	ctx.r3.s64 = ctx.r27.s64 + -12696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60271
	ctx.r4.u64 = ctx.r11.u64 | 60271;
	// lis r11,7847
	ctx.r11.s64 = 514260992;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27420
	ctx.r11.u64 = ctx.r11.u64 | 27420;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B32E8;
	sub_8279BCE0(ctx, base);
	// lis r11,2204
	ctx.r11.s64 = 144441344;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36620
	ctx.r4.u64 = ctx.r11.u64 | 36620;
	// lis r11,19773
	ctx.r11.s64 = 1295843328;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13376
	ctx.r11.u64 = ctx.r11.u64 | 13376;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3318;
	sub_8279BCE0(ctx, base);
	// lis r11,10161
	ctx.r11.s64 = 665911296;
	// addi r3,r27,-12696
	ctx.r3.s64 = ctx.r27.s64 + -12696;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1297
	ctx.r4.u64 = ctx.r11.u64 | 1297;
	// lis r11,-12891
	ctx.r11.s64 = -844824576;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25523
	ctx.r11.u64 = ctx.r11.u64 | 25523;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3348;
	sub_8279BCE0(ctx, base);
	// lis r11,-24498
	ctx.r11.s64 = -1605500928;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11516
	ctx.r4.u64 = ctx.r11.u64 | 11516;
	// lis r11,28791
	ctx.r11.s64 = 1886846976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12004
	ctx.r11.u64 = ctx.r11.u64 | 12004;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3378;
	sub_8279BCE0(ctx, base);
	// lis r11,-28829
	ctx.r11.s64 = -1889337344;
	// addi r3,r27,-11656
	ctx.r3.s64 = ctx.r27.s64 + -11656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42721
	ctx.r4.u64 = ctx.r11.u64 | 42721;
	// lis r11,-3857
	ctx.r11.s64 = -252772352;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30999
	ctx.r11.u64 = ctx.r11.u64 | 30999;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B33A8;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,29269
	ctx.r11.s64 = 1918173184;
	// ori r4,r11,49794
	ctx.r4.u64 = ctx.r11.u64 | 49794;
	// lis r11,-23691
	ctx.r11.s64 = -1552613376;
	// ori r11,r11,9803
	ctx.r11.u64 = ctx.r11.u64 | 9803;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B33D8;
	sub_8279BCE0(ctx, base);
	// lis r11,23928
	ctx.r11.s64 = 1568145408;
	// addi r3,r27,-11656
	ctx.r3.s64 = ctx.r27.s64 + -11656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18591
	ctx.r4.u64 = ctx.r11.u64 | 18591;
	// lis r11,9197
	ctx.r11.s64 = 602734592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29112
	ctx.r11.u64 = ctx.r11.u64 | 29112;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3408;
	sub_8279BCE0(ctx, base);
	// lis r11,3748
	ctx.r11.s64 = 245628928;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19978
	ctx.r4.u64 = ctx.r11.u64 | 19978;
	// lis r11,-30718
	ctx.r11.s64 = -2013134848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51053
	ctx.r11.u64 = ctx.r11.u64 | 51053;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3438;
	sub_8279BCE0(ctx, base);
	// lis r11,8585
	ctx.r11.s64 = 562626560;
	// addi r3,r27,-11656
	ctx.r3.s64 = ctx.r27.s64 + -11656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50199
	ctx.r4.u64 = ctx.r11.u64 | 50199;
	// lis r11,2202
	ctx.r11.s64 = 144310272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37022
	ctx.r11.u64 = ctx.r11.u64 | 37022;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3468;
	sub_8279BCE0(ctx, base);
	// lis r11,-9025
	ctx.r11.s64 = -591462400;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41076
	ctx.r4.u64 = ctx.r11.u64 | 41076;
	// lis r11,23296
	ctx.r11.s64 = 1526726656;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53186
	ctx.r11.u64 = ctx.r11.u64 | 53186;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3498;
	sub_8279BCE0(ctx, base);
	// lis r11,-3182
	ctx.r11.s64 = -208535552;
	// addi r3,r27,-11656
	ctx.r3.s64 = ctx.r27.s64 + -11656;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10857
	ctx.r4.u64 = ctx.r11.u64 | 10857;
	// lis r11,-9320
	ctx.r11.s64 = -610795520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38961
	ctx.r11.u64 = ctx.r11.u64 | 38961;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B34C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-21220
	ctx.r11.s64 = -1390673920;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31474
	ctx.r4.u64 = ctx.r11.u64 | 31474;
	// lis r11,-2235
	ctx.r11.s64 = -146472960;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34417
	ctx.r11.u64 = ctx.r11.u64 | 34417;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B34F8;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-10600
	ctx.r3.s64 = ctx.r27.s64 + -10600;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,61679
	ctx.r4.u64 = ctx.r11.u64 | 61679;
	// lis r11,30685
	ctx.r11.s64 = 2010972160;
	// ori r11,r11,53634
	ctx.r11.u64 = ctx.r11.u64 | 53634;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3528;
	sub_8279BCE0(ctx, base);
	// lis r11,32519
	ctx.r11.s64 = 2131165184;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38028
	ctx.r4.u64 = ctx.r11.u64 | 38028;
	// lis r11,9287
	ctx.r11.s64 = 608632832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36574
	ctx.r11.u64 = ctx.r11.u64 | 36574;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3558;
	sub_8279BCE0(ctx, base);
	// lis r11,20522
	ctx.r11.s64 = 1344929792;
	// addi r3,r27,-10600
	ctx.r3.s64 = ctx.r27.s64 + -10600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7825
	ctx.r4.u64 = ctx.r11.u64 | 7825;
	// lis r11,-23329
	ctx.r11.s64 = -1528889344;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55597
	ctx.r11.u64 = ctx.r11.u64 | 55597;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3588;
	sub_8279BCE0(ctx, base);
	// lis r11,1014
	ctx.r11.s64 = 66453504;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6148
	ctx.r4.u64 = ctx.r11.u64 | 6148;
	// lis r11,3888
	ctx.r11.s64 = 254803968;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28664
	ctx.r11.u64 = ctx.r11.u64 | 28664;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B35B8;
	sub_8279BCE0(ctx, base);
	// lis r11,11483
	ctx.r11.s64 = 752549888;
	// addi r3,r27,-10600
	ctx.r3.s64 = ctx.r27.s64 + -10600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37401
	ctx.r4.u64 = ctx.r11.u64 | 37401;
	// lis r11,-28760
	ctx.r11.s64 = -1884815360;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14347
	ctx.r11.u64 = ctx.r11.u64 | 14347;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B35E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-11795
	ctx.r11.s64 = -772997120;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63098
	ctx.r4.u64 = ctx.r11.u64 | 63098;
	// lis r11,-9166
	ctx.r11.s64 = -600702976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26455
	ctx.r11.u64 = ctx.r11.u64 | 26455;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3618;
	sub_8279BCE0(ctx, base);
	// lis r11,-320
	ctx.r11.s64 = -20971520;
	// addi r3,r27,-10600
	ctx.r3.s64 = ctx.r27.s64 + -10600;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31847
	ctx.r4.u64 = ctx.r11.u64 | 31847;
	// lis r11,23722
	ctx.r11.s64 = 1554644992;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12452
	ctx.r11.u64 = ctx.r11.u64 | 12452;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3648;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lis r11,31039
	ctx.r11.s64 = 2034171904;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,21898
	ctx.r4.u64 = ctx.r11.u64 | 21898;
	// lis r11,-7816
	ctx.r11.s64 = -512229376;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,32243
	ctx.r11.u64 = ctx.r11.u64 | 32243;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3678;
	sub_8279BCE0(ctx, base);
	// lis r11,22034
	ctx.r11.s64 = 1444020224;
	// addi r3,r27,-9848
	ctx.r3.s64 = ctx.r27.s64 + -9848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57239
	ctx.r4.u64 = ctx.r11.u64 | 57239;
	// lis r11,25056
	ctx.r11.s64 = 1642070016;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10752
	ctx.r11.u64 = ctx.r11.u64 | 10752;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B36A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-21724
	ctx.r11.s64 = -1423704064;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48116
	ctx.r4.u64 = ctx.r11.u64 | 48116;
	// lis r11,12922
	ctx.r11.s64 = 846856192;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,30044
	ctx.r11.u64 = ctx.r11.u64 | 30044;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B36D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-31735
	ctx.r11.s64 = -2079784960;
	// addi r3,r27,-9848
	ctx.r3.s64 = ctx.r27.s64 + -9848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12777
	ctx.r4.u64 = ctx.r11.u64 | 12777;
	// lis r11,-19742
	ctx.r11.s64 = -1293811712;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8879
	ctx.r11.u64 = ctx.r11.u64 | 8879;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3708;
	sub_8279BCE0(ctx, base);
	// lis r11,-10283
	ctx.r11.s64 = -673906688;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,14204
	ctx.r4.u64 = ctx.r11.u64 | 14204;
	// lis r11,6413
	ctx.r11.s64 = 420282368;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38010
	ctx.r11.u64 = ctx.r11.u64 | 38010;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3738;
	sub_8279BCE0(ctx, base);
	// lis r11,-1800
	ctx.r11.s64 = -117964800;
	// addi r3,r27,-9848
	ctx.r3.s64 = ctx.r27.s64 + -9848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48481
	ctx.r4.u64 = ctx.r11.u64 | 48481;
	// lis r11,-26219
	ctx.r11.s64 = -1718288384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50057
	ctx.r11.u64 = ctx.r11.u64 | 50057;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3768;
	sub_8279BCE0(ctx, base);
	// lis r11,1486
	ctx.r11.s64 = 97386496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// ori r4,r11,55554
	ctx.r4.u64 = ctx.r11.u64 | 55554;
	// lis r11,-13809
	ctx.r11.s64 = -904986624;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,40149
	ctx.r11.u64 = ctx.r11.u64 | 40149;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3798;
	sub_8279BCE0(ctx, base);
	// lis r11,10979
	ctx.r11.s64 = 719519744;
	// addi r3,r27,-9848
	ctx.r3.s64 = ctx.r27.s64 + -9848;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21279
	ctx.r4.u64 = ctx.r11.u64 | 21279;
	// lis r11,19095
	ctx.r11.s64 = 1251409920;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52006
	ctx.r11.u64 = ctx.r11.u64 | 52006;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B37C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-24142
	ctx.r11.s64 = -1582170112;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19428
	ctx.r4.u64 = ctx.r11.u64 | 19428;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51117
	ctx.r11.u64 = ctx.r11.u64 | 51117;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B37F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-29025
	ctx.r11.s64 = -1902182400;
	// addi r3,r27,-9080
	ctx.r3.s64 = ctx.r27.s64 + -9080;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49657
	ctx.r4.u64 = ctx.r11.u64 | 49657;
	// lis r11,695
	ctx.r11.s64 = 45547520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36958
	ctx.r11.u64 = ctx.r11.u64 | 36958;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3828;
	sub_8279BCE0(ctx, base);
	// lis r11,29609
	ctx.r11.s64 = 1940455424;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42394
	ctx.r4.u64 = ctx.r11.u64 | 42394;
	// lis r11,20781
	ctx.r11.s64 = 1361903616;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52994
	ctx.r11.u64 = ctx.r11.u64 | 52994;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3858;
	sub_8279BCE0(ctx, base);
	// lis r11,23684
	ctx.r11.s64 = 1552154624;
	// addi r3,r27,-9080
	ctx.r3.s64 = ctx.r27.s64 + -9080;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12167
	ctx.r4.u64 = ctx.r11.u64 | 12167;
	// lis r11,-11851
	ctx.r11.s64 = -776667136;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39153
	ctx.r11.u64 = ctx.r11.u64 | 39153;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3888;
	sub_8279BCE0(ctx, base);
	// lis r11,3928
	ctx.r11.s64 = 257425408;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,10514
	ctx.r4.u64 = ctx.r11.u64 | 10514;
	// lis r11,31322
	ctx.r11.s64 = 2052718592;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11812
	ctx.r11.u64 = ctx.r11.u64 | 11812;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B38B8;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-9080
	ctx.r3.s64 = ctx.r27.s64 + -9080;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,8309
	ctx.r11.s64 = 544538624;
	// ori r4,r11,41743
	ctx.r4.u64 = ctx.r11.u64 | 41743;
	// lis r11,-1342
	ctx.r11.s64 = -87949312;
	// ori r11,r11,31191
	ctx.r11.u64 = ctx.r11.u64 | 31191;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B38E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-8893
	ctx.r11.s64 = -582811648;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,51052
	ctx.r4.u64 = ctx.r11.u64 | 51052;
	// lis r11,-22184
	ctx.r11.s64 = -1453850624;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9867
	ctx.r11.u64 = ctx.r11.u64 | 9867;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3918;
	sub_8279BCE0(ctx, base);
	// lis r11,-3474
	ctx.r11.s64 = -227672064;
	// addi r3,r27,-9080
	ctx.r3.s64 = ctx.r27.s64 + -9080;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19825
	ctx.r4.u64 = ctx.r11.u64 | 19825;
	// lis r11,10688
	ctx.r11.s64 = 700448768;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29048
	ctx.r11.u64 = ctx.r11.u64 | 29048;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3948;
	sub_8279BCE0(ctx, base);
	// lis r11,30097
	ctx.r11.s64 = 1972436992;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25756
	ctx.r4.u64 = ctx.r11.u64 | 25756;
	// lis r11,-27630
	ctx.r11.s64 = -1810759680;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15407
	ctx.r11.u64 = ctx.r11.u64 | 15407;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3978;
	sub_8279BCE0(ctx, base);
	// lis r11,23228
	ctx.r11.s64 = 1522270208;
	// addi r3,r27,-8000
	ctx.r3.s64 = ctx.r27.s64 + -8000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61057
	ctx.r4.u64 = ctx.r11.u64 | 61057;
	// lis r11,5258
	ctx.r11.s64 = 344588288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27612
	ctx.r11.u64 = ctx.r11.u64 | 27612;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B39A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-22646
	ctx.r11.s64 = -1484128256;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35554
	ctx.r4.u64 = ctx.r11.u64 | 35554;
	// lis r11,18192
	ctx.r11.s64 = 1192230912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13440
	ctx.r11.u64 = ctx.r11.u64 | 13440;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B39D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-30553
	ctx.r11.s64 = -2002321408;
	// addi r3,r27,-8000
	ctx.r3.s64 = ctx.r27.s64 + -8000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,255
	ctx.r4.u64 = ctx.r11.u64 | 255;
	// lis r11,-14456
	ctx.r11.s64 = -947388416;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25459
	ctx.r11.u64 = ctx.r11.u64 | 25459;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3A08;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-9349
	ctx.r11.s64 = -612696064;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,1642
	ctx.r4.u64 = ctx.r11.u64 | 1642;
	// lis r11,27751
	ctx.r11.s64 = 1818689536;
	// ori r11,r11,54694
	ctx.r11.u64 = ctx.r11.u64 | 54694;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3A38;
	sub_8279BCE0(ctx, base);
	// lis r11,-2986
	ctx.r11.s64 = -195690496;
	// addi r3,r27,-8000
	ctx.r3.s64 = ctx.r27.s64 + -8000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35959
	ctx.r4.u64 = ctx.r11.u64 | 35959;
	// lis r11,-4865
	ctx.r11.s64 = -318832640;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33365
	ctx.r11.u64 = ctx.r11.u64 | 33365;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3A68;
	sub_8279BCE0(ctx, base);
	// lis r11,2400
	ctx.r11.s64 = 157286400;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59412
	ctx.r4.u64 = ctx.r11.u64 | 59412;
	// lis r11,-16539
	ctx.r11.s64 = -1083899904;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56585
	ctx.r11.u64 = ctx.r11.u64 | 56585;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3A98;
	sub_8279BCE0(ctx, base);
	// lis r11,9805
	ctx.r11.s64 = 642580480;
	// addi r3,r27,-8000
	ctx.r3.s64 = ctx.r27.s64 + -8000;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25097
	ctx.r4.u64 = ctx.r11.u64 | 25097;
	// lis r11,16381
	ctx.r11.s64 = 1073545216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35578
	ctx.r11.u64 = ctx.r11.u64 | 35578;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3AC8;
	sub_8279BCE0(ctx, base);
	// lis r11,14606
	ctx.r11.s64 = 957218816;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36105
	ctx.r4.u64 = ctx.r11.u64 | 36105;
	// lis r11,13304
	ctx.r11.s64 = 871890944;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13375
	ctx.r11.u64 = ctx.r11.u64 | 13375;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3AF8;
	sub_8279BCE0(ctx, base);
	// lis r11,5667
	ctx.r11.s64 = 371392512;
	// addi r3,r27,-6904
	ctx.r3.s64 = ctx.r27.s64 + -6904;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1812
	ctx.r4.u64 = ctx.r11.u64 | 1812;
	// lis r11,-19616
	ctx.r11.s64 = -1285554176;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25548
	ctx.r11.u64 = ctx.r11.u64 | 25548;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3B28;
	sub_8279BCE0(ctx, base);
	// lis r11,-5355
	ctx.r11.s64 = -350945280;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,25463
	ctx.r4.u64 = ctx.r11.u64 | 25463;
	// lis r11,-7942
	ctx.r11.s64 = -520486912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15504
	ctx.r11.u64 = ctx.r11.u64 | 15504;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3B58;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-6904
	ctx.r3.s64 = ctx.r27.s64 + -6904;
	// lis r11,-15304
	ctx.r11.s64 = -1002962944;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,59754
	ctx.r4.u64 = ctx.r11.u64 | 59754;
	// lis r11,24674
	ctx.r11.s64 = 1617035264;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,27491
	ctx.r11.u64 = ctx.r11.u64 | 27491;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3B88;
	sub_8279BCE0(ctx, base);
	// lis r11,-26652
	ctx.r11.s64 = -1746665472;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61439
	ctx.r4.u64 = ctx.r11.u64 | 61439;
	// lis r11,-13427
	ctx.r11.s64 = -879951872;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56758
	ctx.r11.u64 = ctx.r11.u64 | 56758;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3BB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-18231
	ctx.r11.s64 = -1194786816;
	// addi r3,r27,-6152
	ctx.r3.s64 = ctx.r27.s64 + -6152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26082
	ctx.r4.u64 = ctx.r11.u64 | 26082;
	// lis r11,19221
	ctx.r11.s64 = 1259667456;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35397
	ctx.r11.u64 = ctx.r11.u64 | 35397;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3BE8;
	sub_8279BCE0(ctx, base);
	// lis r11,17919
	ctx.r11.s64 = 1174339584;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,385
	ctx.r4.u64 = ctx.r11.u64 | 385;
	// lis r11,6287
	ctx.r11.s64 = 412024832;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54553
	ctx.r11.u64 = ctx.r11.u64 | 54553;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3C18;
	sub_8279BCE0(ctx, base);
	// lis r11,27346
	ctx.r11.s64 = 1792147456;
	// addi r3,r27,-6152
	ctx.r3.s64 = ctx.r27.s64 + -6152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35740
	ctx.r4.u64 = ctx.r11.u64 | 35740;
	// lis r11,-26601
	ctx.r11.s64 = -1743323136;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,33514
	ctx.r11.u64 = ctx.r11.u64 | 33514;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3C48;
	sub_8279BCE0(ctx, base);
	// lis r11,-4819
	ctx.r11.s64 = -315817984;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41585
	ctx.r4.u64 = ctx.r11.u64 | 41585;
	// lis r11,9669
	ctx.r11.s64 = 633667584;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53181
	ctx.r11.u64 = ctx.r11.u64 | 53181;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3C78;
	sub_8279BCE0(ctx, base);
	// lis r11,-15872
	ctx.r11.s64 = -1040187392;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-5264
	ctx.r3.s64 = ctx.r27.s64 + -5264;
	// ori r4,r11,10348
	ctx.r4.u64 = ctx.r11.u64 | 10348;
	// lis r11,-23203
	ctx.r11.s64 = -1520631808;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r11,r11,38990
	ctx.r11.u64 = ctx.r11.u64 | 38990;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3CA8;
	sub_8279BCE0(ctx, base);
	// lis r11,16182
	ctx.r11.s64 = 1060503552;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19471
	ctx.r4.u64 = ctx.r11.u64 | 19471;
	// lis r11,-2361
	ctx.r11.s64 = -154730496;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50962
	ctx.r11.u64 = ctx.r11.u64 | 50962;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3CD8;
	sub_8279BCE0(ctx, base);
	// lis r11,4123
	ctx.r11.s64 = 270204928;
	// addi r3,r27,-5264
	ctx.r3.s64 = ctx.r27.s64 + -5264;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50706
	ctx.r4.u64 = ctx.r11.u64 | 50706;
	// lis r11,30303
	ctx.r11.s64 = 1985937408;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37089
	ctx.r11.u64 = ctx.r11.u64 | 37089;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3D08;
	sub_8279BCE0(ctx, base);
	// lis r11,17351
	ctx.r11.s64 = 1137115136;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,49287
	ctx.r4.u64 = ctx.r11.u64 | 49287;
	// lis r11,-8784
	ctx.r11.s64 = -575668224;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9780
	ctx.r11.u64 = ctx.r11.u64 | 9780;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3D38;
	sub_8279BCE0(ctx, base);
	// lis r11,27882
	ctx.r11.s64 = 1827274752;
	// addi r3,r27,-4496
	ctx.r3.s64 = ctx.r27.s64 + -4496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,19098
	ctx.r4.u64 = ctx.r11.u64 | 19098;
	// lis r11,23848
	ctx.r11.s64 = 1562902528;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29127
	ctx.r11.u64 = ctx.r11.u64 | 29127;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3D68;
	sub_8279BCE0(ctx, base);
	// lis r11,-28196
	ctx.r11.s64 = -1847853056;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12025
	ctx.r4.u64 = ctx.r11.u64 | 12025;
	// lis r11,3762
	ctx.r11.s64 = 246546432;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11931
	ctx.r11.u64 = ctx.r11.u64 | 11931;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3D98;
	sub_8279BCE0(ctx, base);
	// lis r11,-16655
	ctx.r11.s64 = -1091502080;
	// addi r3,r27,-4496
	ctx.r3.s64 = ctx.r27.s64 + -4496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,42212
	ctx.r4.u64 = ctx.r11.u64 | 42212;
	// lis r11,-29142
	ctx.r11.s64 = -1909850112;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31080
	ctx.r11.u64 = ctx.r11.u64 | 31080;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3DC8;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,13728
	ctx.r11.s64 = 899678208;
	// ori r4,r11,48159
	ctx.r4.u64 = ctx.r11.u64 | 48159;
	// lis r11,18066
	ctx.r11.s64 = 1183973376;
	// ori r11,r11,30179
	ctx.r11.u64 = ctx.r11.u64 | 30179;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3DF8;
	sub_8279BCE0(ctx, base);
	// lis r11,6797
	ctx.r11.s64 = 445448192;
	// addi r3,r27,-3584
	ctx.r3.s64 = ctx.r27.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13826
	ctx.r4.u64 = ctx.r11.u64 | 13826;
	// lis r11,-14838
	ctx.r11.s64 = -972423168;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,8720
	ctx.r11.u64 = ctx.r11.u64 | 8720;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3E28;
	sub_8279BCE0(ctx, base);
	// lis r11,-6213
	ctx.r11.s64 = -407175168;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21089
	ctx.r4.u64 = ctx.r11.u64 | 21089;
	// lis r11,-27248
	ctx.r11.s64 = -1785724928;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32076
	ctx.r11.u64 = ctx.r11.u64 | 32076;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3E58;
	sub_8279BCE0(ctx, base);
	// lis r11,-14186
	ctx.r11.s64 = -929693696;
	// addi r3,r27,-3584
	ctx.r3.s64 = ctx.r27.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,55420
	ctx.r4.u64 = ctx.r11.u64 | 55420;
	// lis r11,5384
	ctx.r11.s64 = 352845824;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,10943
	ctx.r11.u64 = ctx.r11.u64 | 10943;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3E88;
	sub_8279BCE0(ctx, base);
	// lis r11,-25782
	ctx.r11.s64 = -1689649152;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,57065
	ctx.r4.u64 = ctx.r11.u64 | 57065;
	// lis r11,-16665
	ctx.r11.s64 = -1092157440;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40042
	ctx.r11.u64 = ctx.r11.u64 | 40042;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3EB8;
	sub_8279BCE0(ctx, base);
	// lis r11,-19353
	ctx.r11.s64 = -1268318208;
	// addi r3,r27,-2504
	ctx.r3.s64 = ctx.r27.s64 + -2504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,21748
	ctx.r4.u64 = ctx.r11.u64 | 21748;
	// lis r11,15999
	ctx.r11.s64 = 1048510464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,52121
	ctx.r11.u64 = ctx.r11.u64 | 52121;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3EE8;
	sub_8279BCE0(ctx, base);
	// lis r11,18769
	ctx.r11.s64 = 1230045184;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,12439
	ctx.r4.u64 = ctx.r11.u64 | 12439;
	// lis r11,28133
	ctx.r11.s64 = 1843724288;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,38085
	ctx.r11.u64 = ctx.r11.u64 | 38085;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3F18;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-2504
	ctx.r3.s64 = ctx.r27.s64 + -2504;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lis r11,26236
	ctx.r11.s64 = 1719402496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r4,r11,47754
	ctx.r4.u64 = ctx.r11.u64 | 47754;
	// lis r11,-4739
	ctx.r11.s64 = -310575104;
	// ori r11,r11,49974
	ctx.r11.u64 = ctx.r11.u64 | 49974;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3F48;
	sub_8279BCE0(ctx, base);
	// lis r11,-7805
	ctx.r11.s64 = -511508480;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,37735
	ctx.r4.u64 = ctx.r11.u64 | 37735;
	// lis r11,20655
	ctx.r11.s64 = 1353646080;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36449
	ctx.r11.u64 = ctx.r11.u64 | 36449;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3F78;
	sub_8279BCE0(ctx, base);
	// lis r11,-12626
	ctx.r11.s64 = -827457536;
	// addi r3,r27,-1096
	ctx.r3.s64 = ctx.r27.s64 + -1096;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,6522
	ctx.r4.u64 = ctx.r11.u64 | 6522;
	// lis r11,-12233
	ctx.r11.s64 = -801701888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55698
	ctx.r11.u64 = ctx.r11.u64 | 55698;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3FA8;
	sub_8279BCE0(ctx, base);
	// lis r11,13208
	ctx.r11.s64 = 865599488;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32025
	ctx.r4.u64 = ctx.r11.u64 | 32025;
	// lis r11,-31827
	ctx.r11.s64 = -2085814272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34510
	ctx.r11.u64 = ctx.r11.u64 | 34510;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B3FD8;
	sub_8279BCE0(ctx, base);
	// lis r11,7349
	ctx.r11.s64 = 481624064;
	// addi r3,r27,-1096
	ctx.r3.s64 = ctx.r27.s64 + -1096;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,63236
	ctx.r4.u64 = ctx.r11.u64 | 63236;
	// lis r11,821
	ctx.r11.s64 = 53805056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53565
	ctx.r11.u64 = ctx.r11.u64 | 53565;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4008;
	sub_8279BCE0(ctx, base);
	// lis r11,20329
	ctx.r11.s64 = 1332281344;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,61841
	ctx.r4.u64 = ctx.r11.u64 | 61841;
	// lis r11,-22310
	ctx.r11.s64 = -1462108160;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26600
	ctx.r11.u64 = ctx.r11.u64 | 26600;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4038;
	sub_8279BCE0(ctx, base);
	// lis r11,24644
	ctx.r11.s64 = 1615069184;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,31628
	ctx.r4.u64 = ctx.r11.u64 | 31628;
	// lis r11,10306
	ctx.r11.s64 = 675414016;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,12315
	ctx.r11.u64 = ctx.r11.u64 | 12315;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B4068;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lis r11,-25230
	ctx.r11.s64 = -1653473280;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,8175
	ctx.r4.u64 = ctx.r11.u64 | 8175;
	// lis r11,31704
	ctx.r11.s64 = 2077753344;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// ori r11,r11,28487
	ctx.r11.u64 = ctx.r11.u64 | 28487;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4098;
	sub_8279BCE0(ctx, base);
	// lis r11,-19873
	ctx.r11.s64 = -1302396928;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38386
	ctx.r4.u64 = ctx.r11.u64 | 38386;
	// lis r11,-1216
	ctx.r11.s64 = -79691776;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,14516
	ctx.r11.u64 = ctx.r11.u64 | 14516;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B40C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-4911
	ctx.r11.s64 = -321847296;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50537
	ctx.r4.u64 = ctx.r11.u64 | 50537;
	// lis r11,-10339
	ctx.r11.s64 = -677576704;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,9972
	ctx.r11.u64 = ctx.r11.u64 | 9972;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B40F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-15364
	ctx.r11.s64 = -1006895104;
	// addi r3,r27,-6904
	ctx.r3.s64 = ctx.r27.s64 + -6904;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,20340
	ctx.r4.u64 = ctx.r11.u64 | 20340;
	// lis r11,22277
	ctx.r11.s64 = 1459945472;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,28935
	ctx.r11.u64 = ctx.r11.u64 | 28935;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4128;
	sub_8279BCE0(ctx, base);
	// lis r11,16074
	ctx.r11.s64 = 1053425664;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11031
	ctx.r4.u64 = ctx.r11.u64 | 11031;
	// lis r11,1183
	ctx.r11.s64 = 77529088;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,11867
	ctx.r11.u64 = ctx.r11.u64 | 11867;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4158;
	sub_8279BCE0(ctx, base);
	// lis r11,4583
	ctx.r11.s64 = 300351488;
	// addi r3,r27,-6904
	ctx.r3.s64 = ctx.r27.s64 + -6904;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,41226
	ctx.r4.u64 = ctx.r11.u64 | 41226;
	// lis r11,-31737
	ctx.r11.s64 = -2079916032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,31144
	ctx.r11.u64 = ctx.r11.u64 | 31144;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4188;
	sub_8279BCE0(ctx, base);
	// lis r11,16955
	ctx.r11.s64 = 1111162880;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// ori r4,r11,42911
	ctx.r4.u64 = ctx.r11.u64 | 42911;
	// lis r11,12264
	ctx.r11.s64 = 803733504;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,53117
	ctx.r11.u64 = ctx.r11.u64 | 53117;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B41B8;
	sub_8279BCE0(ctx, base);
	// lis r11,27926
	ctx.r11.s64 = 1830158336;
	// addi r3,r27,-6152
	ctx.r3.s64 = ctx.r27.s64 + -6152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,11650
	ctx.r4.u64 = ctx.r11.u64 | 11650;
	// lis r11,-20624
	ctx.r11.s64 = -1351614464;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,39054
	ctx.r11.u64 = ctx.r11.u64 | 39054;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B41E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-28640
	ctx.r11.s64 = -1876951040;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,18913
	ctx.r4.u64 = ctx.r11.u64 | 18913;
	// lis r11,-790
	ctx.r11.s64 = -51773440;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,51154
	ctx.r11.u64 = ctx.r11.u64 | 51154;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4218;
	sub_8279BCE0(ctx, base);
	// lis r11,-16627
	ctx.r11.s64 = -1089667072;
	// addi r3,r27,-6152
	ctx.r3.s64 = ctx.r27.s64 + -6152;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,50172
	ctx.r4.u64 = ctx.r11.u64 | 50172;
	// lis r11,31858
	ctx.r11.s64 = 2087845888;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36897
	ctx.r11.u64 = ctx.r11.u64 | 36897;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4248;
	sub_8279BCE0(ctx, base);
	// lis r11,14578
	ctx.r11.s64 = 955383808;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,59921
	ctx.r4.u64 = ctx.r11.u64 | 59921;
	// lis r11,-15968
	ctx.r11.s64 = -1046478848;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,56694
	ctx.r11.u64 = ctx.r11.u64 | 56694;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4278;
	sub_8279BCE0(ctx, base);
	// lis r11,6111
	ctx.r11.s64 = 400490496;
	// addi r3,r27,-5264
	ctx.r3.s64 = ctx.r27.s64 + -5264;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,24588
	ctx.r4.u64 = ctx.r11.u64 | 24588;
	// lis r11,16696
	ctx.r11.s64 = 1094189056;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,35461
	ctx.r11.u64 = ctx.r11.u64 | 35461;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B42A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-5399
	ctx.r11.s64 = -353828864;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,1135
	ctx.r4.u64 = ctx.r11.u64 | 1135;
	// lis r11,4770
	ctx.r11.s64 = 312606720;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,54745
	ctx.r11.u64 = ctx.r11.u64 | 54745;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B42D8;
	sub_8279BCE0(ctx, base);
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// addi r3,r27,-5264
	ctx.r3.s64 = ctx.r27.s64 + -5264;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r11,-14908
	ctx.r11.s64 = -977010688;
	// ori r4,r11,36466
	ctx.r4.u64 = ctx.r11.u64 | 36466;
	// lis r11,-28102
	ctx.r11.s64 = -1841692672;
	// ori r11,r11,33322
	ctx.r11.u64 = ctx.r11.u64 | 33322;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4308;
	sub_8279BCE0(ctx, base);
	// lis r11,-27112
	ctx.r11.s64 = -1776812032;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,35047
	ctx.r4.u64 = ctx.r11.u64 | 35047;
	// lis r11,14805
	ctx.r11.s64 = 970260480;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13567
	ctx.r11.u64 = ctx.r11.u64 | 13567;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4338;
	sub_8279BCE0(ctx, base);
	// lis r11,-18123
	ctx.r11.s64 = -1187708928;
	// addi r3,r27,-4496
	ctx.r3.s64 = ctx.r27.s64 + -4496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,762
	ctx.r4.u64 = ctx.r11.u64 | 762;
	// lis r11,-18099
	ctx.r11.s64 = -1186136064;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,25356
	ctx.r11.u64 = ctx.r11.u64 | 25356;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4368;
	sub_8279BCE0(ctx, base);
	// lis r11,17411
	ctx.r11.s64 = 1141047296;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,26265
	ctx.r4.u64 = ctx.r11.u64 | 26265;
	// lis r11,-5417
	ctx.r11.s64 = -355008512;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,15440
	ctx.r11.u64 = ctx.r11.u64 | 15440;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4398;
	sub_8279BCE0(ctx, base);
	// lis r11,27438
	ctx.r11.s64 = 1798176768;
	// addi r3,r27,-4496
	ctx.r3.s64 = ctx.r27.s64 + -4496;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,60548
	ctx.r4.u64 = ctx.r11.u64 | 60548;
	// lis r11,27215
	ctx.r11.s64 = 1783562240;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,27555
	ctx.r11.u64 = ctx.r11.u64 | 27555;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B43C8;
	sub_8279BCE0(ctx, base);
	// lis r11,-8065
	ctx.r11.s64 = -528547840;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62591
	ctx.r4.u64 = ctx.r11.u64 | 62591;
	// lis r11,-23817
	ctx.r11.s64 = -1560870912;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,26408
	ctx.r11.u64 = ctx.r11.u64 | 26408;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B43F8;
	sub_8279BCE0(ctx, base);
	// lis r11,-12462
	ctx.r11.s64 = -816709632;
	// addi r3,r27,-3584
	ctx.r3.s64 = ctx.r27.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,32354
	ctx.r4.u64 = ctx.r11.u64 | 32354;
	// lis r11,8815
	ctx.r11.s64 = 577699840;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12507
	ctx.r11.u64 = ctx.r11.u64 | 12507;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4428;
	sub_8279BCE0(ctx, base);
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,12900
	ctx.r11.s64 = 845414400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r4,r11,6657
	ctx.r4.u64 = ctx.r11.u64 | 6657;
	// lis r11,29173
	ctx.r11.s64 = 1911881728;
	// ori r11,r11,28551
	ctx.r11.u64 = ctx.r11.u64 | 28551;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4458;
	sub_8279BCE0(ctx, base);
	// lis r11,7497
	ctx.r11.s64 = 491323392;
	// addi r3,r27,-3584
	ctx.r3.s64 = ctx.r27.s64 + -3584;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,36892
	ctx.r4.u64 = ctx.r11.u64 | 36892;
	// lis r11,-3731
	ctx.r11.s64 = -244514816;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,14452
	ctx.r11.u64 = ctx.r11.u64 | 14452;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4488;
	sub_8279BCE0(ctx, base);
	// lis r11,20117
	ctx.r11.s64 = 1318387712;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,38537
	ctx.r4.u64 = ctx.r11.u64 | 38537;
	// lis r11,23170
	ctx.r11.s64 = 1518469120;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,36513
	ctx.r11.u64 = ctx.r11.u64 | 36513;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B44B8;
	sub_8279BCE0(ctx, base);
	// lis r11,25016
	ctx.r11.s64 = 1639448576;
	// addi r3,r27,-2504
	ctx.r3.s64 = ctx.r27.s64 + -2504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,7316
	ctx.r4.u64 = ctx.r11.u64 | 7316;
	// lis r11,-9702
	ctx.r11.s64 = -635830272;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,55634
	ctx.r11.u64 = ctx.r11.u64 | 55634;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B44E8;
	sub_8279BCE0(ctx, base);
	// lis r11,-25458
	ctx.r11.s64 = -1668415488;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,30967
	ctx.r4.u64 = ctx.r11.u64 | 30967;
	// lis r11,-30336
	ctx.r11.s64 = -1988100096;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,34318
	ctx.r11.u64 = ctx.r11.u64 | 34318;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4518;
	sub_8279BCE0(ctx, base);
	// lis r11,-19549
	ctx.r11.s64 = -1281163264;
	// addi r3,r27,-2504
	ctx.r3.s64 = ctx.r27.s64 + -2504;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,62186
	ctx.r4.u64 = ctx.r11.u64 | 62186;
	// lis r11,2328
	ctx.r11.s64 = 152567808;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,53757
	ctx.r11.u64 = ctx.r11.u64 | 53757;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4548;
	sub_8279BCE0(ctx, base);
	// lis r11,13404
	ctx.r11.s64 = 878444544;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,56071
	ctx.r4.u64 = ctx.r11.u64 | 56071;
	// lis r11,-19254
	ctx.r11.s64 = -1261830144;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,40106
	ctx.r11.u64 = ctx.r11.u64 | 40106;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4578;
	sub_8279BCE0(ctx, base);
	// addi r3,r27,-1096
	ctx.r3.s64 = ctx.r27.s64 + -1096;
	// lis r11,7025
	ctx.r11.s64 = 460390400;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,20762
	ctx.r4.u64 = ctx.r11.u64 | 20762;
	// lis r11,13394
	ctx.r11.s64 = 877789184;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,52057
	ctx.r11.u64 = ctx.r11.u64 | 52057;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B45A8;
	sub_8279BCE0(ctx, base);
	// lis r11,-6585
	ctx.r11.s64 = -431554560;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13689
	ctx.r4.u64 = ctx.r11.u64 | 13689;
	// lis r11,26568
	ctx.r11.s64 = 1741160448;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,37893
	ctx.r11.u64 = ctx.r11.u64 | 37893;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B45D8;
	sub_8279BCE0(ctx, base);
	// lis r11,-13974
	ctx.r11.s64 = -915800064;
	// addi r3,r27,-1096
	ctx.r3.s64 = ctx.r27.s64 + -1096;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,48996
	ctx.r4.u64 = ctx.r11.u64 | 48996;
	// lis r11,-6320
	ctx.r11.s64 = -414187520;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,50166
	ctx.r11.u64 = ctx.r11.u64 | 50166;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4608;
	sub_8279BCE0(ctx, base);
	// lis r11,-25930
	ctx.r11.s64 = -1699348480;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,47601
	ctx.r4.u64 = ctx.r11.u64 | 47601;
	// lis r11,19647
	ctx.r11.s64 = 1287585792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,29987
	ctx.r11.u64 = ctx.r11.u64 | 29987;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4638;
	sub_8279BCE0(ctx, base);
	// lis r11,-19045
	ctx.r11.s64 = -1248133120;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,13292
	ctx.r4.u64 = ctx.r11.u64 | 13292;
	// lis r11,-13273
	ctx.r11.s64 = -869859328;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,8912
	ctx.r11.u64 = ctx.r11.u64 | 8912;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B4668;
	sub_8279BCE0(ctx, base);
	// lis r11,18605
	ctx.r11.s64 = 1219297280;
	// addi r3,r30,-10056
	ctx.r3.s64 = ctx.r30.s64 + -10056;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// ori r4,r11,22415
	ctx.r4.u64 = ctx.r11.u64 | 22415;
	// lis r11,-24643
	ctx.r11.s64 = -1615003648;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,32140
	ctx.r11.u64 = ctx.r11.u64 | 32140;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// bl 0x8279bce0
	ctx.lr = 0x824B4698;
	sub_8279BCE0(ctx, base);
	// lis r11,26496
	ctx.r11.s64 = 1736441856;
	// lwz r5,-4124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4124);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r4,r11,56722
	ctx.r4.u64 = ctx.r11.u64 | 56722;
	// lis r11,7973
	ctx.r11.s64 = 522518528;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r11,r11,10879
	ctx.r11.u64 = ctx.r11.u64 | 10879;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rldimi r4,r11,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8279bce0
	ctx.lr = 0x824B46C8;
	sub_8279BCE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82644a70
	__restgprlr_26(ctx, base);
	return;
}



