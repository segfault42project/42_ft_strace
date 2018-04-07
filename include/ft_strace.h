#ifndef FT_STRACE
#define FT_STRACE

#include <sys/user.h>
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/reg.h>

#define BUFF_MAX	4096

//['struct ustat *', 'mqd_t', 'struct linux_dirent *', 'loff_t __user *', 'struct pollfd *', 'mode_t', 'size_t', 'timer_t *', 'unsigned int *', 'struct io_event *', 'gid_t *', 'unsigned', 'const struct itimerspec *', 'struct getcpu_cache *', 'const char *', 'const struct iovcc *', 'const cap_user_data_t', 'const stuct timespec *', 'const struct rlimit64 *', 'struct msgbuf *', 'const struct timespec *', 'struct pt_regs *', 'size_t *', 'unsigned *', 'struct msghdr *', 'const clockid_t', 'const char __user *', 'struct stat *', 'uid_t', 'struct msqid_ds *', 'struct rusage *', 'struct __sysctl_args *', 'fd_set*', 'umode_t', 'struct old_utsname *', 'qid_t', 'struct mmsghdr *', 'cap_user_header_t', 'aio_context_t', 'const har *', 'const unsigned long *', 'const int *', 'NONE', 'fd_set *', 'struct itimerspec *', 'struct sokaddr *', 'u32', 'key_serial_t', 'stack_t *', 'siginfo_t *', 'struct perf_event_attr *', 'char __user *', 'struct sigevent *', 'struct poll_fd *', 'struct timespec *', 'struct shmid_ds *', 'struct robust_list_head *', 'unsigned int', 'struct epoll_event *', 'clockid_t', '__u64', 'const chat *', 'const void *', 'int *', 'off_t *', 'const struct mq_attr *', 'struct utimbuf *', 'struct sched_param *', 'struct timex *', 'struct rlimit64 *', 'sigset_t *', 'struct statfs *', 'unsigned long *', 'uid_t *', 'u32 *', 'long', 'struct sockaddr *', 'struct sembuf *', 'struct siginfo *', 'cap_user_data_t', 'struct sigaction *', 'time_t *', 'const sigset_t *', 'gid_t', 'struct kexec_segment *', 'struct file_handle *', 'pid_t', 'timer_t', 'struct sysinfo *', 'const struct iovec *', 'void *', 'const struct sigevent *', 'loff_t', 'int', 'u64', 'struct iocb *', 'off_t', 'struct task_struct *', 'struct rlimit *', 'struct timeval *', 'ing', 'fconst char *', 'const struct sigaction *', 'unsigned long', '__s32', 'const struct iovec __user *', 'union bpf_attr *', 'struct linux_dirent64 *', 'const stack_t *', 'unsigned\nint', 'union semun', 'key_t', 'struct sched_attr __user *', 'struct mq_attr *', 'struct itimerval *', 'loff_t *', 'char *', 'aio_context_t *', 'unsigned char *', 'struct timezone *']


enum
{
	NONE,
	INT,
	U_INT,
	LONG,
	U_LONG,
	STRUCT_STAT_PTR,
	STRUCT_POLL_FD_PTR,
	STRUCT_SIG_ACTION_PTR,
	STRUCT_TIMEVAL_PTR,
	STRUCT_SCHMID_DS_PTR,
	STRUCT_TIMESPEC_PTR,
	STURCT_SOCKADDR_PTR,
	FCONST_CHAR_PTR,
	STRUCT_ITIMERVAL_PTR,
	LOFF_T,
	U_CHAR_PTR,
	SIGSET_T_PTR,
	CONST_STRUCT_SIGACTION_PTR,
	CONST_STRUCT_IOVEC_PTR,
	INT_PTR,
	KEY_T,
	OFF_T,
	OFF_T_PTR,
	FD_SET_PTR,
	SIZE_T,
	CHAR_PTR,
	S_USTAT_PTR,
	CONST_CHAR_PTR
}			e_syscall;

typedef struct		s_syscall
{
	char			*name; // Name of syscall
	uint16_t		rax; // Syscall number
	uint8_t			rdi;
	uint8_t			rsi;
	uint8_t			rdx;
	uint8_t			r10;
	uint8_t			r8;
	uint8_t			r9;
	uint8_t			pad[1];
}					t_syscall;

void	usage(int argc);



#endif
