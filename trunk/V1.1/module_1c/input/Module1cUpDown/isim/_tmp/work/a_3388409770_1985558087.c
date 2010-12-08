/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

/* This file is designed for use with ISim build 0x9330dbfa */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "/home/practicas/Escritorio/DCSL/V1.1/module_1c/input/Module1cUpDown/../tb_counter_updown.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1242562249(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1258338084_2592010699(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1690584930_2592010699(char *, unsigned char );


void work_a_3388409770_1985558087_sub_2469371943_1985558087(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned char t6, int64 t7, char *t8, unsigned int t9, unsigned int t10)
{
    char t12[16];
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int64 t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    int64 t30;

LAB0:    t13 = (t12 + 4U);
    *((unsigned char *)t13) = t6;
    t14 = (t12 + 5U);
    *((int64 *)t14) = t7;

LAB2:
LAB3:    t15 = (t8 + 20U);
    t16 = *((char **)t15);
    t15 = (t16 + t10);
    t17 = *((unsigned char *)t15);
    if (t17 != 0)
        goto LAB5;

LAB6:    t18 = (0 + t3);
    t15 = (t5 + 32U);
    t16 = *((char **)t15);
    t19 = (t16 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t5, t18, 1, 0LL);
    t21 = (t7 / 2);
    xsi_process_wait(t1, t21);

LAB10:    t15 = (t1 + 44U);
    t16 = *((char **)t15);
    t19 = (t16 + 704U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 44U);
    t22 = *((char **)t20);
    t23 = (t22 + 0U);
    getcontext(t23);
    t24 = (t1 + 44U);
    t25 = *((char **)t24);
    t26 = (t25 + 704U);
    t18 = *((unsigned int *)t26);
    if (t18 == 1)
        goto LAB11;

LAB12:    t27 = (t1 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 704U);
    *((unsigned int *)t29) = 3U;

LAB8:
LAB9:
LAB7:    t15 = (t8 + 20U);
    t16 = *((char **)t15);
    t15 = (t16 + t10);
    t17 = *((unsigned char *)t15);
    if (t17 != 0)
        goto LAB5;

LAB13:    t17 = ieee_p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t6);
    t18 = (0 + t3);
    t15 = (t5 + 32U);
    t16 = *((char **)t15);
    t19 = (t16 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t17;
    xsi_driver_first_trans_delta(t5, t18, 1, 0LL);
    t21 = (t7 / 2);
    t30 = (t7 - t21);
    xsi_process_wait(t1, t30);

LAB17:    t15 = (t1 + 44U);
    t16 = *((char **)t15);
    t19 = (t16 + 704U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 44U);
    t22 = *((char **)t20);
    t23 = (t22 + 0U);
    getcontext(t23);
    t24 = (t1 + 44U);
    t25 = *((char **)t24);
    t26 = (t25 + 704U);
    t18 = *((unsigned int *)t26);
    if (t18 == 1)
        goto LAB18;

LAB19:    t27 = (t1 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 704U);
    *((unsigned int *)t29) = 3U;

LAB15:
LAB16:
LAB14:    goto LAB2;

LAB4:;
LAB5:
LAB23:    t15 = (t1 + 44U);
    t16 = *((char **)t15);
    t19 = (t16 + 704U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 44U);
    t22 = *((char **)t20);
    t23 = (t22 + 0U);
    getcontext(t23);
    t24 = (t1 + 44U);
    t25 = *((char **)t24);
    t26 = (t25 + 704U);
    t18 = *((unsigned int *)t26);
    if (t18 == 1)
        goto LAB24;

LAB25:    t27 = (t1 + 44U);
    t28 = *((char **)t27);
    t29 = (t28 + 704U);
    *((unsigned int *)t29) = 3U;

LAB21:
LAB22:
LAB20:
LAB1:    return;
LAB11:    xsi_saveStackAndSuspend(t1);
    goto LAB12;

LAB18:    xsi_saveStackAndSuspend(t1);
    goto LAB19;

LAB24:    xsi_saveStackAndSuspend(t1);
    goto LAB25;

}

static void work_a_3388409770_1985558087_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    char *t5;
    char *t6;

