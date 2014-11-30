/* Customer ID=7011; Build=0x2b6f6; Copyright (c) 2003-2006 Tensilica Inc.  ALL RIGHTS RESERVED.

   Redistribution and use in source and binary forms, with or without 
   modification, are permitted provided that the following conditions are met: 

   1. Redistributions of source code must retain the above copyright 
      notice, this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
   IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
   TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
   PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL TENSILICA
   INCORPORATED BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.  */

/* errno is not a global variable, because that would make using it
   non-reentrant.  Instead, its address is returned by the function
   __errno.  */

#ifndef _SYS_ERRNO_H_
#ifdef __cplusplus
extern "C" {
#endif
#define _SYS_ERRNO_H_

#include <sys/reent.h>
#include <xtensa/simcall-errno.h>

#ifndef _REENT_ONLY
#define errno (*__errno())
extern int *__errno _PARAMS ((void));
#endif

#define __errno_r(ptr) ((ptr)->_errno)

#define EPERM		_SIMC_EPERM
#define ENOENT		_SIMC_ENOENT
#define ESRCH		_SIMC_ESRCH
#define EINTR		_SIMC_EINTR
#define EIO		_SIMC_EIO
#define ENXIO		_SIMC_ENXIO
#define E2BIG		_SIMC_E2BIG
#define ENOEXEC		_SIMC_ENOEXEC
#define EBADF		_SIMC_EBADF
#define ECHILD		_SIMC_ECHILD
#define EAGAIN		_SIMC_EAGAIN
#define ENOMEM		_SIMC_ENOMEM
#define EACCES		_SIMC_EACCES
#define EFAULT		_SIMC_EFAULT
#define ENOTBLK		_SIMC_ENOTBLK
#define EBUSY		_SIMC_EBUSY
#define EEXIST		_SIMC_EEXIST
#define EXDEV		_SIMC_EXDEV
#define ENODEV		_SIMC_ENODEV
#define ENOTDIR		_SIMC_ENOTDIR
#define EISDIR		_SIMC_EISDIR
#define EINVAL		_SIMC_EINVAL
#define ENFILE		_SIMC_ENFILE
#define EMFILE		_SIMC_EMFILE
#define ENOTTY		_SIMC_ENOTTY
#define ETXTBSY		_SIMC_ETXTBSY
#define EFBIG		_SIMC_EFBIG
#define ENOSPC		_SIMC_ENOSPC
#define ESPIPE		_SIMC_ESPIPE
#define EROFS		_SIMC_EROFS
#define EMLINK		_SIMC_EMLINK
#define EPIPE		_SIMC_EPIPE
#define EDOM		_SIMC_EDOM
#define ERANGE		_SIMC_ERANGE
#define ENOMSG		_SIMC_ENOMSG
#define EIDRM		_SIMC_EIDRM
#define ECHRNG		_SIMC_ECHRNG
#define EL2NSYNC	_SIMC_EL2NSYNC
#define EL3HLT		_SIMC_EL3HLT
#define EL3RST		_SIMC_EL3RST
#define ELNRNG		_SIMC_ELNRNG
#define EUNATCH		_SIMC_EUNATCH
#define ENOCSI		_SIMC_ENOCSI
#define EL2HLT		_SIMC_EL2HLT
#define EDEADLK		_SIMC_EDEADLK
#define ENOLCK		_SIMC_ENOLCK
#define EBADE		_SIMC_EBADE
#define EBADR		_SIMC_EBADR
#define EXFULL		_SIMC_EXFULL
#define ENOANO		_SIMC_ENOANO
#define EBADRQC		_SIMC_EBADRQC
#define EBADSLT		_SIMC_EBADSLT
#define EDEADLOCK	_SIMC_EDEADLOCK
#define EBFONT		_SIMC_EBFONT
#define ENOSTR		_SIMC_ENOSTR
#define ENODATA		_SIMC_ENODATA
#define ETIME		_SIMC_ETIME
#define ENOSR		_SIMC_ENOSR
#define ENONET		_SIMC_ENONET
#define ENOPKG		_SIMC_ENOPKG
#define EREMOTE		_SIMC_EREMOTE
#define ENOLINK		_SIMC_ENOLINK
#define EADV		_SIMC_EADV
#define ESRMNT		_SIMC_ESRMNT
#define ECOMM		_SIMC_ECOMM
#define EPROTO		_SIMC_EPROTO
#define EMULTIHOP	_SIMC_EMULTIHOP
#define ELBIN		_SIMC_ELBIN
#define EDOTDOT		_SIMC_EDOTDOT
#define EBADMSG		_SIMC_EBADMSG
#define EFTYPE		_SIMC_EFTYPE
#define ENOTUNIQ	_SIMC_ENOTUNIQ
#define EBADFD		_SIMC_EBADFD
#define EREMCHG		_SIMC_EREMCHG
#define ELIBACC		_SIMC_ELIBACC
#define ELIBBAD		_SIMC_ELIBBAD
#define ELIBSCN		_SIMC_ELIBSCN
#define ELIBMAX		_SIMC_ELIBMAX
#define ELIBEXEC	_SIMC_ELIBEXEC
#define ENOSYS		_SIMC_ENOSYS
#define ENMFILE		_SIMC_ENMFILE
#define ENOTEMPTY	_SIMC_ENOTEMPTY
#define ENAMETOOLONG	_SIMC_ENAMETOOLONG
#define ELOOP		_SIMC_ELOOP
#define EOPNOTSUPP	_SIMC_EOPNOTSUPP
#define EPFNOSUPPORT	_SIMC_EPFNOSUPPORT
#define ECONNRESET	_SIMC_ECONNRESET
#define ENOBUFS		_SIMC_ENOBUFS
#define EAFNOSUPPORT	_SIMC_EAFNOSUPPORT
#define EPROTOTYPE	_SIMC_EPROTOTYPE
#define ENOTSOCK	_SIMC_ENOTSOCK
#define ENOPROTOOPT	_SIMC_ENOPROTOOPT
#define ESHUTDOWN	_SIMC_ESHUTDOWN
#define ECONNREFUSED	_SIMC_ECONNREFUSED
#define EADDRINUSE	_SIMC_EADDRINUSE
#define ECONNABORTED	_SIMC_ECONNABORTED
#define ENETUNREACH	_SIMC_ENETUNREACH
#define ENETDOWN	_SIMC_ENETDOWN
#define ETIMEDOUT	_SIMC_ETIMEDOUT
#define EHOSTDOWN	_SIMC_EHOSTDOWN
#define EHOSTUNREACH	_SIMC_EHOSTUNREACH
#define EINPROGRESS	_SIMC_EINPROGRESS
#define EALREADY	_SIMC_EALREADY
#define EDESTADDRREQ	_SIMC_EDESTADDRREQ
#define EMSGSIZE	_SIMC_EMSGSIZE
#define EPROTONOSUPPORT	_SIMC_EPROTONOSUPPORT
#define ESOCKTNOSUPPORT	_SIMC_ESOCKTNOSUPPORT
#define EADDRNOTAVAIL	_SIMC_EADDRNOTAVAIL
#define ENETRESET	_SIMC_ENETRESET
#define EISCONN		_SIMC_EISCONN
#define ENOTCONN	_SIMC_ENOTCONN
#define ETOOMANYREFS	_SIMC_ETOOMANYREFS
#define EPROCLIM	_SIMC_EPROCLIM
#define EUSERS		_SIMC_EUSERS
#define EDQUOT		_SIMC_EDQUOT
#define ESTALE		_SIMC_ESTALE
#define ENOTSUP		_SIMC_ENOTSUP
#define ENOMEDIUM	_SIMC_ENOMEDIUM
#define ENOSHARE	_SIMC_ENOSHARE
#define ECASECLASH	_SIMC_ECASECLASH
#define EILSEQ		_SIMC_EILSEQ
#define EOVERFLOW	_SIMC_EOVERFLOW

#define EWOULDBLOCK	EAGAIN

#define __ELASTERROR 2000	/* Users can add values starting here */

#ifdef __cplusplus
}
#endif
#endif /* _SYS_ERRNO_H */
