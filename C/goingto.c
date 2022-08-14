#include<stdio.h>

int main()

{

    long long int c_cost,o_cost,d,oc,of,od,cs,cb,cm,cd;

    scanf("%lld",&d);

    scanf("%lld%lld%lld",&oc,&of,&od);

    scanf("%lld%lld%lld%lld",&cs,&cb,&cm,&cd);

    c_cost=cb+(cm*(d/cs))+(d*cd);

    o_cost=oc+(od*(d-of));

    if(o_cost<=c_cost)

    {

        printf("Online Taxi");

    }

    else

    {

        printf("Classic Taxi");

    }

    return 0;

}