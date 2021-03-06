///////////////////////////////////////////////////////////////////////////////
// No Warranty
// Except as may be otherwise agreed to in writing, no warranties of any
// kind, whether express or implied, are given by MTK with respect to any MTK
// Deliverables or any use thereof, and MTK Deliverables are provided on an
// "AS IS" basis.  MTK hereby expressly disclaims all such warranties,
// including any implied warranties of merchantability, non-infringement and
// fitness for a particular purpose and any warranties arising out of course
// of performance, course of dealing or usage of trade.  Parties further
// acknowledge that Company may, either presently and/or in the future,
// instruct MTK to assist it in the development and the implementation, in
// accordance with Company's designs, of certain softwares relating to
// Company's product(s) (the "Services").  Except as may be otherwise agreed
// to in writing, no warranties of any kind, whether express or implied, are
// given by MTK with respect to the Services provided, and the Services are
// provided on an "AS IS" basis.  Company further acknowledges that the
// Services may contain errors, that testing is important and Company is
// solely responsible for fully testing the Services and/or derivatives
// thereof before they are used, sublicensed or distributed.  Should there be
// any third party action brought against MTK, arising out of or relating to
// the Services, Company agree to fully indemnify and hold MTK harmless.
// If the parties mutually agree to enter into or continue a business
// relationship or other arrangement, the terms and conditions set forth
// hereunder shall remain effective and, unless explicitly stated otherwise,
// shall prevail in the event of a conflict in the terms in any agreements
// entered into between the parties.
////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2008, MediaTek Inc.
// All rights reserved.
//
// Unauthorized use, practice, perform, copy, distribution, reproduction,
// or disclosure of this information in whole or in part is prohibited.
////////////////////////////////////////////////////////////////////////////////
// AcdkTypes.h  $Revision$
////////////////////////////////////////////////////////////////////////////////

//! \file  AcdkTyeps.h
//! \brief

#ifndef _ACDKTYPES_H_
#define _ACDKTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "../common/CamTypes.h"


/////////////////////////////////////////////////////////////////////////
//! Typedefs 
/////////////////////////////////////////////////////////////////////////
#if 0
typedef unsigned char      MUINT8;
typedef unsigned short     MUINT16;
typedef unsigned int       MUINT32;
typedef unsigned long long MUINT64;
typedef signed char        MINT8;
typedef signed short       MINT16;
typedef signed int         MINT32;
typedef long long          MINT64;
typedef int                MBOOL;
typedef MINT32             MRESULT;
typedef void               MVOID; 
typedef float              MFLOAT; 
typedef double             MDOUBLE; 


#ifndef MFALSE
#define MFALSE 0
#endif


#ifndef MTRUE
#define MTRUE 1
#endif
#endif

typedef MVOID (*Func_CB)(MVOID* a_pParam);

/**********************************************************************
*! Nucamera commands
**********************************************************************/
typedef struct Acdk_CLICmd_t
{
    //! Command string, include shortcut key
    const char *pucCmdStr;

    //! Help string, include functionality and parameter description
    const char *pucHelpStr;

    //! Handling function
    //! \param a_u4Argc  [IN] Number of arguments plus 1
    //! \param a_pprArgv [IN] Array of command and arguments, element 0 is
    //!                       command string
    //! \return error code
    //FIXME: return MRESULT is good?
    MINT32 (*handleCmd)(const MUINT32 a_u4Argc, MUINT8 *a_pprArgv[]);

} Acdk_CLICmd;

#define NULL_CLI_CMD {NULL, NULL, NULL}
#define MAX_CLI_CMD_ARGS    (25)                //!<: Maximum CLI command arguments including the command itself

#ifdef __cplusplus
}
#endif

#endif //end _ACDKTYPES_H_