LAB0:    xsi_set_current_line(142, ng1);
    t1 = (t0 + 1740);
    t2 = (t0 + 616U);
    t3 = (t0 + 2280);
    t4 = (10 * 1000000LL);
    t5 = (t0 + 1144U);
    work_a_3388409770_1985558087_sub_2469371943_1985558087(t0, t1, t2, 0U, 0U, t3, (unsigned char)3, t4, t5, 0U, 0U);
    t6 = (t0 + 2228);
    *((int *)t6) = 1;

LAB1:    return;
}

static void work_a_3388409770_1985558087_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;

LAB0:    t1 = (t0 + 1944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng1);
    t2 = ieee_p_1242562249_sub_180853171_1242562249(IEEE_P_1242562249, t3, 45, 9);
    t4 = (t0 + 2316);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(147, ng1);
    t2 = (t0 + 2352);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(148, ng1);
    t2 = (t0 + 2388);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(151, ng1);
    t9 = (25 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(152, ng1);
    t2 = (t0 + 2352);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(154, ng1);
    t2 = (t0 + 2352);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(156, ng1);
    t2 = (t0 + 2388);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(158, ng1);
    t2 = (t0 + 2388);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(159, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(160, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(161, ng1);
    t9 = (20 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(162, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(164, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng1);
    t9 = (20 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(166, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng1);
    t2 = ieee_p_1242562249_sub_180853171_1242562249(IEEE_P_1242562249, t3, 209, 9);
    t4 = (t0 + 2316);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 9U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(168, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(169, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng1);
    t2 = (t0 + 2388);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(172, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(173, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(174, ng1);
    t2 = (t0 + 2388);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(176, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(177, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(179, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(180, ng1);
    t2 = (t0 + 2424);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(181, ng1);
    t2 = (t0 + 2460);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng1);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1860);
    xsi_process_wait(t2, t9);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(184, ng1);
    t2 = (t0 + 2496);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(185, ng1);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    goto LAB2;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

}

static void work_a_3388409770_1985558087_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    int64 t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng1);
    t2 = (t0 + 4325);
    *((int *)t2) = 0;
    t3 = (t0 + 4329);
    *((int *)t3) = 16;
    t4 = 0;
    t5 = 16;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(197, ng1);

LAB26:    *((char **)t1) = &&LAB27;

LAB1:    return;
LAB5:    xsi_set_current_line(191, ng1);

LAB10:    t6 = (t0 + 2236);
    *((int *)t6) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 4325);
    t4 = *((int *)t2);
    t3 = (t0 + 4329);
    t5 = *((int *)t3);
    t11 = (t4 + 1);
    t4 = t11;
    t6 = (t0 + 4325);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    t9 = (t0 + 2236);
    *((int *)t9) = 0;
    xsi_set_current_line(192, ng1);
    t10 = (1 * 1000000LL);
    t2 = (t0 + 1980);
    xsi_process_wait(t2, t10);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t7 = (t0 + 616U);
    t8 = ieee_p_2592010699_sub_1258338084_2592010699(IEEE_P_2592010699, t7, 0U, 0U);
    if (t8 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(193, ng1);
    t2 = (t0 + 1076U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t6 = *((char **)t2);
    t2 = (t0 + 4325);
    t11 = *((int *)t2);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 16, 1, *((int *)t2));
    t14 = (9U * t13);
    t15 = (0 + t14);
    t7 = (t6 + t15);
    t8 = 1;
    if (9U == 9U)
        goto LAB18;

LAB19:    t8 = 0;

LAB20:    if (t8 == 0)
        goto LAB16;

LAB17:    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t18 = (t0 + 4333);
    xsi_report(t18, 7U, (unsigned char)2);
    goto LAB17;

LAB18:    t16 = 0;

LAB21:    if (t16 < 9U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t9 = (t3 + t16);
    t17 = (t7 + t16);
    if (*((unsigned char *)t9) != *((unsigned char *)t17))
        goto LAB19;

LAB23:    t16 = (t16 + 1);
    goto LAB21;

LAB24:    goto LAB2;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

}


extern void work_a_3388409770_1985558087_init()
{
	static char *pe[] = {(void *)work_a_3388409770_1985558087_p_0,(void *)work_a_3388409770_1985558087_p_1,(void *)work_a_3388409770_1985558087_p_2};
	static char *se[] = {(void *)work_a_3388409770_1985558087_sub_2469371943_1985558087};
	xsi_register_didat("work_a_3388409770_1985558087", "isim/_tmp/work/a_3388409770_1985558087.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
