
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name CPU -dir "C:/Users/gazevedo/Desktop/LAB4/LabCPU/CPU/planAhead_run_3" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "CPU_STATEMACHINE.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {../LCDlib/PROCESADOR_LCD4BITS.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {../LCDlib/COMMANDS_LCD4BITS.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ROMAssincrona.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CONTADOR_MODULOM.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {CPU_STATEMACHINE.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top CPU_STATEMACHINE $srcset
add_files [list {CPU_STATEMACHINE.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
