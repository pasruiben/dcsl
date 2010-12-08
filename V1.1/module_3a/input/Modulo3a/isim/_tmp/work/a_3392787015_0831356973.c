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
static const char *ng0 = "/home/pascual/INGENIERIA/DCSL/V1.1/module_3a/input/Modulo3a/../memory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int p_1242562249_sub_1213234959_1242562249(char *, char *, char *);
unsigned char p_2592010699_sub_1605435078_2592010699(char *, unsigned char , unsigned char );
unsigned char p_2592010699_sub_1690584930_2592010699(char *, unsigned char );
unsigned char p_2592010699_sub_1744673427_2592010699(char *, char *, unsigned int , unsigned int );
unsigned char p_2592010699_sub_2545490612_2592010699(char *, unsigned char , unsigned char );


static void work_a_3392787015_0831356973_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(72, ng0);

LAB3:    t1 = (t0 + 900U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t3);
    t1 = (t0 + 812U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = p_2592010699_sub_1690584930_2592010699(IEEE_P_2592010699, t6);
    t8 = p_2592010699_sub_1605435078_2592010699(IEEE_P_2592010699, t4, t7);
    t1 = (t0 + 1164U);
    t9 = *((char **)t1);
    t10 = *((unsigned char *)t9);
    t11 = p_2592010699_sub_2545490612_2592010699(IEEE_P_2592010699, t8, t10);
    t1 = (t0 + 2160);
    t12 = (t1 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t16 = (t0 + 2108);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3392787015_0831356973_p_1(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t16;
    int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 528U);
    t2 = p_2592010699_sub_1744673427_2592010699(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2116);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2196);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 812U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t1 = (t0 + 900U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 900U);
    t5 = *((char **)t1);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t1 = (t0 + 724U);
    t4 = *((char **)t1);
    t1 = (t15 + 0U);
    t5 = (t1 + 0U);
    *((int *)t5) = 11;
    t5 = (t1 + 4U);
    *((int *)t5) = 0;
    t5 = (t1 + 8U);
    *((int *)t5) = -1;
    t17 = (0 - 11);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t5 = (t1 + 12U);
    *((unsigned int *)t5) = t18;
    t19 = p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t4, t15);
    t20 = (t19 - 0);
    t18 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 4095, 1, t19);
    t21 = (32U * t18);
    t22 = (0 + t21);
    t5 = (t3 + t22);
    t6 = (t0 + 2232);
    t7 = (t6 + 32U);
    t14 = *((char **)t7);
    t16 = (t14 + 32U);
    t23 = *((char **)t16);
    memcpy(t23, t5, 32U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2196);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB6;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 636U);
    t6 = *((char **)t1);
    t1 = (t0 + 1328U);
    t7 = *((char **)t1);
    t1 = (t0 + 724U);
    t14 = *((char **)t1);
    t1 = (t15 + 0U);
    t16 = (t1 + 0U);
    *((int *)t16) = 11;
    t16 = (t1 + 4U);
    *((int *)t16) = 0;
    t16 = (t1 + 8U);
    *((int *)t16) = -1;
    t17 = (0 - 11);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t1 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = p_1242562249_sub_1213234959_1242562249(IEEE_P_1242562249, t14, t15);
    t20 = (t19 - 0);
    t18 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 4095, 1, t19);
    t21 = (32U * t18);
    t22 = (0 + t21);
    t16 = (t7 + t22);
    memcpy(t16, t6, 32U);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2196);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

}


extern void work_a_3392787015_0831356973_init()
{
	static char *pe[] = {(void *)work_a_3392787015_0831356973_p_0,(void *)work_a_3392787015_0831356973_p_1};
	xsi_register_didat("work_a_3392787015_0831356973", "isim/_tmp/work/a_3392787015_0831356973.didat");
	xsi_register_executes(pe);
}
