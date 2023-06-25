// Variation 1- Given ror no, col no, print the element at (r,c) 

#include <iostream>
using namespace std;
void PrintNum(int N, int R)
{
    int fact=1;
    for(int i=0;i<R;i++)
    {
        fact=fact*(N-i);
        fact=fact/(i+1);
    }
    cout<<fact;
}
int main() {
    int r,c;
    cin>>r>>c;
    PrintNum(r-1,c-1);
    return 0;
}

// Variation 2- Given row number, print the row elements of Pascal Triangle

#include <iostream>
using namespace std;
void PrintNums(int n)
{
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<n;i++)
    {
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    PrintNums(n);
    return 0;
}
