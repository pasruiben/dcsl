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
static const char *ng0 = "C:/Users/Pascual Javier/Documents/INGENIERIA/DCSL/DCSL/V1.1/module_1a/input/tb_micro_pk.vhd";
extern char *WORK_P_2058167884;

unsigned char work_p_2058167884_sub_1124941373_2058167884(char *, char *, char *);


static void work_a_3161178406_1985558087_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    unsigned char t7;
    unsigned char t9;

LAB0:    t1 = (t0 + 1756U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3476);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 548U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ((WORK_P_2058167884) + 624U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t7 = (t4 == t6);
    if (t7 == 0)
        goto LAB4;

LAB5:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 636U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ((WORK_P_2058167884) + 688U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t7 = (t4 == t6);
    if (t7 == 0)
        goto LAB6;

LAB7:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1056U);
    t3 = *((char **)t2);
    t2 = (t0 + 3060U);
    t7 = work_p_2058167884_sub_1124941373_2058167884(WORK_P_2058167884, t3, t2);
    t9 = (!(t7));
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1120U);
    t3 = *((char **)t2);
    t2 = (t0 + 3076U);
    t7 = work_p_2058167884_sub_1124941373_2058167884(WORK_P_2058167884, t3, t2);
    if (t7 == 0)
        goto LAB10;

LAB11:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3092U);
    t7 = work_p_2058167884_sub_1124941373_2058167884(WORK_P_2058167884, t3, t2);
    t9 = (!(t7));
    if (t9 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1248U);
    t3 = *((char **)t2);
    t2 = (t0 + 3108U);
    t7 = work_p_2058167884_sub_1124941373_2058167884(WORK_P_2058167884, t3, t2);
    if (t7 == 0)
        goto LAB14;

LAB15:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3690);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(105, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB4:    t2 = (t0 + 3494);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB5;

LAB6:    t2 = (t0 + 3517);
    xsi_report(t2, 23U, (unsigned char)2);
    goto LAB7;

LAB8:    t5 = (t0 + 3540);
    xsi_report(t5, 37U, (unsigned char)2);
    goto LAB9;

LAB10:    t5 = (t0 + 3577);
    xsi_report(t5, 38U, (unsigned char)2);
    goto LAB11;

LAB12:    t5 = (t0 + 3615);
    xsi_report(t5, 37U, (unsigned char)2);
    goto LAB13;

LAB14:    t5 = (t0 + 3652);
    xsi_report(t5, 38U, (unsigned char)2);
    goto LAB15;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}


extern void work_a_3161178406_1985558087_init()
{
	static char *pe[] = {(void *)work_a_3161178406_1985558087_p_0};
	xsi_register_didat("work_a_3161178406_1985558087", "isim/_tmp/work/a_3161178406_1985558087.didat");
	xsi_register_executes(pe);
}
