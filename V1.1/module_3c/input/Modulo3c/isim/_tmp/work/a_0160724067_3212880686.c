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

/* This file is designed for use with ISim build 0x42e8db27 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/pascual/INGENIERIA/DCSL/V1.1/module_3c/input/Modulo3c/../stack.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int p_1242562249_sub_1213234959_1242562249(char *, char *, char *);
char *p_1242562249_sub_180853171_1242562249(char *, char *, int , int );
char *p_1242562249_sub_2065729909_1242562249(char *, char *, char *, char *, int );
char *p_1242562249_sub_2065801783_1242562249(char *, char *, char *, char *, int );
unsigned char p_1242562249_sub_3684259027_1242562249(char *, char *, char *, int );
unsigned char p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );


static void work_a_0160724067_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 636U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 528U);
    t3 = p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2764);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2832);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1516U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 2832);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_0160724067_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    static char *nl0[] = {&&LAB3, &&LAB6, &&LAB5, &&LAB4, &&LAB7};

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 2772);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 724U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2868);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB2;

LAB4:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 724U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2868);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB2;

LAB5:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 724U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2868);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB2;

LAB6:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 2868);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2868);
    t2 = (t1 + 32U);
    t4 = *((char **)t2);
    t5 = (t4 + 32U);
    t9 = *((char **)t5);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 900U);
    t9 = *((char **)t4);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB14;

LAB15:    t8 = (unsigned char)0;

LAB16:    if (t8 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 900U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB22;

LAB23:    t6 = (unsigned char)0;

LAB24:    if (t6 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB17;

LAB18:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(109, ng0);
    t14 = (t0 + 2868);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)1;
    xsi_driver_first_trans_fast(t14);
    goto LAB12;

LAB14:    t4 = (t0 + 1252U);
    t12 = *((char **)t4);
    t4 = (t0 + 4508U);
    t13 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t12, t4, 16);
    t8 = t13;
    goto LAB16;

LAB17:    xsi_set_current_line(111, ng0);
    t9 = (t0 + 2868);
    t12 = (t9 + 32U);
    t14 = *((char **)t12);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t9);
    goto LAB12;

LAB19:    t1 = (t0 + 1252U);
    t5 = *((char **)t1);
    t1 = (t0 + 4508U);
    t13 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t5, t1, 0);
    t3 = t13;
    goto LAB21;

LAB22:    t1 = (t0 + 988U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t6 = t11;
    goto LAB24;

LAB25:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 900U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t10 = (t8 == (unsigned char)3);
    if (t10 == 1)
        goto LAB31;

LAB32:    t7 = (unsigned char)0;

LAB33:    if (t7 != 0)
        goto LAB28;

LAB30:    t1 = (t0 + 900U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB39;

LAB40:    t6 = (unsigned char)0;

LAB41:    if (t6 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB34;

LAB35:
LAB29:    goto LAB26;

LAB28:    xsi_set_current_line(120, ng0);
    t9 = (t0 + 2868);
    t12 = (t9 + 32U);
    t14 = *((char **)t12);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t9);
    goto LAB29;

LAB31:    t1 = (t0 + 1252U);
    t5 = *((char **)t1);
    t1 = (t0 + 4508U);
    t11 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t5, t1, 16);
    t7 = t11;
    goto LAB33;

LAB34:    xsi_set_current_line(122, ng0);
    t9 = (t0 + 2868);
    t12 = (t9 + 32U);
    t14 = *((char **)t12);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t9);
    goto LAB29;

LAB36:    t1 = (t0 + 1252U);
    t5 = *((char **)t1);
    t1 = (t0 + 4508U);
    t13 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t5, t1, 0);
    t3 = t13;
    goto LAB38;

LAB39:    t1 = (t0 + 988U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t6 = t11;
    goto LAB41;

LAB42:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 900U);
    t4 = *((char **)t1);
    t8 = *((unsigned char *)t4);
    t10 = (t8 == (unsigned char)3);
    if (t10 == 1)
        goto LAB48;

LAB49:    t7 = (unsigned char)0;

LAB50:    if (t7 != 0)
        goto LAB45;

LAB47:    t1 = (t0 + 900U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB56;

LAB57:    t6 = (unsigned char)0;

LAB58:    if (t6 == 1)
        goto LAB53;

LAB54:    t3 = (unsigned char)0;

LAB55:    if (t3 != 0)
        goto LAB51;

LAB52:
LAB46:    goto LAB43;

LAB45:    xsi_set_current_line(131, ng0);
    t9 = (t0 + 2868);
    t12 = (t9 + 32U);
    t14 = *((char **)t12);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t9);
    goto LAB46;

LAB48:    t1 = (t0 + 1252U);
    t5 = *((char **)t1);
    t1 = (t0 + 4508U);
    t11 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t5, t1, 16);
    t7 = t11;
    goto LAB50;

LAB51:    xsi_set_current_line(133, ng0);
    t9 = (t0 + 2868);
    t12 = (t9 + 32U);
    t14 = *((char **)t12);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t9);
    goto LAB46;

LAB53:    t1 = (t0 + 1252U);
    t5 = *((char **)t1);
    t1 = (t0 + 4508U);
    t13 = p_1242562249_sub_3684259027_1242562249(IEEE_P_1242562249, t5, t1, 0);
    t3 = t13;
    goto LAB55;

LAB56:    t1 = (t0 + 988U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t6 = t11;
    goto LAB58;

}

static void work_a_0160724067_3212880686_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned char t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 636U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 528U);
    t3 = p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 2780);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(152, ng0);
    t1 = p_1242562249_sub_180853171_1242562249(IEEE_P_1242562249, t5, 0, 16);
    t6 = (t0 + 2904);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(153, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    if (-1 == -1)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    t12 = (t11 - 7);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t6 = (t2 + t14);
    t15 = (1U * 8U);
    memset(t6, (unsigned char)2, t15);
    t7 = (t0 + 2940);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t11 = 7;
    goto LAB7;

LAB8:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1516U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t17 = (t4 == (unsigned char)2);
    if (t17 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 1516U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB17;

LAB18:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1164U);
    t7 = *((char **)t2);
    t2 = (t0 + 1252U);
    t8 = *((char **)t2);
    t2 = (t0 + 4508U);
    t12 = p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t8, t2);
    t18 = (t12 - 0);
    t11 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t12);
    t13 = (8U * t11);
    t14 = (0 + t13);
    t9 = (t7 + t14);
    t10 = (t0 + 2940);
    t16 = (t10 + 32U);
    t19 = *((char **)t16);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB11;

LAB13:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 812U);
    t6 = *((char **)t1);
    t1 = (t0 + 1252U);
    t7 = *((char **)t1);
    t1 = (t0 + 4508U);
    t12 = p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t7, t1);
    t18 = (t12 - 0);
    t11 = (t18 * 1);
    t13 = (8U * t11);
    t14 = (0U + t13);
    t8 = (t0 + 2976);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t16 = (t10 + 32U);
    t19 = *((char **)t16);
    memcpy(t19, t6, 8U);
    xsi_driver_first_trans_delta(t8, t14, 8U, 0LL);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 812U);
    t2 = *((char **)t1);
    t1 = (t0 + 2940);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB15:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 1252U);
    t6 = *((char **)t1);
    t1 = (t0 + 4508U);
    t7 = (t0 + 1744U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t7 = p_1242562249_sub_2065729909_1242562249(IEEE_P_1242562249, t5, t6, t1, t12);
    t9 = (t0 + 2904);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    t19 = (t16 + 32U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB17:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1252U);
    t6 = *((char **)t1);
    t1 = (t0 + 4508U);
    t7 = (t0 + 1744U);
    t8 = *((char **)t7);
    t12 = *((int *)t8);
    t7 = p_1242562249_sub_2065801783_1242562249(IEEE_P_1242562249, t5, t6, t1, t12);
    t9 = (t0 + 2904);
    t10 = (t9 + 32U);
    t16 = *((char **)t10);
    t19 = (t16 + 32U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

}

static void work_a_0160724067_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t1 = (t0 + 1340U);
    t2 = *((char **)t1);
    t1 = (t0 + 3012);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2788);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0160724067_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0160724067_3212880686_p_0,(void *)work_a_0160724067_3212880686_p_1,(void *)work_a_0160724067_3212880686_p_2,(void *)work_a_0160724067_3212880686_p_3};
	xsi_register_didat("work_a_0160724067_3212880686", "isim/_tmp/work/a_0160724067_3212880686.didat");
	xsi_register_executes(pe);
}
