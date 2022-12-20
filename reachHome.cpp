#include<iostream>
using namespace std;
void reachHome(int src, int des)
{
    cout<<"you step reach to :"<<src<<endl;
    if(src==des)
        return ;
    

    src++;


    // recursive relation 

    reachHome(src, des);
}
int main()
{
int src =1;
int des =10;


reachHome(src,des);

return 0;
}
