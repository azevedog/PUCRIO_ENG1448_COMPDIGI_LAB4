/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/gazevedo/Desktop/LAB4/LabCPU/CPU/CPU_STATEMACHINE.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *WORK_P_1845655050;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *work_p_1845655050_sub_1566118142_2716601171(char *, char *, int );
char *work_p_1845655050_sub_2254029111_2716601171(char *, char *, int );
char *work_p_1845655050_sub_2268750232_2716601171(char *, char *, char *);
char *work_p_1845655050_sub_3368421625_2716601171(char *, char *, int );
char *work_p_1845655050_sub_3944976969_2716601171(char *, char *, unsigned char );
char *work_p_1845655050_sub_3993076050_2716601171(char *, char *, char *);
char *work_p_1845655050_sub_519255793_2716601171(char *, char *, int , int );


static void work_a_3885125380_3212880686_p_0(char *t0)
{
    char t25[16];
    char t30[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t26;
    int t27;
    int t28;
    int t29;
    unsigned int t31;
    static char *nl0[] = {&&LAB13, &&LAB14, &&LAB15, &&LAB12};

LAB0:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8408);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 2632U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 1992U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t4 = (char *)((nl0) + t12);
    goto **((char **)t4);

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(111, ng0);
    t13 = (t0 + 2152U);
    t14 = *((char **)t13);
    t13 = (t0 + 16018);
    t16 = 1;
    if (8U == 8U)
        goto LAB19;

LAB20:    t16 = 0;

LAB21:    if (t16 != 0)
        goto LAB16;

LAB18:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 16026);
    t1 = 1;
    if (8U == 8U)
        goto LAB27;

LAB28:    t1 = 0;

LAB29:    if (t1 != 0)
        goto LAB25;

LAB26:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 16034);
    t1 = 1;
    if (8U == 8U)
        goto LAB35;

LAB36:    t1 = 0;

LAB37:    if (t1 != 0)
        goto LAB33;

LAB34:
LAB17:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 14672U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t4, t2, 1);
    t8 = (t0 + 8600);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

LAB13:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t26 = *((int *)t4);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t2 = (t0 + 14656U);
    t27 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t2);
    t28 = (t26 + t27);
    t8 = (t0 + 8664);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t28;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 14672U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t4, t2, 1);
    t8 = (t0 + 8600);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 8536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB14:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 8600);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 8536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB15:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 16042);
    t1 = 1;
    if (8U == 8U)
        goto LAB44;

LAB45:    t1 = 0;

LAB46:    if (t1 != 0)
        goto LAB41;

LAB43:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 16050);
    t1 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t1 = 0;

LAB54:    if (t1 != 0)
        goto LAB50;

LAB51:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 16074);
    t1 = 1;
    if (8U == 8U)
        goto LAB68;

LAB69:    t1 = 0;

LAB70:    if (t1 != 0)
        goto LAB66;

LAB67:
LAB42:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 14672U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t25, t4, t2, 1);
    t8 = (t0 + 8600);
    t11 = (t8 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 8536);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB16:    xsi_set_current_line(112, ng0);
    t20 = (t0 + 8536);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)0;
    xsi_driver_first_trans_fast(t20);
    goto LAB17;

LAB19:    t17 = 0;

LAB22:    if (t17 < 8U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t18 = (t14 + t17);
    t19 = (t13 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB20;

LAB24:    t17 = (t17 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(114, ng0);
    t13 = (t0 + 8536);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)1;
    xsi_driver_first_trans_fast(t13);
    goto LAB17;

LAB27:    t17 = 0;

LAB30:    if (t17 < 8U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB28;

LAB32:    t17 = (t17 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(116, ng0);
    t13 = (t0 + 8536);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);
    goto LAB17;

LAB35:    t17 = 0;

LAB38:    if (t17 < 8U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB36;

LAB40:    t17 = (t17 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(135, ng0);
    t13 = (t0 + 2312U);
    t14 = *((char **)t13);
    t26 = *((int *)t14);
    t13 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t26, 8);
    t15 = (t0 + 8728);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 8U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 8792);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB42;

LAB44:    t17 = 0;

LAB47:    if (t17 < 8U)
        goto LAB48;
    else
        goto LAB46;

LAB48:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB45;

LAB49:    t17 = (t17 + 1);
    goto LAB47;

LAB50:    xsi_set_current_line(139, ng0);
    t13 = (t0 + 8792);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 16058);
    t5 = (t0 + 8728);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t26 = *((int *)t4);
    t3 = (t26 >= 0);
    if (t3 == 1)
        goto LAB61;

LAB62:    t1 = (unsigned char)0;

LAB63:    if (t1 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t26 = *((int *)t4);
    t27 = (t26 - 9);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t27, 8);
    t5 = (t0 + 8856);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 14720U);
    t5 = (t0 + 16066);
    t11 = (t30 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 0;
    t13 = (t11 + 4U);
    *((int *)t13) = 7;
    t13 = (t11 + 8U);
    *((int *)t13) = 1;
    t26 = (7 - 0);
    t17 = (t26 * 1);
    t17 = (t17 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t17;
    t13 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t25, t4, t2, t5, t30);
    t14 = (t25 + 12U);
    t17 = *((unsigned int *)t14);
    t31 = (1U * t17);
    t1 = (8U != t31);
    if (t1 == 1)
        goto LAB64;

LAB65:    t15 = (t0 + 8856);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 8U);
    xsi_driver_first_trans_fast(t15);

LAB59:    goto LAB42;

LAB52:    t17 = 0;

LAB55:    if (t17 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB53;

LAB57:    t17 = (t17 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2312U);
    t8 = *((char **)t2);
    t28 = *((int *)t8);
    t29 = (48 + t28);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t25, t29, 8);
    t11 = (t0 + 8856);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB59;

LAB61:    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t27 = *((int *)t5);
    t6 = (t27 < 10);
    t1 = t6;
    goto LAB63;

LAB64:    xsi_size_not_matching(8U, t31, 0);
    goto LAB65;

LAB66:    xsi_set_current_line(150, ng0);
    t13 = (t0 + 16082);
    t15 = (t0 + 8728);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 8U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 8792);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB42;

