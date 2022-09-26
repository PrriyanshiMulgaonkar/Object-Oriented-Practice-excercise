#include <iostream>
using namespace std;
//#include <conio>
int main()
{
/*double
dimesion
*/
//double dimension
int arr[4][4];
int i,j;

{
    for(i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<4; i++)
    {
        for (j=0; j<4; j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
}
}
