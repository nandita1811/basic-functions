/*1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>

using namespace std;

int main()
{
   
int row =1;
int n;
cin>>n;
while(row<=n)
{
    //1st triangle
    int col = 1;
    while(col<=n+1-row)
    {
        cout<<col;
        col++;
    }
    
    
    //2nd triangle
    while(col<=n)
    {
        cout<<"*";
        col++;
    }
    
    
    //3rd triangle
    while(col<=n+row-1)
    {
        cout<<"*";
        col++;
    }
    
    
    //4th triangle
    int start = n+1-row;
    while(col<=2*n)
    {
        cout<<start;
        start--;
        col++;
    }
    
    
    cout<<endl;
    row++;
}
}


