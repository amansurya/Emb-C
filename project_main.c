#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main()
{

uint16_t k1;
int k2;
while(1)
{
int b1;
b1=activity1();

if(b1==1)
{
k1=activity2();
k2=activity3(k1);
activity4(k2);

}

}
}
