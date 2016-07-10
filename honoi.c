#include <stdio.h>
#include<conio.h>
#include<string.h>
void Hanoitower(int,char,char,char);
void Hanoitower(int n, char frod, char torod, char aurod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", frod, torod);
        return;
    }
    Hanoitower(n-1, frod, aurod, torod);
    printf("\n Move disk %d from rod %c to rod %c", n, frod, torod);
    Hanoitower(n-1, aurod, torod, frod);
    getch();
}
 
int main()
{
    int n = 4; // Number of disks
    Hanoitower(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}
