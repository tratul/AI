#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000];
int arrX2[1000];
int fit[1000];
int i=0,j=0,populationNum=0;
int total,sum=0,average=0,maxNum=0;;

int binToDec(int num)
{
    long bin, dec = 0, rem,base = 1;

    bin = num;
    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    arr[i++]=dec;;
    return 0;
}
int funcX2(int decimal)
{
    arrX2[j++]=decimal*decimal;
    return 0;
}

int MaxNumber()
{
    int temp=0;
   int temp1=0;
    for(int i=0;i<populationNum;i++)
    {
        if(arrX2[i]>temp)
        temp=arrX2[i];
    }
    cout << "The maximum number is: " << temp << endl;
    return 0;

}

void fitness(int av)
{
    for(int i=0;i<populationNum;i++)
    {
       // cout<<arr[i]<<endl;
       // cout<<arrX2[i]<<endl;
        float temp= (float) arr[i] / av ;
        cout<<temp<<endl;;
        fit[i++]=temp;

       float temp1= (float) arrX2[i] / av ;
        cout<<temp1<<endl;

    }
}




int main()
{
    cout<<"Population Numbers : ";
    cin>>populationNum;
    cout<<endl;
    cout << "Binary Numbers : ";
    cout<<endl;
    for(int i=0;i<populationNum;i++)
    {
        int binNum;
        cin>>binNum;
        binToDec(binNum);
        cout<<endl;
    }
     cout<<"Value of the variable:"<<endl;
    for(int i=0;i<populationNum;i++)

    {
        funcX2(arr[i]);
        cout<<arr[i]<<endl;
    }
    cout<<"Value of the x square:"<<endl;
    for(int i=0;i<populationNum;i++)
    {
        cout<<arrX2[i]<<endl;
    }

    for(int i=0;i<populationNum;i++)
    {
        sum+=arrX2[i];
        //cout<<sum<<endl;
       // cout<<arrX2[i]<<endl;
    }
    cout<<"Sum of x square:"<< sum<<endl;

    int avg=sum/populationNum;
    cout<<"Average value:"<< avg<<endl;

    MaxNumber();
    cout<<"fitness:"<<endl;
    fitness(avg);







    return 0;


}

/*

01101

11000

01000

10011

*/
