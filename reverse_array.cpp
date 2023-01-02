#include<iostream>
#include<vector>
using namespace std;
void reverse(vector <int > &v,int i)
{
    if(i<0)
    return;
    cout<<v[i]<<" ";
    reverse(v,i-1);
}
int main(){
    vector <int> v={10,20,30,40,50};
reverse(v,v.size()-1);

}