#include "64/syscallent.h"

/* Arch-specific block, not used on AArch64 */
[244 ... 259] = { },

/* Blank down to 1023 */
[277 ... 1023] = { },

/* Quote from asm-generic/unistd.h:
 *
 * All syscalls below here should go away really,
 * these are provided for both review and as a porting
 * help for the C library version.
 *
 * Last chance: are any of these important enough to
 * enable by default?
 */

[1024] = { 3,	TD|TF,		sys_open,		"open"		},
[1025] = { 2,	TF,		sys_link,		"link"		},
[1026] = { 1,	TF,		sys_unlink,		"unlink"	},
[1027] = { 3,	TF,		sys_mknod,		"mknod"		},
[1028] = { 2,	TF,		sys_chmod,		"chmod"		},
[1029] = { 3,	TF,		sys_chown,		"chown"		},
[1030] = { 2,	TF,		sys_mkdir,		"mkdir"		},
[1031] = { 1,	TF,		sys_rmdir,		"rmdir"		},
[1032] = { 3,	TF,		sys_chown,		"lchown"	},
[1033] = { 2,	TF,		sys_access,		"access"	},
[1034] = { 2,	TF,		sys_rename,		"rename"	},
[1035] = { 3,	TF,		sys_readlink,		"readlink"	},
[1036] = { 2,	TF,		sys_symlink,		"symlink"	},
[1037] = { 2,	TF,		sys_utimes,		"utimes"	},
[1038] = { 2,	TF,		sys_stat,		"stat"		},
[1039] = { 2,	TF,		sys_lstat,		"lstat"		},
[1040] = { 1,	TD,		sys_pipe,		"pipe"		},
[1041] = { 2,	TD,		sys_dup2,		"dup2"		},
[1042] = { 1,	TD,		sys_epoll_create,	"epoll_create"	},
[1043] = { 0,	TD,		sys_inotify_init,	"inotify_init"	},
[1044] = { 1,	TD,		sys_eventfd,		"eventfd"	},
[1045] = { 3,	TD|TS,		sys_signalfd,		"signalfd"	},
[1046] = { 4,	TD|TN,		sys_sendfile64,		"sendfile"	},
[1047] = { 2,	TD,		sys_ftruncate,		"ftruncate"	},
[1048] = { 2,	TF,		sys_truncate,		"truncate"	},
[1049] = { 2,	TF,		sys_stat,		"stat"		},
[1050] = { 2,	TF,		sys_lstat,		"lstat"		},
[1051] = { 2,	TD,		sys_fstat,		"fstat"		},
[1052] = { 3,	TD,		sys_fcntl,		"fcntl"		},
[1053] = { 4,	TD,		sys_fadvise64,		"fadvise64"	},
[1054] = { 4,	TD|TF,		sys_newfstatat,		"newfstatat"	},
[1055] = { 2,	TD,		sys_fstatfs,		"fstatfs"	},
[1056] = { 2,	TF,		sys_statfs,		"statfs"	},
[1057] = { 3,	TD,		sys_lseek,		"lseek"		},
[1058] = { 6,	TD|TM|SI,	sys_mmap,		"mmap"		},
[1059] = { 1,	0,		sys_alarm,		"alarm"		},
[1060] = { 0,	0,		sys_getpgrp,		"getpgrp"	},
[1061] = { 0,	TS,		sys_pause,		"pause"		},
[1062] = { 1,	0,		sys_time,		"time"		},
[1063] = { 2,	TF,		sys_utime,		"utime"		},
[1064] = { 2,	TD|TF,		sys_creat,		"creat"		},
[1065] = { 3,	TD,		sys_getdents,		"getdents"	},
[1066] = { 3,	TD|TF,		sys_futimesat,		"futimesat"	},
[1067] = { 5,	TD,		sys_select,		"select"	},
[1068] = { 3,	TD,		sys_poll,		"poll"		},
[1069] = { 4,	TD,		sys_epoll_wait,		"epoll_wait"	},
[1070] = { 2,	0,		sys_ustat,		"ustat"		},
[1071] = { 0,	TP,		sys_vfork,		"vfork"		},
[1072] = { 4,	TP,		sys_wait4,		"wait4"		},
[1073] = { 6,	TN,		sys_recv,		"recv"		},
[1074] = { 4,	TN,		sys_send,		"send"		},
[1075] = { 2,	0,		sys_bdflush,		"bdflush"	},
[1076] = { 1,	TF,		sys_umount,		"umount"	},
[1077] = { 1,	TF,		sys_uselib,		"uselib"	},
[1078] = { 1,	0,		sys_sysctl,		"sysctl"	},
[1079] = { 0,	TP,		sys_fork,		"fork"		},
