#include<iostream>
using namespace std;
int count_target(const int*values,int size , int target)
{
    if(size==0)
    {
        return 0;
    }
    if(*values==target)
    {
        return 1 + count_target(values + 1, size-1 , target);
    }
    else
    {
        return count_target(values + 1, size -1 , target);
    }
}
int main()
{
    int values[]={7,7,72,202510228,202510229,202510230,202510231};
    int size=7;
    int target=7;
    cout << count_target(values,size,target);
}