LAB68:    t17 = 0;

LAB71:    if (t17 < 8U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t8 = (t4 + t17);
    t11 = (t2 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB69;

LAB73:    t17 = (t17 + 1);
    goto LAB71;

}

static void work_a_3885125380_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(161, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 60, 1, t4);
    t7 = (12U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = (t0 + 8920);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 12U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 8424);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3885125380_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(164, ng0);

LAB3:    t2 = (t0 + 16090);
    t4 = work_p_1845655050_sub_2268750232_2716601171(WORK_P_1845655050, t1, t2);
    t5 = (12U != 12U);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 8984);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 12U);
    xsi_driver_first_trans_delta(t6, 0U, 12U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB6;

}

static void work_a_3885125380_3212880686_p_3(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(165, ng0);

LAB3:    t2 = work_p_1845655050_sub_2254029111_2716601171(WORK_P_1845655050, t1, 1);
    t3 = (12U != 12U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t4 = (t0 + 9048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 12U);
    xsi_driver_first_trans_delta(t4, 12U, 12U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB6;

}

static void work_a_3885125380_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(166, ng0);

LAB3:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t2 = work_p_1845655050_sub_519255793_2716601171(WORK_P_1845655050, t1, t4, t6);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (12U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 9112);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 12U);
    xsi_driver_first_trans_delta(t10, 24U, 12U, 0LL);

LAB2:    t15 = (t0 + 8440);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t8, 0);
    goto LAB6;

}

static void work_a_3885125380_3212880686_p_5(char *t0)
{
    char t5[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t16 = work_p_1845655050_sub_3944976969_2716601171(WORK_P_1845655050, t15, (unsigned char)3);
    t17 = (t15 + 12U);
    t18 = *((unsigned int *)t17);
    t18 = (t18 * 1U);
    t19 = (12U != t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    t20 = (t0 + 9176);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t16, 12U);
    xsi_driver_first_trans_delta(t20, 36U, 12U, 0LL);

LAB2:    t25 = (t0 + 8456);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t1 = work_p_1845655050_sub_3993076050_2716601171(WORK_P_1845655050, t5, t6);
    t7 = (t5 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (12U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 9176);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 12U);
    xsi_driver_first_trans_delta(t10, 36U, 12U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t8, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(12U, t18, 0);
    goto LAB10;

}

static void work_a_3885125380_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(168, ng0);

LAB3:    t2 = work_p_1845655050_sub_1566118142_2716601171(WORK_P_1845655050, t1, 1);
    t3 = (t1 + 12U);
    t4 = *((unsigned int *)t3);
    t4 = (t4 * 1U);
    t5 = (12U != t4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 9240);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 12U);
    xsi_driver_first_trans_delta(t6, 48U, 12U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t4, 0);
    goto LAB6;

}

static void work_a_3885125380_3212880686_p_7(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(169, ng0);

LAB3:    t2 = work_p_1845655050_sub_3368421625_2716601171(WORK_P_1845655050, t1, 1);
    t3 = (t1 + 12U);
    t4 = *((unsigned int *)t3);
    t4 = (t4 * 1U);
    t5 = (12U != t4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t6 = (t0 + 9304);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 12U);
    xsi_driver_first_trans_delta(t6, 60U, 12U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(12U, t4, 0);
    goto LAB6;

}


extern void work_a_3885125380_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3885125380_3212880686_p_0,(void *)work_a_3885125380_3212880686_p_1,(void *)work_a_3885125380_3212880686_p_2,(void *)work_a_3885125380_3212880686_p_3,(void *)work_a_3885125380_3212880686_p_4,(void *)work_a_3885125380_3212880686_p_5,(void *)work_a_3885125380_3212880686_p_6,(void *)work_a_3885125380_3212880686_p_7};
	xsi_register_didat("work_a_3885125380_3212880686", "isim/CPU_STATEMACHINE_TB_isim_beh.exe.sim/work/a_3885125380_3212880686.didat");
	xsi_register_executes(pe);
}
