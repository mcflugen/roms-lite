/*
** svn $Id: riverplume2.h 2328 2014-01-23 20:16:18Z arango $
*******************************************************************************
** Copyright (c) 2002-2014 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for River Plume example by Hyatt and Signell described at
** http://smig.usgs.gov/SMIG/features_0300/plumes_inline.html
**
** Application flag:   RIVERPLUME2
** Input script:       ocean_riverplume2.in
*/

#define UV_ADV
#define UV_COR
#undef UV_QDRAG
#undef MB_BBL
#undef SG_BBL
#define SSW_BBL
#define SSW_CALC_UB

#ifdef SG_BBL
# define SG_CALC_ZNOT
# undef  SG_LOGINT
#endif
#ifdef MB_BBL
# define MB_CALC_ZNOT
# undef  MB_Z0BIO
# undef  MB_Z0BL
# undef  MB_Z0RIP
#endif
#ifdef SSW_BBL
# define SSW_CALC_ZNOT
# undef  SSW_LOGINT
#endif
#define DJ_GRADPS
#define TS_MPDATA
#define TS_DIF2
#define MIX_GEO_TS
#define NONLIN_EOS
#define SALINITY
#define MASKING
#define SOLVE3D
#define SPLINES
#undef AVERAGES

#define LMD_MIXING
#ifdef LMD_MIXING
# define LMD_RIMIX
# define LMD_CONVEC
# define LMD_SKPP
# define LMD_BKPP
# define LMD_NONLOCAL
#endif

#define ANA_GRID
#define ANA_INITIAL
#undef ANA_PSOURCE
#define ANA_SMFLUX
#define ANA_SRFLUX
#define ANA_SSFLUX
#define ANA_STFLUX
#define ANA_BSFLUX
#define ANA_BTFLUX
#undef ANA_WWAVE
#define ANA_FSOBC
#define ANA_SEDIMENT
#define SEDIMENT
#define SUSPLOAD
#define ANA_SPFLUX
#define ANA_BPFLUX


