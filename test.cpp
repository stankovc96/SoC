#include<algorithm>
#include<iostream>
#include<vector>

void print_array(std::vector<int>&);
bool my_func(int,int);

int main(int argc,char* argv[])
{
    int a[]={7,9,11,4,10,2,15,12};

    std::vector<int> wi(a,a+sizeof(a)/sizeof(int));
    std::cout<<"Original vector. \n";
    print_array(wi);
    std::sort(wi.begin(),wi.end());
        std::cout<<"Sorted vector. \n";
    print_array(wi);
    wi[5]=100;
        std::cout<<"Change one element.\n";
    print_array(wi);
    std::sort(wi.begin(),wi.end(),my_func);
    std::cout<<"Custom function sorted vector.\n";
    print_array(wi);
    return 0;
}
void print_array(std::vector<int>& vi)
{
    for(std::vector<int>::iterator it=vi.begin();it!=vi.end();++it)
    std::cout<<*it<<" ";
    std::cout<<std::endl;
}
bool my_func(int a,int b)
{
    return a>b;
}
