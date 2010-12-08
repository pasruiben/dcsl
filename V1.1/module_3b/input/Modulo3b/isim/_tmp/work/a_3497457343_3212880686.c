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
static const char *ng0 = "/home/pascual/INGENIERIA/DCSL/V1.1/module_3b/input/Modulo3b/../memCtrl.vhd";



static void work_a_3497457343_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 636U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4372);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(101, ng0);
    t7 = (t0 + 548U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3012U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t2 = (t0 + 4456);
    t7 = (t2 + 32U);
    t8 = *((char **)t7);
    t11 = (t8 + 32U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t2 = (t0 + 616U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

LAB8:    xsi_set_current_line(102, ng0);
    t7 = (t0 + 4456);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

}

static void work_a_3497457343_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4380);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1340U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 724U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 1780U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4492);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4492);
    t8 = (t1 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 4492);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4492);
    t5 = (t1 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_3497457343_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(129, ng0);

LAB3:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    t1 = (t0 + 4528);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4388);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3497457343_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(130, ng0);

LAB3:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    t1 = (t0 + 4564);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4396);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3497457343_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 2572U);
    t2 = *((char **)t1);
    t1 = (t0 + 4600);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4404);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3497457343_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    static char *nl0[] = {&&LAB4, &&LAB3, &&LAB5};

LAB0:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 4636);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 4672);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 4708);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2924U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4412);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 1516U);
    t4 = *((char **)t3);
    t3 = (t0 + 4744);
    t5 = (t3 + 32U);
    t7 = *((char **)t5);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 12U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1164U);
    t2 = *((char **)t1);
    t1 = (t0 + 4780);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 1428U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4816);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 4852);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4672);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 988U);
    t2 = *((char **)t1);
    t1 = (t0 + 4744);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    memcpy(t7, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1164U);
    t2 = *((char **)t1);
    t1 = (t0 + 4780);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 812U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4816);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 900U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4852);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4636);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 2044U);
    t2 = *((char **)t1);
    t1 = (t0 + 4744);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    memcpy(t7, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 2220U);
    t2 = *((char **)t1);
    t1 = (t0 + 4780);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 1868U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4816);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4852);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (t0 + 4708);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

}


extern void work_a_3497457343_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3497457343_3212880686_p_0,(void *)work_a_3497457343_3212880686_p_1,(void *)work_a_3497457343_3212880686_p_2,(void *)work_a_3497457343_3212880686_p_3,(void *)work_a_3497457343_3212880686_p_4,(void *)work_a_3497457343_3212880686_p_5};
	xsi_register_didat("work_a_3497457343_3212880686", "isim/_tmp/work/a_3497457343_3212880686.didat");
	xsi_register_executes(pe);
}
