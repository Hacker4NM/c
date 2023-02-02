#include<stdio.h>
#include<math.h>
#include<string.h>
struct packet
{
    char msg[100];
    int seqno;
    int pid;
}p[100],temp;
void main()
{
    int n,i,j,c;
    printf("\nNo of packets:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the message");
        scanf("%s",p[i].msg);
        do
        {
            c=0;
            p[i].seqno = rand() % 55;
            for(j=0;j<i;j++)
            {
                if(p[i].seqno == p[j].seqno)
                    c++;
            }
            printf("\nSequene No:%d",p[i].seqno);
        }while(c>0);
        p[i].pid = rand() % 55;
        printf("\Packet ID:%d\n",p[i].pid);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(j>0 && p[j-1].seqno > p[j].seqno)
        {
            temp = p[j];
            p[j] = p[j-1];
            p[j-1] = temp;
            j--;
        }
    }
    printf("After Sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("Message:%s\t",p[i].msg);
        printf("Sequence Number:%d\t",p[i].seqno);
        printf("Packet ID:%d\n",p[i].pid);
    }
}
