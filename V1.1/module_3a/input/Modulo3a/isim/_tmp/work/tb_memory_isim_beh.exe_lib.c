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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *WORK_P_0435585777;
char *STD_STANDARD;
char *IEEE_P_2592010699;
char *WORK_P_1417729656;
char *IEEE_P_1242562249;
char *WORK_P_2058167884;

int isim_run(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_p_2058167884_init();
    work_p_1417729656_init();
    work_p_0435585777_init();
    work_a_3392787015_0831356973_init();
    work_a_0487624588_1985558087_init();


    xsi_register_tops("work_a_0487624588_1985558087");

    WORK_P_0435585777 = xsi_get_engine_memory("work_p_0435585777");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    WORK_P_1417729656 = xsi_get_engine_memory("work_p_1417729656");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    WORK_P_2058167884 = xsi_get_engine_memory("work_p_2058167884");

    return xsi_run_simulation(argc, argv);

}
