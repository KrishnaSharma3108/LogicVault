#include <iostream>
using namespace std;
int main()
{
    int a[9] = {10, 10, 20, 30, 20, 10, 20, 40, 50};
    int n = 9, ns, j = 0, pos[9], loc = -1;
    cout << "enter no to del:";
    cin >> ns;
    for (int i = 0; i < 9; i++)
    {
        if (a[i] == ns)
        {
            pos[j] = i;
            j++;
        }
    }
    cout<<j<<endl;
    //positions 10  [0,1,5]
    for (int i = 0; i < j; i++)
    {
        //if(i==0)
        //loc = pos[i];
        //else
        loc=pos[i]-i;
        cout<<pos[i]<<"...";
        for (int k = loc; k < n; k++)
        {
            //cout<<a[k]<<"<="<<a[k+1]<<endl;
            a[k] = a[k + 1];
        }
        n--;
        
        //i--;
    }
    cout<<"Total n "<<n<<endl;
     for (int i = 0; i < n; i++)
     {
         cout << a[i] << " ";
     }
    return 0;
}