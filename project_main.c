#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{
uint16_t act2;
int act3;
while(1)
{
int act1;
act1=activity1();

if(act1==1)
{
act2=activity2();
act3=activity3(act2);
activity4(act3);
}
}
}
