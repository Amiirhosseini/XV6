//Amirreza Hosseini 9820363
#include "types.h"
#include "stat.h"
#include "user.h"

#define MAXCHILD 5

int child[MAXCHILD];
int inChild = 0;
int status = 0;

// void childWork(int pid)
// {

//     srand(getpid());
//     int r =  15;
//     //rand() % (100 + 1 - 1) + 1; //random number 1 to 10000
//     //int r =rand()%10;
//     printf(1,"message from child %d waited for %d seconds\n", getpid(), r);
//     sleep(r);
//     inChild = -1;
// }

// int main()
// {

//     for (int i = 0; i < MAXCHILD; i++)
//     {
//         child[i] = fork();
//         if (child[i] == 0)
//         {
//             inChild = 1;
//             break;
//         }
//     }

//     while (inChild == 1)
//     {
//         childWork(getpid());
//     }
//     while (inChild == 0)
//     {
//         sleep(5);
//         for (int i = 0; i < MAXCHILD; i++)
//         {
//             int child_d;
//             // //**comment from next line
//             // child_d = wait(&status);
//             // if (child_d > 0)
//             //     printf("child[%d] is dead now \n", child[i]);
//             // else if (child_d == -1)
//             //     printf("no child to wait for \n");

//             child_d = waitpid(child[i], &status,0);
//             if (child_d == 0)
//                 printf(1,"child[%d] is still alive\n", child[i]);
//             else if (child_d > 0)
//             {
//                 //printf("child[%d] is dead now \n", child[i]);
//                 child[i] = fork();
//                 if (child[i] == 0)
//                 {
//                     printf(1,"child[%d] regenerated with new pid %d\n", i, getpid());
//                     childWork(getpid());
//                 }
//             }
//             else
//                 printf(1,"no specified child to wait for \n");
//         }
//     }

//     return 0;
// }

int main()
{

        for (int i = 0; i < MAXCHILD; i++)
    {
        child[i] = fork();
        if (child[i] == 0)
        {
            inChild = 1;
            printf(1,"child %d created (pid : %d)\n",i,getpid());
            break;
        }
    }


//int pid = fork();
while (inChild== 0)
{
    //printf(1,"parent: child=%d\n", pid);
    //sleep(5);
    wait();
   // printf(1,"child %d is done\n", pid);
}
while (inChild == 1)
{
    sleep(900);
    // int i=0;
    // int s ;
    // for (i=0;i<9000000;i++)
    // {
    //     s = i*i+2;
    //     int j;
    //     for(j=0;j<9999999;j++)
    //     {
    //         s=i*i+s;
    //     }
    // }
    // printf(1,"%d",s);
    
    //printf("child: exiting\n");
    exit();
}
// else
// {
//     printf(1,"fork error\n");
// }

exit();
return 0;
}
