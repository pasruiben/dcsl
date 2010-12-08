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
static const char *ng0 = "/home/practicas/Escritorio/DCSL/V1.1/module_1e/input/Modulo1e/../regfile.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_1213234959_1242562249(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_2592010699(char *, unsigned char , unsigned char );


static void work_a_1111616105_3708392848_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    int t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 13980);
    *((int *)t1) = 31;
    t2 = (t0 + 13984);
    *((int *)t2) = 0;
    t3 = 31;
    t4 = 0;

LAB2:    if (t3 >= t4)
        goto LAB3;

LAB5:    t1 = (t0 + 8348);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(87, ng0);
    t5 = (t0 + 13980);
    t6 = (t0 + 4724U);
    t7 = *((char **)t6);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 4;
    t9 = (t6 + 4U);
    *((int *)t9) = 0;
    t9 = (t6 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 4);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t7, t8);
    t13 = *((int *)t5);
    t14 = (t13 == t12);
    if (t14 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 13980);
    t10 = *((int *)t1);
    t12 = (t10 - 31);
    t11 = (t12 * -1);
    t20 = (1 * t11);
    t21 = (0U + t20);
    t2 = (t0 + 8408);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, t21, 1, 0LL);

LAB7:
LAB4:    t1 = (t0 + 13980);
    t3 = *((int *)t1);
    t2 = (t0 + 13984);
    t4 = *((int *)t2);
    t10 = (t3 + -1);
    t3 = t10;
    t5 = (t0 + 13980);
    *((int *)t5) = t3;
    goto LAB2;

LAB6:    xsi_set_current_line(88, ng0);
    t9 = (t0 + 4460U);
    t15 = *((char **)t9);
    t16 = *((unsigned char *)t15);
    t17 = ieee_p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, (unsigned char)3, t16);
    t9 = (t0 + 13980);
    t18 = *((int *)t9);
    t19 = (t18 - 31);
    t11 = (t19 * -1);
    t20 = (1 * t11);
    t21 = (0U + t20);
    t22 = (t0 + 8408);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t17;
    xsi_driver_first_trans_delta(t22, t21, 1, 0LL);
    goto LAB7;

}

static void work_a_1111616105_3708392848_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(171, ng0);

LAB3:    t1 = xsi_get_transient_memory(23U);
    memset(t1, 0, 23U);
    t2 = t1;
    memset(t2, (unsigned char)2, 23U);
    t3 = (t0 + 8444);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 23U);
    xsi_driver_first_trans_delta(t3, 896U, 23U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1111616105_3708392848_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(172, ng0);

LAB3:    t1 = xsi_get_transient_memory(23U);
    memset(t1, 0, 23U);
    t2 = t1;
    memset(t2, (unsigned char)2, 23U);
    t3 = (t0 + 8480);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 23U);
    xsi_driver_first_trans_delta(t3, 928U, 23U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1111616105_3708392848_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(173, ng0);

LAB3:    t1 = xsi_get_transient_memory(23U);
    memset(t1, 0, 23U);
    t2 = t1;
    memset(t2, (unsigned char)2, 23U);
    t3 = (t0 + 8516);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 23U);
    xsi_driver_first_trans_delta(t3, 960U, 23U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1111616105_3708392848_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(174, ng0);

LAB3:    t1 = xsi_get_transient_memory(23U);
    memset(t1, 0, 23U);
    t2 = t1;
    memset(t2, (unsigned char)3, 23U);
    t3 = (t0 + 8552);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 23U);
    xsi_driver_first_trans_delta(t3, 992U, 23U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1111616105_3708392848_p_5(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    int t6;
    unsigned int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(179, ng0);

LAB3:    t1 = (t0 + 4988U);
    t2 = *((char **)t1);
    t1 = (t0 + 4548U);
    t3 = *((char **)t1);
    t1 = (t4 + 0U);
    t5 = (t1 + 0U);
    *((int *)t5) = 4;
    t5 = (t1 + 4U);
    *((int *)t5) = 0;
    t5 = (t1 + 8U);
    *((int *)t5) = -1;
    t6 = (0 - 4);
    t7 = (t6 * -1);
    t7 = (t7 + 1);
    t5 = (t1 + 12U);
    *((unsigned int *)t5) = t7;
    t8 = ieee_p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t3, t4);
    t9 = (t8 - 0);
    t7 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t10 = (32U * t7);
    t11 = (0 + t10);
    t5 = (t2 + t11);
    t12 = (t0 + 8588);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8356);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1111616105_3708392848_p_6(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    int t6;
    unsigned int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(180, ng0);

LAB3:    t1 = (t0 + 4988U);
    t2 = *((char **)t1);
    t1 = (t0 + 4636U);
    t3 = *((char **)t1);
    t1 = (t4 + 0U);
    t5 = (t1 + 0U);
    *((int *)t5) = 4;
    t5 = (t1 + 4U);
    *((int *)t5) = 0;
    t5 = (t1 + 8U);
    *((int *)t5) = -1;
    t6 = (0 - 4);
    t7 = (t6 * -1);
    t7 = (t7 + 1);
    t5 = (t1 + 12U);
    *((unsigned int *)t5) = t7;
    t8 = ieee_p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t3, t4);
    t9 = (t8 - 0);
    t7 = (t9 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t8);
    t10 = (32U * t7);
    t11 = (0 + t10);
    t5 = (t2 + t11);
    t12 = (t0 + 8624);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 32U);
    xsi_driver_first_trans_fast_port(t12);

LAB2:    t17 = (t0 + 8364);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1111616105_3708392848_init()
{
	static char *pe[] = {(void *)work_a_1111616105_3708392848_p_0,(void *)work_a_1111616105_3708392848_p_1,(void *)work_a_1111616105_3708392848_p_2,(void *)work_a_1111616105_3708392848_p_3,(void *)work_a_1111616105_3708392848_p_4,(void *)work_a_1111616105_3708392848_p_5,(void *)work_a_1111616105_3708392848_p_6};
	xsi_register_didat("work_a_1111616105_3708392848", "isim/_tmp/work/a_1111616105_3708392848.didat");
	xsi_register_executes(pe);
}
