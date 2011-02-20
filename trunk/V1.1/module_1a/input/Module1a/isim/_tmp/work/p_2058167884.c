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

/* This file is designed for use with ISim build 0xef153c89 */

#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_3322286019_1242562249(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3337867729_1242562249(char *, char *, char *, char *, char *, char *);


char *work_p_2058167884_sub_2625274847_2058167884(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t8[24];
    char t15[16];
    char t16[16];
    char t21[16];
    char *t0;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t17;
    unsigned int t18;
    int t19;
    char *t20;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    unsigned int t39;

LAB0:    t9 = (t8 + 4U);
    t10 = (t3 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t8 + 8U);
    *((char **)t11) = t4;
    t12 = (t8 + 12U);
    t13 = (t5 != 0);
    if (t13 == 1)
        goto LAB5;

LAB4:    t14 = (t8 + 16U);
    *((char **)t14) = t6;
    t17 = (t4 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (t18 / 2);
    t20 = ieee_p_1242562249_sub_3322286019_1242562249(IEEE_P_1242562249, t16, t3, t4, t19);
    t22 = (t6 + 12U);
    t23 = *((unsigned int *)t22);
    t24 = (t23 / 2);
    t25 = ieee_p_1242562249_sub_3322286019_1242562249(IEEE_P_1242562249, t21, t5, t6, t24);
    t26 = ieee_p_1242562249_sub_3337867729_1242562249(IEEE_P_1242562249, t15, t20, t16, t25, t21);
    t27 = (t15 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (1U * t28);
    t0 = xsi_get_transient_memory(t29);
    memcpy(t0, t26, t29);
    t30 = (t15 + 0U);
    t31 = *((int *)t30);
    t32 = (t15 + 4U);
    t33 = *((int *)t32);
    t34 = (t15 + 8U);
    t35 = *((int *)t34);
    t36 = (t2 + 0U);
    t37 = (t36 + 0U);
    *((int *)t37) = t31;
    t37 = (t36 + 4U);
    *((int *)t37) = t33;
    t37 = (t36 + 8U);
    *((int *)t37) = t35;
    t38 = (t33 - t31);
    t39 = (t38 * t35);
    t39 = (t39 + 1);
    t37 = (t36 + 12U);
    *((unsigned int *)t37) = t39;

LAB1:    return t0;
LAB3:    *((char **)t9) = *((char **)t3);
    goto LAB2;

LAB5:    *((char **)t12) = *((char **)t5);
    goto LAB4;

LAB6:;
}

unsigned char work_p_2058167884_sub_1124941373_2058167884(char *t1, char *t2, char *t3)
{
    char t5[16];
    unsigned char t0;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;

LAB0:    t6 = (t5 + 4U);
    t7 = (t2 != 0);
    if (t7 == 1)
        goto LAB3;

LAB2:    t8 = (t5 + 8U);
    *((char **)t8) = t3;
    t9 = (t3 + 0U);
    t10 = *((int *)t9);
    t11 = (t3 + 0U);
    t12 = *((int *)t11);
    t13 = (t3 + 8U);
    t14 = *((int *)t13);
    t15 = (t10 - t12);
    t16 = (t15 * t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t19 = (t2 + t18);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    if (t21 != 0)
        goto LAB4;

LAB6:
LAB5:    t0 = (unsigned char)1;

LAB1:    return t0;
LAB3:    *((char **)t6) = *((char **)t2);
    goto LAB2;

LAB4:    t0 = (unsigned char)0;
    goto LAB1;

LAB7:    goto LAB5;

LAB8:;
}

unsigned char work_p_2058167884_sub_4174218510_2058167884(char *t1, char *t2, char *t3, int t4)
{
    char t5[72];
    char t6[16];
    char t12[16];
    unsigned char t0;
    char *t7;
    unsigned int t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;
    unsigned char t45;

LAB0:    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (t8 - 1);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t13 = (t3 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (t14 - 1);
    t16 = (t12 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = t15;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - t15);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t5 + 4U);
    t20 = ((IEEE_P_1242562249) + 1684);
    t21 = (t17 + 48U);
    *((char **)t21) = t20;
    t22 = (char *)alloca(t11);
    t23 = (t17 + 32U);
    *((char **)t23) = t22;
    xsi_type_set_default_value(t20, t22, t12);
    t24 = (t17 + 36U);
    *((char **)t24) = t12;
    t25 = (t17 + 44U);
    *((unsigned int *)t25) = t11;
    t26 = (t6 + 4U);
    t27 = (t2 != 0);
    if (t27 == 1)
        goto LAB3;

LAB2:    t28 = (t6 + 8U);
    *((char **)t28) = t3;
    t29 = (t6 + 12U);
    *((int *)t29) = t4;
    t30 = (t17 + 32U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    t32 = (t3 + 12U);
    t19 = *((unsigned int *)t32);
    t19 = (t19 * 1U);
    memcpy(t30, t2, t19);
    t9 = (t4 - 1);
    t7 = (t12 + 0U);
    t10 = *((int *)t7);
    t15 = (t10 - 1);
    t18 = t15;
    t33 = t9;

LAB4:    if (t18 >= t33)
        goto LAB5;

LAB7:    t0 = (unsigned char)0;

LAB1:    return t0;
LAB3:    *((char **)t26) = *((char **)t2);
    goto LAB2;

LAB5:    t13 = (t17 + 32U);
    t16 = *((char **)t13);
    t13 = (t12 + 0U);
    t34 = *((int *)t13);
    t20 = (t12 + 8U);
    t35 = *((int *)t20);
    t36 = (t18 - t34);
    t8 = (t36 * t35);
    t21 = (t12 + 4U);
    t37 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t34, t37, t35, t18);
    t11 = (1U * t8);
    t14 = (0 + t11);
    t23 = (t16 + t14);
    t27 = *((unsigned char *)t23);
    t24 = (t17 + 32U);
    t25 = *((char **)t24);
    t24 = (t12 + 0U);
    t38 = *((int *)t24);
    t30 = (t12 + 0U);
    t39 = *((int *)t30);
    t31 = (t12 + 8U);
    t40 = *((int *)t31);
    t41 = (t38 - t39);
    t19 = (t41 * t40);
    t42 = (1U * t19);
    t43 = (0 + t42);
    t32 = (t25 + t43);
    t44 = *((unsigned char *)t32);
    t45 = (t27 != t44);
    if (t45 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB6:    t9 = (t18 + -1);
    t18 = t9;
    goto LAB4;

LAB8:    t0 = (unsigned char)1;
    goto LAB1;

LAB11:    goto LAB9;

LAB12:;
}

int work_p_2058167884_sub_3504879441_2058167884(char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    unsigned char t17;
    int t18;
    int t19;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 256);
    t7 = (t5 + 48U);
    *((char **)t7) = t6;
    t9 = (t5 + 32U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 44U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t5 + 32U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = 2;
    t14 = 1;
    t15 = 31;

LAB2:    if (t14 <= t15)
        goto LAB3;

LAB5:    t0 = 32;

LAB1:    return t0;
LAB3:    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t16 = *((int *)t7);
    t17 = (t16 > t2);
    if (t17 != 0)
        goto LAB6;

LAB8:
LAB7:    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t16 = *((int *)t7);
    t6 = (t5 + 32U);
    t9 = *((char **)t6);
    t18 = *((int *)t9);
    t19 = (t16 + t18);
    t6 = (t5 + 32U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t19;

LAB4:    t16 = (t14 + 1);
    t14 = t16;
    goto LAB2;

LAB6:    t0 = t14;
    goto LAB1;

LAB9:    goto LAB7;

LAB10:;
}


extern void work_p_2058167884_init()
{
	static char *se[] = {(void *)work_p_2058167884_sub_2625274847_2058167884,(void *)work_p_2058167884_sub_1124941373_2058167884,(void *)work_p_2058167884_sub_4174218510_2058167884,(void *)work_p_2058167884_sub_3504879441_2058167884};
	xsi_register_didat("work_p_2058167884", "isim/_tmp/work/p_2058167884.didat");
	xsi_register_subprogram_executes(se);
}
