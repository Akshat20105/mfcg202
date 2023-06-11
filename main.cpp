#include <iostream>
#include "includes\Math\vector.h"

int main()
{
    std::cout<<"Assignment One Evaluation"<<std::endl;
    float x,y,z;
    Vector3 vec1(1,2,3);
    vec1.print();
    std::cin>>x>>y>>z;
    Vector3 vec2(x,y,z);
    std::cout<<vec1.dot(vec2);

    return 0;


}
