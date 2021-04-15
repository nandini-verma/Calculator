#include <iostream>
using namespace std;
int main()
{

    char ch[10],op[1];
    cout<<"Enter operation ";
    cin>>ch;

    int i;
    int op1, op2;
    op1=0;
    op2=0;

    for(i=0; ch[i]!='\0';i++)
    {
        if((int)ch[i]>=48 && (int)ch[i]<=57){
            op1=op1*10+(((int)ch[i])-48);
        }
        else{
                op[0]=ch[i];
                break;
    }}
    i++;
    for(; ch[i]!='\0';i++)
    {
        if((int)ch[i]>=48 && (int)ch[i]<=57){
            op2=op2*10+(((int)ch[i])-48);
        }

    }


    cout<<"ouput = ";
    switch(op[0])
    {
    case '+':
        cout<<op1+op2<<endl;
        break;
    case '-':
        cout<<op1-op2<<endl;
        break;
    case '*':
        cout<<op1*op2<<endl;
        break;
    case '/':
        cout<<op1/op2<<endl;
        break;

    }
    return 0;
}
