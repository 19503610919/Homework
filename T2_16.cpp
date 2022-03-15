/* FileName: T2_16.cpp
 * Author:   Jiayi Han
 * E-mail:   2415190861@qq.com
 * Date:     Mar 15th,2022
 * College:  Business School
 * Function: 用户输入两个数，输出两数的和差积商
 */

#include <iostream>
using namespace std;
main()
{
    int a,b,sum,dif,product,quo;
    cout<<"Please enter two numbers."<<endl;
    cin>>a>>b;
    sum=a+b;
    dif=a-b;
    product=a*b;
    quo=a/b;
    cout<<"两数之和是"<<sum<<endl;
    cout<<"两数之差是"<<dif<<endl;
    cout<<"两数之积是"<<product<<endl;
    cout<<"两数之商是"<<quo<<endl;
    return 0;

}
