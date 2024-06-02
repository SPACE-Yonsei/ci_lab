/************************************************************************
**
**      GSC-18128-1, "Core Flight Executive Version 6.7"
**
**      Copyright (c) 2006-2019 United States Government as represented by
**      the Administrator of the National Aeronautics and Space Administration.
**      All Rights Reserved.
**
**      Licensed under the Apache License, Version 2.0 (the "License");
**      you may not use this file except in compliance with the License.
**      You may obtain a copy of the License at
**
**        http://www.apache.org/licenses/LICENSE-2.0
**
**      Unless required by applicable law or agreed to in writing, software
**      distributed under the License is distributed on an "AS IS" BASIS,
**      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**      See the License for the specific language governing permissions and
**      limitations under the License.
**
** File: ci_lab_msgids.h
**
** Purpose:
**  Define CI Lab Message IDs
**
** Notes:
**
*************************************************************************/
#ifndef _ci_lab_msgids_h_
#define _ci_lab_msgids_h_

#define CI_LAB_MID_HOUSEKEEPING_REQ 0x1850 //Housekeeping Command
#define CI_LAB_MID_GROUNDCMD_REQ    0x1851 //Ground Command
#define CI_LAB_MID_ECHO_DATA_REQ	0x1852 //이 Command가 들어오면, 직전에 받은 Command를 출력한다.

#define CI_LAB_MID_HOUSEKEEPING_RES 0x0850 //Housekeeping Response
#define CI_LAB_MID_ECHO_DATA_RES    0x0851 //직전에 받은 Command를 출력

#endif /* _ci_lab_msgids_h_ */

/************************/
/*  End of File Comment */
/************************/
