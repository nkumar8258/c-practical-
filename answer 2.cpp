#include<bits/stdc++.h>
using namespace std;


int main(){
    set<int> s;
    int arr[]= {1,1,1,2,2,2,9,7,3,3,5,5,6,8,9,4,5,56};
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    set<int>::iterator itr;
    for (itr=s.begin(); itr!=s.end(); itr++){
        cout<<*itr;
		cout<<" ";
    }

    return (0);
}