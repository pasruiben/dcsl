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
static const char *ng0 = "/home/pascual/INGENIERIA/DCSL/V1.1/module_1b/input/Modulo1b/../tb_register_en.vhd";
extern char *IEEE_P_1242562249;

char *p_1242562249_sub_2563015576_1242562249(char *, char *, int , int );


static void work_a_1988697910_1985558087_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    int64 t9;
    unsigned int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 1496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3112);
    xsi_report(t2, 18U, 0);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1732);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = p_1242562249_sub_2563015576_1242562249(IEEE_P_1242562249, t7, 50, 8);
    t3 = (t0 + 1804);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(94, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB10;

LAB11:    t10 = 0;

LAB12:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)0, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB13;

LAB14:    t15 = 0;

LAB15:    if (t15 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(98, ng0);
    t9 = (9 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t17 = (t0 + 3130);
    xsi_report(t17, 16U, (unsigned char)2);
    goto LAB9;

LAB10:    t10 = 7;
    goto LAB12;

LAB13:    t16 = 0;

LAB16:    if (t16 < 8U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB14;

LAB18:    t16 = (t16 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB29;

LAB30:    t10 = 0;

LAB31:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)0, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB32;

LAB33:    t15 = 0;

LAB34:    if (t15 == 0)
        goto LAB27;

LAB28:    xsi_set_current_line(104, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    t17 = (t0 + 3146);
    xsi_report(t17, 16U, (unsigned char)2);
    goto LAB28;

LAB29:    t10 = 7;
    goto LAB31;

LAB32:    t16 = 0;

LAB35:    if (t16 < 8U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB33;

LAB37:    t16 = (t16 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1732);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB42:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB48;

LAB49:    t10 = 0;

LAB50:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB51;

LAB52:    t15 = 0;

LAB53:    if (t15 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(110, ng0);
    t9 = (4 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    t17 = (t0 + 3162);
    xsi_report(t17, 33U, (unsigned char)2);
    goto LAB47;

LAB48:    t10 = 7;
    goto LAB50;

LAB51:    t16 = 0;

LAB54:    if (t16 < 8U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB52;

LAB56:    t16 = (t16 + 1);
    goto LAB54;

LAB57:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = p_1242562249_sub_2563015576_1242562249(IEEE_P_1242562249, t7, 25, 8);
    t3 = (t0 + 1804);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(113, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

LAB61:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB67;

LAB68:    t10 = 0;

LAB69:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB70;

LAB71:    t15 = 0;

LAB72:    if (t15 == 0)
        goto LAB65;

LAB66:    xsi_set_current_line(117, ng0);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

LAB65:    t17 = (t0 + 3195);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB66;

LAB67:    t10 = 7;
    goto LAB69;

LAB70:    t16 = 0;

LAB73:    if (t16 < 8U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB71;

LAB75:    t16 = (t16 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB86;

LAB87:    t10 = 0;

LAB88:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB89;

LAB90:    t15 = 0;

LAB91:    if (t15 == 0)
        goto LAB84;

LAB85:    xsi_set_current_line(123, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB97:    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    t17 = (t0 + 3204);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB85;

LAB86:    t10 = 7;
    goto LAB88;

LAB89:    t16 = 0;

LAB92:    if (t16 < 8U)
        goto LAB93;
    else
        goto LAB91;

LAB93:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB90;

LAB94:    t16 = (t16 + 1);
    goto LAB92;

LAB95:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1732);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t2 = p_1242562249_sub_2563015576_1242562249(IEEE_P_1242562249, t7, 40, 8);
    t3 = (t0 + 1804);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(126, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB101:    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB96:    goto LAB95;

LAB98:    goto LAB96;

LAB99:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB105;

LAB106:    t10 = 0;

LAB107:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB108;

LAB109:    t15 = 0;

LAB110:    if (t15 == 0)
        goto LAB103;

LAB104:    xsi_set_current_line(130, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB116:    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB100:    goto LAB99;

LAB102:    goto LAB100;

LAB103:    t17 = (t0 + 3213);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB104;

LAB105:    t10 = 7;
    goto LAB107;

LAB108:    t16 = 0;

LAB111:    if (t16 < 8U)
        goto LAB112;
    else
        goto LAB110;

LAB112:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB109;

LAB113:    t16 = (t16 + 1);
    goto LAB111;

LAB114:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB120:    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB115:    goto LAB114;

LAB117:    goto LAB115;

LAB118:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB124;

LAB125:    t10 = 0;

LAB126:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB127;

LAB128:    t15 = 0;

LAB129:    if (t15 == 0)
        goto LAB122;

LAB123:    xsi_set_current_line(136, ng0);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB135:    *((char **)t1) = &&LAB136;
    goto LAB1;

LAB119:    goto LAB118;

LAB121:    goto LAB119;

LAB122:    t17 = (t0 + 3222);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB123;

LAB124:    t10 = 7;
    goto LAB126;

LAB127:    t16 = 0;

LAB130:    if (t16 < 8U)
        goto LAB131;
    else
        goto LAB129;

LAB131:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB128;

LAB132:    t16 = (t16 + 1);
    goto LAB130;

LAB133:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB139:    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB134:    goto LAB133;

LAB136:    goto LAB134;

LAB137:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB143;

LAB144:    t10 = 0;

LAB145:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB146;

LAB147:    t15 = 0;

LAB148:    if (t15 == 0)
        goto LAB141;

LAB142:    xsi_set_current_line(142, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB154:    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB138:    goto LAB137;

LAB140:    goto LAB138;

LAB141:    t17 = (t0 + 3231);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB142;

LAB143:    t10 = 7;
    goto LAB145;

LAB146:    t16 = 0;

LAB149:    if (t16 < 8U)
        goto LAB150;
    else
        goto LAB148;

LAB150:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB147;

LAB151:    t16 = (t16 + 1);
    goto LAB149;

LAB152:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB158:    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB153:    goto LAB152;

LAB155:    goto LAB153;

LAB156:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB162;

LAB163:    t10 = 0;

LAB164:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB165;

LAB166:    t15 = 0;

LAB167:    if (t15 == 0)
        goto LAB160;

LAB161:    xsi_set_current_line(148, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB173:    *((char **)t1) = &&LAB174;
    goto LAB1;

LAB157:    goto LAB156;

LAB159:    goto LAB157;

LAB160:    t17 = (t0 + 3240);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB161;

LAB162:    t10 = 7;
    goto LAB164;

LAB165:    t16 = 0;

LAB168:    if (t16 < 8U)
        goto LAB169;
    else
        goto LAB167;

LAB169:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB166;

LAB170:    t16 = (t16 + 1);
    goto LAB168;

LAB171:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng0);
    t2 = p_1242562249_sub_2563015576_1242562249(IEEE_P_1242562249, t7, 10, 8);
    t3 = (t0 + 1804);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(151, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB177:    *((char **)t1) = &&LAB178;
    goto LAB1;

LAB172:    goto LAB171;

LAB174:    goto LAB172;

LAB175:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    if (-1 == -1)
        goto LAB181;

LAB182:    t10 = 0;

LAB183:    t11 = (t10 - 7);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t5 = (t4 + t13);
    t14 = (1U * 8U);
    memset(t5, (unsigned char)2, t14);
    t15 = 1;
    if (8U == 8U)
        goto LAB184;

LAB185:    t15 = 0;

LAB186:    if (t15 == 0)
        goto LAB179;

LAB180:    xsi_set_current_line(155, ng0);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB192:    *((char **)t1) = &&LAB193;
    goto LAB1;

LAB176:    goto LAB175;

LAB178:    goto LAB176;

LAB179:    t17 = (t0 + 3249);
    xsi_report(t17, 9U, (unsigned char)2);
    goto LAB180;

LAB181:    t10 = 7;
    goto LAB183;

LAB184:    t16 = 0;

LAB187:    if (t16 < 8U)
        goto LAB188;
    else
        goto LAB186;

LAB188:    t6 = (t3 + t16);
    t8 = (t2 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB185;

LAB189:    t16 = (t16 + 1);
    goto LAB187;

LAB190:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng0);
    t9 = (1 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB196:    *((char **)t1) = &&LAB197;
    goto LAB1;

LAB191:    goto LAB190;

LAB193:    goto LAB191;

LAB194:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = (t0 + 812U);
    t4 = *((char **)t2);
    t15 = 1;
    if (8U == 8U)
        goto LAB200;

LAB201:    t15 = 0;

LAB202:    if (t15 == 0)
        goto LAB198;

LAB199:    xsi_set_current_line(161, ng0);
    t9 = (4 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB208:    *((char **)t1) = &&LAB209;
    goto LAB1;

LAB195:    goto LAB194;

LAB197:    goto LAB195;

LAB198:    t6 = (t0 + 3258);
    xsi_report(t6, 36U, (unsigned char)2);
    goto LAB199;

LAB200:    t10 = 0;

LAB203:    if (t10 < 8U)
        goto LAB204;
    else
        goto LAB202;

LAB204:    t2 = (t3 + t10);
    t5 = (t4 + t10);
    if (*((unsigned char *)t2) != *((unsigned char *)t5))
        goto LAB201;

LAB205:    t10 = (t10 + 1);
    goto LAB203;

LAB206:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB212:    *((char **)t1) = &&LAB213;
    goto LAB1;

LAB207:    goto LAB206;

LAB209:    goto LAB207;

LAB210:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = (t0 + 812U);
    t4 = *((char **)t2);
    t15 = 1;
    if (8U == 8U)
        goto LAB216;

LAB217:    t15 = 0;

LAB218:    if (t15 == 0)
        goto LAB214;

LAB215:    xsi_set_current_line(167, ng0);
    t9 = (5 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB224:    *((char **)t1) = &&LAB225;
    goto LAB1;

LAB211:    goto LAB210;

LAB213:    goto LAB211;

LAB214:    t6 = (t0 + 3294);
    xsi_report(t6, 9U, (unsigned char)2);
    goto LAB215;

LAB216:    t10 = 0;

LAB219:    if (t10 < 8U)
        goto LAB220;
    else
        goto LAB218;

LAB220:    t2 = (t3 + t10);
    t5 = (t4 + t10);
    if (*((unsigned char *)t2) != *((unsigned char *)t5))
        goto LAB217;

LAB221:    t10 = (t10 + 1);
    goto LAB219;

LAB222:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1696);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(169, ng0);
    t9 = (0 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB228:    *((char **)t1) = &&LAB229;
    goto LAB1;

LAB223:    goto LAB222;

LAB225:    goto LAB223;

LAB226:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 900U);
    t3 = *((char **)t2);
    t2 = (t0 + 812U);
    t4 = *((char **)t2);
    t15 = 1;
    if (8U == 8U)
        goto LAB232;

LAB233:    t15 = 0;

LAB234:    if (t15 == 0)
        goto LAB230;

LAB231:    xsi_set_current_line(173, ng0);
    t9 = (10 * 1000000LL);
    t2 = (t0 + 1412);
    xsi_process_wait(t2, t9);

LAB240:    *((char **)t1) = &&LAB241;
    goto LAB1;

LAB227:    goto LAB226;

LAB229:    goto LAB227;

LAB230:    t6 = (t0 + 3303);
    xsi_report(t6, 9U, (unsigned char)2);
    goto LAB231;

LAB232:    t10 = 0;

LAB235:    if (t10 < 8U)
        goto LAB236;
    else
        goto LAB234;

LAB236:    t2 = (t3 + t10);
    t5 = (t4 + t10);
    if (*((unsigned char *)t2) != *((unsigned char *)t5))
        goto LAB233;

LAB237:    t10 = (t10 + 1);
    goto LAB235;

LAB238:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3312);
    xsi_report(t2, 17U, 0);
    xsi_set_current_line(175, ng0);

LAB244:    *((char **)t1) = &&LAB245;
    goto LAB1;

LAB239:    goto LAB238;

LAB241:    goto LAB239;

LAB242:    goto LAB2;

LAB243:    goto LAB242;

LAB245:    goto LAB243;

}


extern void work_a_1988697910_1985558087_init()
{
	static char *pe[] = {(void *)work_a_1988697910_1985558087_p_0};
	xsi_register_didat("work_a_1988697910_1985558087", "isim/_tmp/work/a_1988697910_1985558087.didat");
	xsi_register_executes(pe);
}
