#include <stdio.h>
#include <assert.h>
typedef struct  {
    int h; // hours
    int m; // minutes
} Time;

void print_time(Time t);
int time2min(Time t);
Time min2time(int mm);
int is_equal(Time t1, Time t2);
Time add( Time t1, Time t2);


int main()
{   
        Time t1 = {22, 55};
        Time dt = {2,7};
        Time t2,
            expected_res = {1,2};
        
        t2 = add(t1, dt);
        print_time(t2);
        
        
        print_time(t1);
        print_time(dt);

        //int mm = time2min(dt);
        Time t = min2time(150);
        print_time(t);

        assert(1 == is_equal(min2time(127), dt));


    return 0;
}

void print_time(Time t)
{
    printf("%02d : %02d\n", t.h, t.m);
}

int time2min(Time t)
{
    int res;

    res = t.h * 60 + t.m;
    return res;
}

Time min2time(int mm)
{
    Time res;
    res.m = mm % 60;
    res.h = mm / 60 % 24;
    return res;
}

int is_equal(Time t1, Time t2)
{
    if(t1.h != t2.h)
        return 0;
    if(t1.m != t2.m)
        return 0;
    return 1;        
}

Time add(Time t1, Time t2)
{
    int mmres = time2min(t1) + time2min(t2);
    Time res = min2time(mmres);
    return res;
}
