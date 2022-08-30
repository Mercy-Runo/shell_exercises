# 0. getppid  
#### **Write a program that prints the PID of the parent process. Run your program several times within the same shell. It should be the same. Does <code>echo $$</code> print the same value? Why?**
- checkout [parent_process.c](/parent_process.c)
- parent process gives the same ID.
- <code>echo $$</code> gives the same ID as the parent process. This is because <code>$$</code> is predefined to give the parent process ID.
- `$BASHPID` gives the ID of the current process.


# 1. /proc/sys/kernel/pid_max  
#### **Write a shell script that prints the maximum value a process ID can be.**
- checkout [maxID](/maxID)


# 0. av
#### **Write a program that prints all the arguments, without using <code>ac</code> .**
- checkout [print_arguments.c](/print_arguments.c)

# 1. Read line
#### **Write a program that prints <code>"$ "</code> , wait for the user to enter a command, prints it on the next line.**

#### man 3 <code>getline</code>

#### important make sure you read the man, and the RETURN VALUE section, in order to know when to stop reading Keyword: “end-of-file”, or <code>EOF</code>(or <code>Ctrl+D</code>).
- checkout [getline.c](/getline.c)

# **advanced:**
#### **Write your own version of <code>getline</code>.**

    julien@ubuntu:\~/c/shell$ gcc -Wall -Wextra -Werror -pedantic prompt.c -o prompt
    julien@ubuntu:\~/c/shell$ ./prompt
    $ cat prompt.c
    cat prompt.c
    julien@ubuntu:~/c/shell$


# 2. command line to av
#### **Write a function that splits a string and returns an array of each word of the string.**

#### man `strtok`
- checkout [strtok.c](/strtok.c)

# **advanced:**
### **Write the function without `strtok`**


# Exercise: fork + wait + execve
#### **Write a program that executes the command ls -l /tmp in 5 different child processes. Each child should be created by the same process (the father). Wait for a child to exit before creating a new child.**

# Exercise: super simple shell
#### **Using everything we saw, write a first version of a super simple shell that can run commands with their full path, without any argument.**

    julien@ubuntu:~/c/shell$ l
    total 140
    drwxrwxr-x  2 julien julien 4096 Dec  4 20:55 .
    drwxrwxr-x 17 julien julien 4096 Dec  4 13:04 ..
    -rw-rw-r--  1 julien julien  249 Dec  4 13:15 env-environ.c
    -rw-rw-r--  1 julien julien  231 Dec  4 13:09 env-main.c
    -rwxrwxr-x  1 julien julien 8768 Dec  4 19:52 exec
    -rw-rw-r--  1 julien julien  302 Dec  4 19:38 exec.c
    -rwxrwxr-x  1 julien julien 8760 Dec  4 20:11 fork
    -rw-rw-r--  1 julien julien  438 Dec  4 19:57 fork.c
    -rwxrwxr-x  1 julien julien 8656 Dec  4 13:45 mypid
    -rw-rw-r--  1 julien julien  179 Dec  4 19:49 pid.c
    -rwxrwxr-x  1 julien julien 8656 Dec  4 13:48 ppid
    -rw-rw-r--  1 julien julien  180 Dec  4 13:48 ppid.c
    -rwxrwxr-x  1 julien julien 8680 Dec  4 13:44 printenv
    -rwxrwxr-x  1 julien julien 8760 Dec  4 14:38 prompt
    -rwxrwxr-x  1 julien julien 8760 Dec  4 14:38 promptc
    -rw-rw-r--  1 julien julien  191 Dec  4 14:17 prompt.c
    -rw-rw-r--  1 julien julien  753 Dec  4 20:49 shell.c
    -rwxrwxr-x  1 julien julien 8864 Dec  4 20:38 wait
    -rw-rw-r--  1 julien julien  441 Dec  4 20:15 wait.c
    julien@ubuntu:~/c/shell$ gcc -Wall -Werror -pedantic shell.c -o shell
    julien@ubuntu:~/c/shell$ ./shell 
    #cisfun$ /bin/ls
    env-environ.c  exec    fork    mypid  ppid    printenv  promptc   shell    wait
    env-main.c     exec.c  fork.c  pid.c  ppid.c  prompt    prompt.c  shell.c  wait.c
    #cisfun$ ./ppid
    5451
    #cisfun$ ./ppid
    5451
    #cisfun$ ^C
    julien@ubuntu:~/c/shell$ 
