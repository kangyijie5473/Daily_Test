#define _GNU_SOURCE 1
#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <sys/sysinfo.h>
int main()
{
	cpu_set_t flag;
	CPU_ZERO(&flag); 
	int cpuID;
	if (0 != sched_getaffinity(getpid(), sizeof(cpu_set_t), &flag))
		perror("sched_getaffinity");

	int cpu_nums = get_nprocs_conf();
	for(int i = 0; i < cpu_nums; i++)
		if (CPU_ISSET(i, &flag))
			printf("now can run on No.%d core\n", i);
	for (int i = 0; i < cpu_nums - 1; i++) {
		cpuID = sched_getcpu();
		printf("now run on No.%d core\n", cpuID);
		CPU_CLR(cpuID, &flag);
		sched_setaffinity(getpid(), sizeof(cpu_set_t), &flag);

	}
	cpuID = sched_getcpu();
	printf("finally run on No.%d core\n", cpuID);
}

