/*******************************************************************************
* Copyright 2004-2022 Intel Corporation.
*
* This software and the related documents are Intel copyrighted  materials,  and
* your use of  them is  governed by the  express license  under which  they were
* provided to you (License).  Unless the License provides otherwise, you may not
* use, modify, copy, publish, distribute,  disclose or transmit this software or
* the related documents without Intel's prior written permission.
*
* This software and the related documents  are provided as  is,  with no express
* or implied  warranties,  other  than those  that are  expressly stated  in the
* License.
*******************************************************************************/

/*
*   Content: 
*           Intel(R) oneAPI Math Kernel Library (oneMKL) PARDISO C header file
*
*           Contains interface to PARDISO.
*
********************************************************************************
*/
#if !defined( __MKL_PARDISO_H )

#define __MKL_PARDISO_H

#include "mkl_dss.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void pardiso( _MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
              const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
              const void *a, const MKL_INT *ia, const MKL_INT *ja,
              MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
              const MKL_INT *msglvl, void *b, void *x, MKL_INT *error );

void PARDISO( _MKL_DSS_HANDLE_t pt, const MKL_INT *maxfct, const MKL_INT *mnum,
              const MKL_INT *mtype, const MKL_INT *phase, const MKL_INT *n,
              const void *a, const MKL_INT *ia, const MKL_INT *ja,
              MKL_INT *perm, const MKL_INT *nrhs, MKL_INT *iparm,
              const MKL_INT *msglvl, void *b, void *x, MKL_INT *error );

void pardisoinit( _MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm );
void PARDISOINIT( _MKL_DSS_HANDLE_t pt, const MKL_INT *mtype, MKL_INT *iparm );

void pardiso_handle_store( _MKL_DSS_HANDLE_t pt, const char *dirname,
                           MKL_INT *error );
void PARDISO_HANDLE_STORE( _MKL_DSS_HANDLE_t pt, const char *dirname,
                           MKL_INT *error );

void pardiso_handle_restore( _MKL_DSS_HANDLE_t pt, const char *dirname,
                             MKL_INT *error );
void PARDISO_HANDLE_RESTORE( _MKL_DSS_HANDLE_t pt, const char *dirname,
                             MKL_INT *error );

void pardiso_handle_delete( const char *dirname, MKL_INT *error );
void PARDISO_HANDLE_DELETE( const char *dirname, MKL_INT *error );

/*
*  Note: The pardiso_64 interface is not supported on IA-32 architecture.
*        If called on IA-32, error = -12 is returned.
*/

void pardiso_64( _MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                 const long long int *mnum, const long long int *mtype,
                 const long long int *phase, const long long int *n,
                 const void *a, const long long int *ia,
                 const long long int *ja, long long int *perm,
                 const long long int *nrhs, long long int *iparm,
                 const long long int *msglvl, void *b, void *x,
                 long long int *error );

void PARDISO_64( _MKL_DSS_HANDLE_t pt, const long long int *maxfct,
                 const long long int *mnum, const long long int *mtype,
                 const long long int *phase, const long long int *n,
                 const void *a, const long long int *ia,
                 const long long int *ja, long long int *perm,
                 const long long int *nrhs, long long int *iparm,
                 const long long int *msglvl, void *b, void *x,
                 long long int *error );

void pardiso_handle_store_64( _MKL_DSS_HANDLE_t pt, const char *dirname,
                              MKL_INT *error );
void PARDISO_HANDLE_STORE_64( _MKL_DSS_HANDLE_t pt, const char *dirname,
                              MKL_INT *error );

void pardiso_handle_restore_64( _MKL_DSS_HANDLE_t pt, const char *dirname,
                                MKL_INT *error );
void PARDISO_HANDLE_RESTORE_64( _MKL_DSS_HANDLE_t pt, const char *dirname,
                                MKL_INT *error );

void pardiso_handle_delete_64( const char *dirname, MKL_INT *error );
void PARDISO_HANDLE_DELETE_64( const char *dirname, MKL_INT *error );

/* Error classes */
#define PARDISO_NO_ERROR                 0
#define PARDISO_UNIMPLEMENTED         -101
#define PARDISO_NULL_HANDLE           -102
#define PARDISO_MEMORY_ERROR          -103

/* oneMKL Progress routine */
#ifndef _MKL_PARDISO_PIVOT_H_
#define _MKL_PARDISO_PIVOT_H_
int MKL_PARDISO_PIVOT ( const double* aii, double* bii, const double* eps );
int MKL_PARDISO_PIVOT_( const double* aii, double* bii, const double* eps );
int mkl_pardiso_pivot ( const double* aii, double* bii, const double* eps );
int mkl_pardiso_pivot_( const double* aii, double* bii, const double* eps );
#endif /* _MKL_PARDISO_PIVOT_H_ */

void pardiso_getdiag( const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                      const MKL_INT *mnum, MKL_INT *error  );
void PARDISO_GETDIAG( const _MKL_DSS_HANDLE_t pt, void *df, void *da,
                      const MKL_INT *mnum, MKL_INT *error  );

void pardiso_export( void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                     const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error );
void PARDISO_EXPORT( void *pt, void* values, MKL_INT* ia, MKL_INT *ja,
                     const MKL_INT *step, const MKL_INT *iparm, MKL_INT *error );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
