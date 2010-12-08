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
static const char *ng0 = "/home/practicas/Escritorio/DCSL/V1.1/module_1e/input/Modulo1e/../register_en.vhd";



static void work_a_3074049585_3212880686_p_0(char *t0)
{
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

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 548U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 636U);
    t2 = *((char **)t1);
    t17 = *((unsigned char *)t2);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB13;

LAB14:    t4 = (unsigned char)0;

LAB15:    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB8;

LAB9:
LAB3:    t1 = (t0 + 1660);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(68, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t5 = t1;
    if (-1 == -1)
        goto LAB5;

LAB6:    t6 = 0;

LAB7:    t7 = (t6 - 8);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (t5 + t9);
    t11 = (1U * 9U);
    memset(t10, (unsigned char)2, t11);
    t12 = (t0 + 1704);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 9U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

LAB5:    t6 = 8;
    goto LAB7;

LAB8:    xsi_set_current_line(70, ng0);
    t5 = (t0 + 812U);
    t12 = *((char **)t5);
    t5 = (t0 + 1704);
    t13 = (t5 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t12, 9U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB10:    t5 = (t0 + 724U);
    t10 = *((char **)t5);
    t20 = *((unsigned char *)t10);
    t21 = (t20 == (unsigned char)3);
    t3 = t21;
    goto LAB12;

LAB13:    t1 = (t0 + 616U);
    t19 = xsi_signal_has_event(t1);
    t4 = t19;
    goto LAB15;

}


extern void work_a_3074049585_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3074049585_3212880686_p_0};
	xsi_register_didat("work_a_3074049585_3212880686", "isim/_tmp/work/a_3074049585_3212880686.didat");
	xsi_register_executes(pe);
}
