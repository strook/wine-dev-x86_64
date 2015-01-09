//
//  main.c
//  
//
//  Created by strooka on 09.01.15.
//
//

#include <stdio.h>
#include <pthread.h>

#include "windef.h"
#include "winnt.h"

/**********************************************************************
 *              NTCurrentTeb   (NTDLL.@)
 */
struct _TEB * WINAPI NtCurrentTeb(void)
{
    return pthread_getspecific( teb_key );
}
