# 0. getppid  
**Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does echo $$ print the same value? Why?**
checkout [parent_process.c](/shell_exercises/parent_process.c)\
parent process gives the same ID\
echo $$ gives the same ID as the parent process. This is because $$ is predefined to give the parent process ID.\
$BASHPID gives the ID of the current process.\


# 1. /proc/sys/kernel/pid_max  
**Write a shell script that prints the maximum value a process ID can be.**