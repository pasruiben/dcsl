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
static const char *ng0 = "/home/pascual/INGENIERIA/DCSL/V1.1/module_1c/input/Module1c/../counter.vhd";
extern char *IEEE_P_1242562249;

char *p_1242562249_sub_2065729909_1242562249(char *, char *, char *, char *, int );


static void work_a_2969581285_3212880686_p_0(char *t0)
{
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 548U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 616U);
    t17 = xsi_signal_has_event(t1);
    if (t17 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 616U);
    t17 = xsi_signal_has_event(t1);
    if (t17 == 1)
        goto LAB21;

LAB22:    t4 = (unsigned char)0;

LAB23:    if (t4 == 1)
        goto LAB18;

LAB19:    t3 = (unsigned char)0;

LAB20:    if (t3 != 0)
        goto LAB16;

LAB17:
LAB3:    t1 = (t0 + 1956);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(77, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    if (-1 == -1)
        goto LAB5;

LAB6:    t6 = 0;

LAB7:    t7 = (t6 - 7);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (t5 + t9);
    t11 = (1U * 8U);
    memset(t10, (unsigned char)2, t11);
    t12 = (t0 + 2008);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB3;

LAB5:    t6 = 7;
    goto LAB7;

LAB8:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 724U);
    t12 = *((char **)t2);
    t2 = (t0 + 2008);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB10:    t2 = (t0 + 812U);
    t10 = *((char **)t2);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)3);
    t3 = t21;
    goto LAB12;

LAB13:    t2 = (t0 + 636U);
    t5 = *((char **)t2);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;
    goto LAB15;

LAB16:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1076U);
    t12 = *((char **)t2);
    t2 = (t0 + 3092U);
    t13 = p_1242562249_sub_2065729909_1242562249(IEEE_P_1242562249, t22, t12, t2, 1);
    t14 = (t0 + 2008);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t23 = (t16 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t13, 8U);
    xsi_driver_first_trans_fast(t14);
    goto LAB3;

LAB18:    t2 = (t0 + 900U);
    t10 = *((char **)t2);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)3);
    t3 = t21;
    goto LAB20;

LAB21:    t2 = (t0 + 636U);
    t5 = *((char **)t2);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)3);
    t4 = t19;
    goto LAB23;

}

static void work_a_2969581285_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 1076U);
    t2 = *((char **)t1);
    t1 = (t0 + 2044);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 1964);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2969581285_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2969581285_3212880686_p_0,(void *)work_a_2969581285_3212880686_p_1};
	xsi_register_didat("work_a_2969581285_3212880686", "isim/_tmp/work/a_2969581285_3212880686.didat");
	xsi_register_executes(pe);
}
